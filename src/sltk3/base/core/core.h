#pragma once

#include "base.h"

#ifndef _WINDOWS
	#include <dlfcn.h>
#endif

#define MEXP 19937
#define SFMT_MEXP 19937
#include "SFMT-1.4.1/SFMT.h"

namespace Sltk{
	/*** SLTKライブラリ基底クラス ***/
	class Object;
	u8 getState(Object *obj);
	string getMessage(Object *obj);
	
	class Object{
	public:
		enum State{ // Objectの状態
			NONE, ACTIVE, FAILED, FINISHED, BUSY
		};
		
		Object(): _state(NONE) {}
		
		friend u8 getState(Object *obj);
		friend string getMessage(Object *obj);
	protected:
		u8		_state;	// 状態
		string	_message;	// メッセージ
		
		virtual u8 _getState(){return _state;}
		virtual string _getMessage(){return _message;}
	};
	
	// オブジェクトの状態・メッセージを取得
	inline u8 getState(Object *obj){
		return obj->_getState();
	}
	inline string getMessage(Object *obj){
		return obj->_getMessage();
	}
	
	
	/*** 動的ライブラリ読み込みクラス ***/
	class LibraryLoader: public Object {
		u32		handle;
	public:
		LibraryLoader(): Object(), handle(0) {}
		explicit LibraryLoader(const string &path): Object(), handle(0) {
			open(path);
		}
		~LibraryLoader(){
			close();
		}
		
		// dllファイルオープン
		bool open(const string &path);
		void close();
		
		// 指定関数名の関数をロード
		void *getFunction(const string &name){
			#ifdef _WINDOWS
				return (void*)GetProcAddress((HMODULE)handle, name.c_str());
			#else
				return dlsym((void*)handle, name.c_str());
			#endif
		}
	};
	
	
	/*** 乱数発生器 ***/
	class Randomizer: public Object {
	public:
		explicit Randomizer(s32 _seed=(s32)time(nullptr)): Object() {
			_state = ACTIVE; seed(_seed);
		}
		explicit Randomizer(s32 seedsNum, s32 seeds[]): Object() {
			_state = ACTIVE; seed(seedsNum, seeds);
		}
		
		// 乱数の種を植える
		void seed(s32 _seed){
			sfmt_init_gen_rand(&sfmt, _seed);
		}
		void seed(s32 seedsNum, s32 seeds[]){
			sfmt_init_by_array(&sfmt, (uint32_t*)seeds, seedsNum);
		}
		
		// 32bitの乱数生成
		u32 get(){
			return sfmt_genrand_uint32(&sfmt);
		}
		// 0～r-1までの32bit乱数生成
		u32 get(u32 r){
			return get() % r;
		}
		// min～maxまでの32bit乱数生成
		s32 get(s32 min, s32 max){
			return get(max-min+1) + min;
		}
	private:
		sfmt_t sfmt;
	};
	
	
	/*** バイナリ管理クラス ***/
	/* Binary.state */
	enum BinaryState{
		BINARY_CONTROL = 1,
		BINARY_ALLOCATE = 5,
	};
	
	class Binary: public Object {
	public:
		Binary(): Object(), ptr(nullptr), pos(0) {}
		explicit Binary(void *p): Object(), ptr(nullptr), pos(0) {
			set(p);
		}
		explicit Binary(u32 size): Object(), ptr(nullptr), pos(0) {
			allocate(size);
		}
		~Binary(){
			release();
		}
		
		// ポインタ直接制御モード(BINARY_CONTROL)
		void set(void *p);
		
		// メモリ割り当てモード(BINARY_ALLOCATE)
		void allocate(u32 size);
		
		// メモリサイズ変更
		// ポインタ位置は先頭に変更される
		void resize(u32 size); // only BINARY_ALLOCATE or NONE
		
		// メモリ解放
		void release();
		
		// サイズは変えず、メモリの割当てのみ行う。
		// 追加するバイナリの大きさがある程度分かっているなら
		// reserveしてからpush～していく方が高速
		void reserve(u32 size){ // only BINARY_ALLOCATE
			if(_state == BINARY_ALLOCATE) bin.reserve(size);
		}
		
		s8& operator [](u32 i){return ptr[i];}
		
		// ポインタ取得
		void *getPointer(u32 head=0){
			return (void*)(ptr + head);
		}
		
		// サイズ取得
		u32 getSize() const{ // only BINARY_ALLOCATE
			return _state == BINARY_ALLOCATE? bin.size(): 0;
		}
		// 現在位置取得
		const u32 &getPosition() const{return pos;}
		
		// バイナリをプッシュ
		void push(const void *data, u32 size);
		
		// 数値をバイナリとして追加
		void pushValue(u32 data, u8 size=4){
			push(&data, size);
		}
		// precision: 精度(デフォルトは6)
		void pushNumber(double data, u8 precision=6){
			pushStringData(toString(data, precision));
		}
		
		// 文字列をバイナリとして追加
		void pushString(const string &data, u32 size=u32(-1)){
			push(data.c_str(), size == u32(-1)? data.size(): size);
		}
		// 文字列を文字数と一緒に追加
		void pushStringData(const string &data){
			pushValue(data.size()); pushString(data);
		}
		
		// バイナリの現在位置から数値を取り出す
		template<typename T>
		T getValue(){
			T buf = 0;
			
			memcpy(&buf, ptr + pos, sizeof(T));
			seek(sizeof(T), SEEK_CUR);
			return buf;
		}
		s32 getS32(){
			return getValue<s32>();
		}
		u32 getU32(){
			return getValue<u32>();
		}
		s16 getS16(){
			return getValue<s16>();
		}
		u16 getU16(){
			return getValue<u16>();
		}
		s8 getS8(){
			return getValue<s8>();
		}
		u8 getU8(){
			return getValue<u8>();
		}
		double getNumber(){
			return strtod(getStringData().c_str(), nullptr);
		}
		
		// ポインタを文字列として取得
		string getPointerString(u32 head=0){
			return (const char*)getPointer(head);
		}
		// バイナリの現在位置からsize分の文字列を取り出す
		string getString(u32 size);
		// バイナリの現在位置からpushStrDataで入れた文字列を取り出す
		string getStringData(){
			u32 size = getU32(); return getString(size);
		}
		
		// バイナリの現在位置からsize文のバッファを取り出す
		const void *get(u32 size);
		
		// 読み込み位置を変更する
		void seek(s32 mov, u8 mode=SEEK_SET);
		
		// バイナリをキー文字列で簡易暗号化・復号化
		// only BINARY_ALLOCATE
		void encode(const string &key, u32 keysize=16);
		bool decode(const string &key, u32 keysize=16); // 暗号化時のキーと異なるキーが指定されると失敗
	private:
		char	*ptr;
		string	 bin;
		u32		 pos;
	protected:
		// 現在の状態を分岐取得
		virtual u8 _getState(){
			if(_state == BINARY_ALLOCATE && pos >= bin.size()) return FINISHED;
			return _state;
		}
	};
	
	// バイナリデータから4バイトのハッシュ(CRC32)を生成
	// 文字列indexの検索を行う場合、文字列比較するよりCRC32ハッシュの比較を行うほうが速い
	// ただし偶然一致する可能性(16の8乗分の1)もある
	u32 getCRC32(const void *buffer, u32 bufferlen, u32 crc32_start=0xffffff);
	
	inline u32 getCRC32(const string &str){
		return getCRC32(str.c_str(), str.size());
	}
}
