#pragma once

/*** プラットフォーム設定マクロ ***/

// WindowsOS
#if defined(_MSC_VER) || defined(WIN32) || defined(_WIN32_)
#define _WINDOWS
#endif

// LinuxOS
#ifdef _linux_
#define _LINUX
#endif

// MacOS
#ifdef _APPLE_
#define _APPLE
#endif

// AndroidOS
#ifdef ANDROID_NDK
#define _ANDROID
#endif


// デスクトップ環境
#if defined(_WINDOWS) || defined(_LINUX) || defined(_APPLE)
#define _DESKTOP_APP
#endif

// スマートフォン環境
#ifdef _ANDROID
#define _SMARTPHONE_APP
#endif

// OS固有API
#ifdef _WINDOWS
	#define UNICODE
	#define STRICT
	#define _CRT_SECURE_NO_WARNINGS
	#include <windows.h>
#else
	#include <unistd.h>
#endif


// dllexport / dllimport
#if defined(_MSC_VER)
	#define __export __declspec(dllexport)
	#define __import __declspec(dllimport)
#elif defined(_GCC)
	#define __export __attribute__((visibility("default")))
	#define __import
#else
	#define __export
	#define __import
	#pragma warning Unknown dynamic link import/export semantics.
#endif
