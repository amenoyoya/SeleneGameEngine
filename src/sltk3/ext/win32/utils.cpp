#include "utils.h"
#include <shlobj.h>
#include <io.h>

// メモリアドレス操作関連ヘッダ
#include <tlhelp32.h>
#include <psapi.h>

namespace Sltk{
	namespace Win32{
		/* コンソールを開かずにPipe処理するためのクラス */
		bool Pipe::open(const string &filename){
			Handle hOutputReadTmp, hOutputWrite, hErrorWrite, hInputWriteTmp, hInputRead;
			SECURITY_ATTRIBUTES sa;
			STARTUPINFO si;
			PROCESS_INFORMATION pi;
			
			close();
			
			// Pipeハンドル準備
			ZeroMemory(&sa, sizeof(sa));
			sa.nLength= sizeof(SECURITY_ATTRIBUTES);
			sa.bInheritHandle = TRUE;
			
			if(!CreatePipe(&hOutputReadTmp.handle, &hOutputWrite.handle, &sa, 0)){
				_state = FAILED;
				_message = "failed to create pipe for output";
				return false;
			}
			if(!DuplicateHandle(GetCurrentProcess(), hOutputWrite.handle,
				GetCurrentProcess(), &hErrorWrite.handle, 0, TRUE, DUPLICATE_SAME_ACCESS))
			{
				_state = FAILED;
				_message = "failed to duplicate handle of error writer";
				return false;
			}
			if(!DuplicateHandle(GetCurrentProcess(), hOutputReadTmp.handle,
				GetCurrentProcess(), &hOutputRead.handle, 0, FALSE, DUPLICATE_SAME_ACCESS))
			{
				_state = FAILED;
				_message = "failed to duplicate handle of output reader";
				return false;
			}
			
			if(!CreatePipe(&hInputRead.handle, &hInputWriteTmp.handle, &sa, 0)){
				_state = FAILED;
				_message = "failed to create pipe for input";
				return false;
			}
			if(!DuplicateHandle(GetCurrentProcess(), hInputWriteTmp.handle,
				GetCurrentProcess(), &hInputWrite.handle, 0, FALSE, DUPLICATE_SAME_ACCESS))
			{
				_state = FAILED;
				_message = "failed to duplicate handle of input writer";
				return false;
			}
			
			// 子プロセスを起動
			ZeroMemory(&si, sizeof(si));
			si.cb         = sizeof(STARTUPINFO);
			si.dwFlags    = STARTF_USESTDHANDLES;
			si.hStdInput  = hInputRead.handle;
			si.hStdOutput = hOutputWrite.handle;
			si.hStdError  = hErrorWrite.handle;
			if(!CreateProcess(nullptr, (LPWSTR)Encoding::utf8ToWideString(filename).c_str(),
				nullptr, nullptr, TRUE, CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi))
			{
				_state = FAILED;
				_message = "failed to create process '"+filename+"'";
				return false;
			}
			CloseHandle(pi.hThread);
			hProcess.handle = pi.hProcess;
			
			// HANDLEをFileに変換
			if(!pipeWriter.open((u32)_fdopen(_open_osfhandle((intptr_t)hInputWrite.handle, 0), "w"), 1)){
				_state = FAILED;
				_message = "failed to open pipe writer";
				return false;
			}
			if(!pipeReader.open((u32)_fdopen(_open_osfhandle((intptr_t)hOutputRead.handle, 0), "r"), 1)){
				_state = FAILED;
				_message = "failed to open pipe writer";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		void Pipe::close(){
			_state = NONE;
			_message.clear();
			hProcess.close();
			hOutputRead.close();
			hInputWrite.close();
			pipeReader.close();
			pipeWriter.close();
		}
		
		
		/*** プロセス操作 ***/
		static vector<u32> _psIdArray;
		static vector<string> _psNameArray;
		static u32 _psNum = 0;
		
		const u32 &getProcessCount(){ return _psNum; }
		const u32 &getProcessID(u32 n){ return _psIdArray[n]; }
		const string &getProcessName(u32 n){ return _psNameArray[n]; }
		
		bool acquireAllProcess(){
			PROCESSENTRY32 p32;
			HANDLE handle;
			
			if(nullptr == (handle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0))) return false;
			ZeroMemory(&p32, sizeof(PROCESSENTRY32));
			p32.dwSize = sizeof(PROCESSENTRY32);
			_psIdArray.clear();
			_psNameArray.clear();
			_psNum = 0;
			if(Process32First(handle, &p32)){
				do{
					_psIdArray.push_back(p32.th32ProcessID);
					_psNameArray.push_back(Encoding::toUTF8(p32.szExeFile));
					++_psNum;
				}while(Process32Next(handle, &p32));
			}
			CloseHandle(handle);
			return true;
		}
		
		/*** プロセス操作クラス ***/
		bool Process::open(u32 id){
			close();
			processID = id;
			if(nullptr == (hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, id))){
				_state = FAILED;
				_message = "failed to open process["+toString(id)+"]";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		bool Process::open(const string &pName){
			PROCESSENTRY32 p32;
			HANDLE handle;
			
			close();
			if(nullptr == (handle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0))){
				_state = FAILED;
				_message = "failed to enumerate processes";
				return false;
			}
			ZeroMemory(&p32, sizeof(PROCESSENTRY32));
			p32.dwSize = sizeof(PROCESSENTRY32);
			if(Process32First(handle, &p32)){
				do{
					if(isSameStringIgnoreCase(Encoding::toUTF8(p32.szExeFile), pName)){
						CloseHandle(handle);
						return open(p32.th32ProcessID);
					}
				}while(Process32Next(handle, &p32));
			}
			CloseHandle(handle);
			_state = FAILED;
			_message = "failed to open process '"+pName+"'";
			return false;
		}
		
		void Process::close(){
			_state = NONE;
			_message.clear();
			threadID = processID = 0;
			if(hProcess){
				CloseHandle(hProcess);
				hProcess = nullptr;
			}
		}
		
		bool Process::execute(const string &path){
			PROCESS_INFORMATION pi;
			STARTUPINFO si;
			
			close();
			ZeroMemory(&si,sizeof(si));
			si.cb = sizeof(si);
			si.dwFlags = STARTF_USESHOWWINDOW;
			si.wShowWindow = SW_SHOW;
			if(!CreateProcess(nullptr, (LPWSTR)Encoding::utf8ToWideString(path).c_str(), nullptr, nullptr, FALSE,
				NORMAL_PRIORITY_CLASS, nullptr, nullptr, &si, &pi))
			{
				_state = FAILED;
				_message = "failed to execute process '"+path+"'";
				return false;
			}
			WaitForInputIdle(pi.hProcess, INFINITE);
			
			threadID = pi.dwThreadId, processID = pi.dwProcessId;
			hProcess = pi.hProcess;
			CloseHandle(pi.hThread);
			_state = ACTIVE;
			return true;
		}
		
		bool Process::read(u32 address, void *dest, u32 size){
			return FALSE != ReadProcessMemory(hProcess, (LPVOID)address, dest, size, nullptr);
		}
		
		u32 Process::getValue(u32 address, u8 byte){
			u32 ret = 0;
			
			if(!read(address, &ret, byte)) return (u32)-1;
			return ret;
		}
		
		bool Process::write(u32 address, const void *buf, u32 size){
			return FALSE != WriteProcessMemory(hProcess, (LPVOID)address, buf, size, nullptr);
		}
		
		bool Process::writeExpression(u32 address, const string &exp){
			u32 size = exp.size();
			
			// 文字数が偶数でなければ実行できない
			if(exp.size()%2 != 0) return false;
			for(u32 i = 0; i < size; i += 2){
				string buff = exp.substr(i, 2);
				
				// 文字列の細かいチェックは面倒なので行わない
				if(buff == "??") continue;
				else{
					u8 val = (u8)strtol(buff.c_str(), nullptr, 16);
					if(!write(address + i/2, &val, 1)) return false;
				}
			}
			return true;
		}
		
		u32 Process::acquireModules(){
			u32 dwSize = 0;
			u32 size = 0;
			
			if(!EnumProcessModules(hProcess, nullptr, 0, &dwSize)) return false;
			hModules.clear();
			hModules.resize(size = dwSize/sizeof(HMODULE));
			if(FALSE == EnumProcessModules(hProcess, &hModules[0], dwSize, &dwSize)) return 0;
			return size;
		}
		
		string Process::getModuleNameFromHandle(u32 hModule){
			wchar_t szModule[256];
			
			GetModuleBaseName(hProcess, (HMODULE)hModule, szModule, 256);
			return Encoding::toUTF8(szModule);
		}
		
		string Process::getModuleName(u32 index){
			if(index >= hModules.size()) return "";
			return getModuleNameFromHandle((u32)hModules[index]);
		}
		
		u32 Process::getModule(const string &name){
			u32 size = hModules.size();
			for(u32 i = 0; i < size; ++i){
				if(isSameStringIgnoreCase(name,
					getModuleNameFromHandle((u32)hModules[i]))) return (u32)hModules[i];
			}
			return 0;
		}
		
		u8 Process::_getState(){
			DWORD code = 0;
			
			GetExitCodeProcess(hProcess, &code);
			if(code != STILL_ACTIVE) return FINISHED;
			return _state;
		}
		
		
		/** class Registry **/
		bool Registry::open(u32 key, const string &sub){
			close();
			hKey = (HKEY)key;
			subKey = sub;
			if(ERROR_SUCCESS != RegOpenKeyEx(hKey, Encoding::utf8ToWideString(sub).c_str(), 0, KEY_ALL_ACCESS, &regKey)){
				_state = FAILED;
				_message = "failed to open registry key '"+sub+"'";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		bool Registry::create(u32 key, const string &sub){
			u32 disp = 0;
			
			close();
			hKey = (HKEY)key;
			subKey = sub;
			if(ERROR_SUCCESS != RegCreateKeyEx(hKey, Encoding::utf8ToWideString(sub).c_str(), 0, L"",
				REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, nullptr, &regKey, &disp))
			{
				_state = FAILED;
				_message = "failed to create registry key '"+sub+"'";
				return false;
			}
			_state = ACTIVE;
			return true;
		}
		
		void Registry::close(){
			_state = NONE;
			_message.clear();
			if(regKey){
				RegCloseKey(regKey);
				regKey = nullptr;
			}
		}
		
		u32 Registry::getValue(Binary *data, const string &name){
			u32 type=0, size=0, cur = data->getSize();
			
			RegQueryValueEx(regKey, Encoding::utf8ToWideString(name).c_str(), nullptr, &type, nullptr, &size);
			data->resize(cur + size);
			RegQueryValueEx(regKey, Encoding::utf8ToWideString(name).c_str(), nullptr, &type, (LPBYTE)data->getPointer()+cur, &size);
			return type;
		}
		
		u32 Registry::getString(Binary *data, const string &name){
			u32 type=0, size=0, cur = data->getSize();
			
			RegQueryValueEx(regKey, Encoding::utf8ToWideString(name).c_str(), nullptr, &type, nullptr, &size);
			data->resize(cur + size);
			RegQueryValueEx(regKey, Encoding::utf8ToWideString(name).c_str(), nullptr, &type, (LPBYTE)data->getPointer()+cur, &size);
			return type;
		}
		
		void Registry::remove(u32 MAX_KEY_LENGTH){
			DWORD dwRtn = ERROR_SUCCESS, dwSubKeyLength = MAX_KEY_LENGTH;
			wstring szSubKey;
			
			szSubKey.resize(MAX_KEY_LENGTH);
			while(dwRtn == ERROR_SUCCESS){
				dwRtn = RegEnumKeyEx(regKey, 0, &szSubKey[0], &dwSubKeyLength, nullptr, nullptr, nullptr, nullptr);
				if(dwRtn == ERROR_NO_MORE_ITEMS){
					dwRtn = RegDeleteKey(hKey, Encoding::utf8ToWideString(subKey).c_str());
					break;
				}else if(dwRtn == ERROR_SUCCESS){
					dwRtn = RegDeleteKey(regKey, szSubKey.c_str());
				}
			}
		}
		
		void reflectRegistry(){
			SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_IDLIST, 0, 0);
		}
	}
}
