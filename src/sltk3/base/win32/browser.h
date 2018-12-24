#pragma once

/* IEコンポーネント */

#define _UNICODE

#include <atlbase.h>
extern CComModule _Module;  // AtlModuleInitClassを使うためのおまじない
#include <atlcom.h>
#include <atlhost.h>
#include <exdispid.h>
#include "window.h"

namespace Sltk{
	namespace Win32{
		/*** Variantデータ型 ***/
		enum VariantType{
			VT_NONE = 0, VT_STRING, VT_INTEGER, VT_NUMBER, VT_ERROR
		};
		
		struct Variant{
			u8 vType;
			string strVal;
			s32 intVal;
			double numVal;
			
			explicit Variant(u8 type=0, const string &str="", s32 ival=0, double nval=0.0)
				: vType(type), strVal(str), intVal(ival), numVal(nval) {}
		};
		
		
		/*** HTML要素クラス ***/
		class HTMLElement: public Object {
		public:
			HTMLElement(const CComPtr<IHTMLElement> &pElement): element(pElement) {}
			
			// 指定属性を取得
			Variant getAttribute(const string &attr);
			// 指定属性を削除
			bool removeAttribute(const string &attr);
			// 指定属性をセット
			bool setAttribute(const string &attr, const Variant &val);
			
			// <class>を取得
			string getClass();
			// <class>をセット
			bool setClass(const string &name);
			
			// <id>を取得
			string getID();
			// <id>をセット
			bool setID(const string &id);
			
			// innerHTMLを取得
			string getInnerHTML();
			// innerHTMLをセット
			bool setInnerHTML(const string &html);
			
			// innerTextを取得
			string getInnerText();
			// innerTextをセット
			bool setInnerText(const string &text);
		private:
			CComPtr<IHTMLElement> element;
		protected:
			virtual u8 _getState(){
				return element? ACTIVE: NONE;
			}
		};
		
		
		/*** HTML要素集合クラス ***/
		class HTMLElementCollection: public Object {
		public:
			HTMLElementCollection(const CComPtr<IHTMLElementCollection> &pCol): collection(pCol) {}
			
			// 要素数を取得
			u32 getSize() const{
				long lSize;
				return SUCCEEDED(collection->get_length(&lSize))? lSize: 0;
			}
			
			// index番目の要素を取得
			HTMLElement getElement(u32 index);
			// 指定<id>の要素を取得
			HTMLElement getElement(const string &id);
		private:
			CComPtr<IHTMLElementCollection> collection;
		protected:
			virtual u8 _getState(){
				return collection? ACTIVE: NONE;
			}
		};
		
		
		/*** IEコンポーネントクラス ***/
		#define SINKID_SLIBBROWSER 0
		
		class Browser: public Object {
		public:
			// ナビゲート前に発生するイベントをセットする変数
			function<bool(const string &)> beforeNavigateFunction;
			// ナビゲート完了後に発生するイベントをセットする変数
			//function<void(const string &)> navigateCompleteFunction;
			// 読み込み完了後に発生するイベントをセットする変数
			function<void(const string &)> documentCompleteFunction;
			// 新規ウィンドウ作成時に発生するイベントをセットする変数
			function<bool(const string &)> newWindowFunction;
			
			Browser();
			explicit Browser(u32 parent, s32 x, s32 y, u32 w, u32 h);
			
			~Browser(){
				close();
				if((--flag) == 0) _Module.Term();
			}
			
			bool open(u32 parent, s32 x, s32 y, u32 w, u32 h);
			void close();
			
			// 現在表示中のURLを取得
			string getURL(){
				BSTR buf;
				browser->get_LocationURL(&buf);
				return Encoding::toUTF8((LPCWSTR)buf);
			}
			
			// ホームページへ
			bool goHome(){
				return SUCCEEDED(browser->GoHome());
			}
			
			// 空白ページヘ
			bool goBlank(){
				return isInBlank? true: navigate("about:blank");
			}
			
			// 前のページヘ
			bool goBack(){
				return SUCCEEDED(browser->GoBack());
			}
			
			// 次のページヘ
			bool goForward(){
				return SUCCEEDED(browser->GoForward());
			}
			
			// 指定URLへ
			bool navigate(const string &url);
			
			// 文字列として渡されたHTMLを読み込む
			bool writeHTML(const string &html);
			
			// Javascriptエラーダイアログ表示/非表示
			bool setSilent(bool flag){
				return SUCCEEDED(browser->put_Silent(flag? VARIANT_TRUE: VARIANT_FALSE));
			}
			
			// ページ更新
			bool refresh(){
				return SUCCEEDED(browser->Refresh());
			}
			
			// 読み込み中止
			bool stop(){
				return SUCCEEDED(browser->Stop());
			}
			
			// IEコンポーネント内でTABを有効にするには、親ウィンドウのprocedureでproccessKey関数を処理する
			void processKey(u32 hwnd, u32 msg, u32 wp, u32 lp);
			
			// Javascript実行
			Variant executeScript(const string &funcName, s32 nArgs=0, Variant args[]=nullptr);
			
			/* ドキュメント操作関連 */
			// ドキュメント内のすべての要素を取得
			HTMLElementCollection getAllElements(){
				CComPtr<IHTMLElementCollection> pCol;
				return SUCCEEDED(pDoc2->get_all(&pCol))? pCol: nullptr;
			}
			
			// ドキュメント内にある指定<id>の要素をすべて取得
			HTMLElementCollection getElementsByID(const string &id);
			
			// ドキュメント内にある指定タグ名を持つ要素をすべて取得
			HTMLElementCollection getElementsByTagName(const string &tagName);
			
			// <id>から要素取得
			HTMLElement getElementByID(const string &id);
			
			// ドキュメントのBODYを取得
			HTMLElement getBody(){
				CComPtr<IHTMLElement> pElement;
				return SUCCEEDED(pDoc2->get_body(&pElement))? pElement: nullptr;
			}
			
			
			operator HWND() const{return hwnd;}
			u32 getWindowHandle() const{return (u32)hwnd;}
			CComQIPtr<IWebBrowser2> const &getHandle() const{return browser;}
		private:
			/* IEコンポーネントイベントクラス */
			class BrowserEvent: public CComObjectRootEx<CComSingleThreadModel>,
				public IDispEventImpl<SINKID_SLIBBROWSER, BrowserEvent, &DIID_DWebBrowserEvents2>
			{
			public:
				// イベントをDispatch
				bool dispatch(Browser *_browser){
					browser = _browser;
					// タイプ ライブラリへのポインタやバージョン情報の設定
					AtlGetObjectSourceInterface(browser->browser, &m_libid, &m_iid,
						&m_wMajorVerNum, &m_wMinorVerNum);
					return SUCCEEDED(DispEventAdvise(browser->browser));
				}
			private:
				Browser *browser;
				
				BEGIN_COM_MAP(BrowserEvent)
					COM_INTERFACE_ENTRY_IID(DIID_DWebBrowserEvents2, BrowserEvent)
				END_COM_MAP()
				
				BEGIN_SINK_MAP(BrowserEvent)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_BEFORENAVIGATE2, &BrowserEvent::onBeforeNavigate2)
					//SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
					//	DISPID_NAVIGATECOMPLETE2, &BrowserEvent::onNavigateComplete2)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_DOCUMENTCOMPLETE, &BrowserEvent::onDocumentComplete)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_NEWWINDOW3, &BrowserEvent::onNewWindow)
				END_SINK_MAP()
				
				void __stdcall onBeforeNavigate2(IDispatch**, VARIANT* url, VARIANT*,
					VARIANT*, VARIANT*, VARIANT*, VARIANT_BOOL* cancel)
				{
					if(browser && browser->beforeNavigateFunction){
						if(!browser->beforeNavigateFunction(Encoding::toUTF8(url->bstrVal))) (*cancel) = VARIANT_TRUE;
					}
				}
				/*void __stdcall onNavigateComplete2(IDispatch*, VARIANT* url){
					if(browser && browser->navigateCompleteFunction){
						browser->navigateCompleteFunction(Encoding::toUTF8(url->bstrVal));
					}
				}*/
				void _stdcall onDocumentComplete(IDispatch* pDisp, VARIANT* url){
					browser->requireDocumentInterface();
					if(browser && browser->documentCompleteFunction){
						browser->documentCompleteFunction(Encoding::toUTF8(url->bstrVal));
					}
				}
				void _stdcall onNewWindow(IDispatch **ppDisp, VARIANT_BOOL *cancel, DWORD dwFlags, BSTR bstrUrlContext, BSTR bstrUrl){
					if(browser && browser->newWindowFunction){
						if(!browser->newWindowFunction(Encoding::toUTF8(bstrUrl))) (*cancel) = VARIANT_TRUE;
					}
				}
			};
			
			// HTML Documentインターフェイスを取得
			// onDocumentComplete時に呼び出される
			void requireDocumentInterface();
			
			CComObject<BrowserEvent> *event;
			CComQIPtr<IWebBrowser2> browser;
			CComQIPtr<IHTMLDocument2> pDoc2;
			CComQIPtr<IHTMLDocument3> pDoc3;
			CComQIPtr<IDispatch> pScript;
			HWND hwnd;
			bool isInBlank; // 現在表示しているページがブランクかどうか
			
			static u32 flag; // モジュール初期化用フラグ
		protected:
			virtual u8 _getState(){ // ビジー状態考慮
				VARIANT_BOOL ret; browser->get_Busy(&ret);
				return ret == VARIANT_TRUE? BUSY: _state;
			}
		};
	}
}
