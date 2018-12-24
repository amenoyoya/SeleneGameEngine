#pragma once

#include "../../base/core.h"
#include <lua.hpp>
#include <lj_obj.h>

namespace Sltk{
	/* SeleneTalkモード使用設定 */
	inline void setSeleneTalkMode(bool flag){
		lua_sltkmode(flag? 1: 0);
	}
	inline bool getSeleneTalkMode(){
		return 0 != lua_sltkmode(-1);
	}
	
	/* Luaスクリプトエンジン */
	class Lua: public Object {
	public:
		enum{
			T_NIL=0, T_BOOLEAN, T_LIGHTUSERDATA, T_NUMBER, T_STRING,
			T_TABLE, T_FUNCTION, T_USERDATA, T_THREAD
		};
		
		explicit Lua(bool useExtLib=true);
		explicit Lua(lua_State *L, bool useExtLib=false);
		~Lua(){
			if(needclose && pLua) lua_close(pLua);
		}
		
		// エラーメッセージ設定
		// ※エラーメッセージの取得は getMessage で行う
		void setMessage(const string &msg){ _message = msg; }
		
		// luaスクリプトを関数化してスタックの一番上に積む
		bool loadFile(const string &filename);
		bool loadBuffer(const void *buffer, u32 size, const string &codeName="");
		bool loadString(const string &str, const string &codeName=""){
			return loadBuffer(str.c_str(), str.size(), codeName.c_str());
		}
		
		// luaスクリプト実行(&スタッククリア)
		// lastErrorでエラーコードを取得できる
		// retnum分だけ戻り値がスタックに積まれるためpopする必要がある
		bool doFile(const string &filename, s32 retnum=0){
			return loadFile(filename) && call(0, retnum);
		}
		bool doBuffer(const void *buffer, u32 size, const string &codeName="", s32 retnum=0){
			return loadBuffer(buffer, size, codeName) && call(0, retnum);
		}
		bool doString(const string &str, const string &codeName="", s32 retnum=0){
			return doBuffer(str.c_str(), str.size(), codeName.c_str(), retnum);
		}
		
		// registerCFuctionする関数内などでエラーを発生させる
		s32 error(const string &message){
			return luaL_error(pLua, message.c_str());
		}
		
		// luaコードをコンパイルする
		bool compileString(const string &code, const string &destFile, const string &codeName="", bool strip=true);
		bool compileString(const string &code, Binary *dest, const string &codeName="", bool strip=true);
		bool compileFile(const string &srcFile, const string &destFile, bool strip=true);
		bool compileFile(const string &srcFile, Binary *dest, bool strip=true);
		
		// luaのn番目(1～)の引数、あるいは戻り値(-1～)を得る
		string getString(s32 n){
			return lua_tostring(pLua, n);
		}
		double getNumber(s32 n){
			return lua_tonumber(pLua, n);
		}
		s32 getInteger(s32 n){
			return lua_tointeger(pLua, n);
		}
		bool getBoolean(s32 n){
			return 0 != lua_toboolean(pLua, n);
		}
		void *getUserData(s32 n){
			return lua_touserdata(pLua, n);
		}
		const void *getPointer(s32 n){
			return lua_topointer(pLua, n);
		}
		
		// luaに引数、あるいは戻り値を与える
		Lua *pushString(const string &str){
			lua_pushstring(pLua, str.c_str()); return this;
		}
		Lua *pushNumber(double d){
			lua_pushnumber(pLua, d); return this;
		}
		Lua *pushBoolean(bool t){
			lua_pushboolean(pLua, t); return this;
		}
		Lua *pushPointer(void *pt){
			lua_pushlightuserdata(pLua, pt); return this;
		}
		Lua *pushCFunction(int (*func)(lua_State *)){
			lua_pushcfunction(pLua, func); return this;
		}
		Lua *pushNil(){
			lua_pushnil(pLua); return this;
		}
		
		// luaにC関数を登録する
		void registerCFunction(const string &name, int (*func)(lua_State *)){
			lua_register(pLua, name.c_str(), func);
		}
		
		/* 特定のtableにC関数を登録したい場合（例: Sltk.print()）
		 * lua.getGlobal("Sltk");			// |table<s3>|
		 * lua.pushCFunction(cprint);		// |table<s3>|cfunction<cprint>|
		 * lua.setField(-2, "print");		// Sltk.print = cprint => |table<s3>|
		 */
		
		// luaのグローバル変数、関数を取得
		// 取得した変数はスタックの一番後ろに積まれる(toXXX(-1)などで得る)
		// 使い終わったらpop(1)で削除する
		void getGlobal(const string &name){
			lua_getglobal(pLua, name.c_str());
		}
		
		// スタックの一番上のデータをグローバル変数として登録
		void setGlobal(const string &name){
			lua_setglobal(pLua, name.c_str());
		}
		
		// index番目のスタックにあるテーブルの値を取得
		// スタックが|table|key|になっている時、
		// getTable(-2)でkeyの値を取得 => |table|value|
		void getTable(s32 index){
			lua_gettable(pLua, index);
		}
		
		// index番目のスタックにあるテーブルのkey(文字列)の値を取得
		void getField(s32 index, const string &key){
			lua_getfield(pLua, index, key.c_str());
		}
		
		// index番目のスタックにあるテーブルのkey(数値)の値を取得
		void getRawValue(s32 index, s32 key){
			lua_rawgeti(pLua, index, key);
		}
		
		// index番目のスタックにあるテーブルにキーと値を設定
		// スタックが|table|key|value|になっている時、
		// setTable(-3)で table[key] = value となる => |table|
		void setTable(s32 index){
			lua_settable(pLua, index);
		}
		
		// index番目のスタックにあるテーブルのkey(文字列)の値を設定
		void setField(s32 index, const string &key){
			lua_setfield(pLua, index, key.c_str());
		}
		
		// index番目のスタックにあるテーブルのkey(数値)の値を設定
		void setRawValue(s32 index, s32 key){
			lua_rawseti(pLua, index, key);
		}
		
		// テーブル作成
		// narr: 配列要素の数、 nrec: 非配列要素の数
		void createTable(s32 narr=0, s32 nrec=0){
			lua_createtable(pLua, narr, nrec);
		}
		
		// スタックの一番上の値を適当な変数に保持させる
		// luaのコールバック関数などをC側で保持しておくときなどに使う
		// canAccess: trueならLua側もアクセス可能な変数に代入する
		s32 store(bool canAccess=false){
			return luaL_ref(pLua, canAccess? LUA_GLOBALSINDEX: LUA_REGISTRYINDEX);
		}
		
		// storeの戻り値を指定することでその変数をスタックの一番上に積む
		void getStoredValue(s32 key, bool canAccess=false){
			lua_rawgeti(pLua, canAccess? LUA_GLOBALSINDEX: LUA_REGISTRYINDEX, key);
		}
		
		// 不要になった変数を破棄する
		void removeStoredValue(s32 key, bool canAccess=false){
			luaL_unref(pLua, canAccess? LUA_GLOBALSINDEX: LUA_REGISTRYINDEX, key);
		}
		
		// スタックの最上位インデックスを取得(スタック数を取得)
		s32 getTop(){
			return lua_gettop(pLua);
		}
		
		// スタックの最上位インデックスを設定(スタックの数を変更)
		// i=1なら一番下のスタックだけを残す
		// i=-1だと変化なし(一番上のスタックを一番上に設定しても変わらない)
		void setTop(s32 i){
			lua_settop(pLua, i);
		}
		
		// スタックのn番目のタイプ取得
		s32 getType(s32 n){
			return lua_type(pLua, n);
		}
		
		// スタックの上（後ろ）からi番目までを削除
		void pop(s32 i){
			lua_pop(pLua, i);
		}
		
		// i番目のスタックを削除
		void remove(s32 i){
			lua_remove(pLua, i);
		}
		
		// 一番上のスタックをi番目に移動
		void insert(s32 i){
			lua_insert(pLua, i);
		}
		
		// 最低スタックサイズを変更
		void checkStack(s32 size){
			lua_checkstack(pLua, size);
		}
		
		/* --- 以下、getGlobal～popラッパー --- */
		//グローバル変数取得
		string callString(const string &name);
		double callNumber(const string &name);
		s32 callInteger(const string &name);
		bool callBoolean(const string &name);
		
		// lua関数を呼び出す
		// argnum:引数の個数、retnum:戻り値の個数
		// ①getGlobalで関数名を指定
		// ②push***で引数を指定
		// ③callで関数実行→スタックの後ろに戻り値が返る
		// ④retnum分だけpopして戻り値を削除する
		bool call(s32 argnum, s32 retnum);
		
		lua_State *getHandle(){return pLua;}
		operator lua_State*() const{return pLua;}
	private:
		lua_State		*pLua;
		bool			 needclose;
	};
}
