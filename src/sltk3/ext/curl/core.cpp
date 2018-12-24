#include "core.h"

namespace Sltk{
	// curl データ取得関数
	static size_t curl_get_function(void *data, size_t size, size_t byte, void *obj){
		Curl *curl = (Curl*)obj;
		if(curl) return curl->getFunction(data, size, byte);
		return 0;
	}
	// curl データ送信関数
	static size_t curl_post_function(void *data, size_t size, size_t byte, void *obj){
		Curl *curl = (Curl*)obj;
		if(curl) return curl->postFunction(data, size, byte);
		return 0;
	}
	// curl 通信中実行関数
	static int curl_progress_function(void *obj, double dlTotal, double dlNow, double ulTotal, double ulNow){
		Curl *curl = (Curl*)obj;
		if(curl) return curl->progressFunction(dlTotal, dlNow, ulTotal, ulNow);
		return 1;
	}
	// curl デバッグ関数
	static int curl_debug_function(CURL *handle, curl_infotype type, char *data, size_t size, void *obj){
		Curl *curl = (Curl*)obj;
		if(curl) return curl->debugFunction((u32)type, data, size);
		return 0;
	}
	
	Curl::Curl(): curl(nullptr), res(CURLE_OK) {
		open();
		// デフォルトのデータ取得関数
		getFunction = [this](void *pData, u32 size, u32 byte)->u32{
			data.push(pData, size * byte);
			return size * byte;
		};
		//デフォルトのデータ送信関数
		postFunction = [](void *pData, u32 size, u32 byte)->u32{return 0;};
		//デフォルトのデータ送受信中実行関数
		progressFunction = [](double dlTotal, double dlNow, double ulTotal, double ulNow)->u32{return 0;};
		// デフォルトのデバッグ関数
		debugFunction = [this](u32 type, void *data, u32 size)->s32{
			Console::write(type > 4? (char*)data+1: (char*)data);
			return 0;
		};
	}
	
	bool Curl::setDefaultOptions(){
		// データ取得関数を登録
		if(CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_WRITEFUNCTION, curl_get_function))
			|| CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_WRITEDATA, this)))
		{
			_state = FAILED;
			return false;
		}
		// データ送信関数を登録
		if(CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_READFUNCTION, curl_post_function))
			|| CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_READDATA, this)))
		{
			_state = FAILED;
			return false;
		}
		// データ送受信中実行関数を登録
		if(CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_PROGRESSFUNCTION, curl_progress_function))
			|| CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_PROGRESSDATA, this)))
		{
			_state = FAILED;
			return false;
		}
		// デバッグ関数を登録
		if(CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_DEBUGFUNCTION, curl_debug_function))
			|| CURLE_OK != (res = curl_easy_setopt(curl, ::CURLOPT_DEBUGDATA, this)))
		{
			_state = FAILED;
			return false;
		}
		_state = ACTIVE;
		return true;
	}
	
	bool Curl::open(){
		close();
		if(nullptr == (curl = curl_easy_init())){
			_state = FAILED;
			_message = "failed initialize curl";
			return false;
		}
		return setDefaultOptions();
	}
	
	void Curl::close(){
		_state = NONE;
		_message.clear();
		res = CURLE_OK;
		if(curl){
			curl_easy_cleanup(curl);
			curl = nullptr;
		}
	}
}
