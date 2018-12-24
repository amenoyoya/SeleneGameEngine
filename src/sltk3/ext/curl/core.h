#pragma once

#include "../../base/core.h"
#include <functional>

#define CURL_STATICLIB
/* USE_ZLIB on cmd-line */
#define USE_ZLIB               1
#define HAVE_ZLIB_H            1
#define HAVE_LIBZ              1
/* USE_OPENSSL on cmd-line */
#define USE_SSLEAY             1
#define USE_OPENSSL            1
#define HAVE_CRYPTO_CLEANUP_ALL_EX_DATA 1
#define HAVE_OPENSSL_ENGINE_H  1
#define OPENSSL_NO_KRB5        1

#include <curl/curl.h>

namespace Sltk{
	/*** ネットワーク通信クラス ***/
	class Curl: public Object {
	public:
		function<u32 (void *data, u32 size, u32 byte)>
			getFunction,      // データ取得関数
			postFunction;     // データ送信関数
		function<s32 (double dlTotal, double dlNow, double ulTotal, double ulNow)>
			progressFunction; // データ送受信中実行関数．これを使う場合はNOPROGRESSオプションをOFFにする
		function<s32 (u32 type, void *data, u32 size)>
			debugFunction;    // デバッグ関数(VERBOSEオプションをONにした時の動作)
	public:
		Curl();
		~Curl(){
			close();
		}
		
		bool open();
		void close();
		
		/* 各種設定 */
		bool set(u32 option, const string &val){
			return curl? CURLE_OK == (res = curl_easy_setopt(curl, (CURLoption)option, val.c_str())): false;
		}
		bool set(u32 option, s32 val){
			return curl? CURLE_OK == (res = curl_easy_setopt(curl, (CURLoption)option, val)): false;
		}
		
		// 設定をリセット
		bool reset(){
			if(curl){
				curl_easy_reset(curl);
				return setDefaultOptions();
			}
			return false;
		}
		
		/* ネットワーク接続(処理実行) */
		// 現在の設定でネットワークに接続
		bool execute(){
			return curl? CURLE_OK == (res = curl_easy_perform(curl)): false;
		}
		
		// 取得したデータの内容を返す
		Binary *getData(){return &data;}
	private:
		CURL		*curl;
		CURLcode	 res;
		Binary		 data;
		
		bool setDefaultOptions(); // デフォルトオプションを設定
	protected:
		virtual string _getMessage(){ // エラーメッセージ取得
			if(res != CURLE_OK) return curl_easy_strerror(res);
			return _message;
		}
	};
}
