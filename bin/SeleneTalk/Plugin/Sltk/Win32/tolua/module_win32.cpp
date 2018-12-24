/*
** Lua binding: libSLTK_win32
** Generated automatically by tolua++-1.0.92 on 04/12/16 00:29:42.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libSLTK_win32_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sltk__Win32__Process (lua_State* tolua_S)
{
 Sltk::Win32::Process* self = (Sltk::Win32::Process*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__Registry (lua_State* tolua_S)
{
 Sltk::Win32::Registry* self = (Sltk::Win32::Registry*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__Pipe (lua_State* tolua_S)
{
 Sltk::Win32::Pipe* self = (Sltk::Win32::Pipe*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::Binary");
 tolua_usertype(tolua_S,"Sltk::File");
 tolua_usertype(tolua_S,"Sltk::Win32::Registry");
 tolua_usertype(tolua_S,"Sltk::Win32::Process");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::Win32::Pipe");
}

/* function: Sltk::Win32::selectDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_selectDirectory00
static int tolua_libSLTK_win32_Sltk_Win32_selectDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  Sltk::Win32::selectDirectory();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selectDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::selectDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_selectDirectory01
static int tolua_libSLTK_win32_Sltk_Win32_selectDirectory01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,1,0));
  unsigned long len = (( unsigned long)  tolua_tonumber(tolua_S,2,MAX_PATH));
  const char* init_dir = ((const char*)  tolua_tostring(tolua_S,3,""));
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
  {
   string tolua_ret = (string)  Sltk::Win32::selectDirectory(title,len,init_dir,parent);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_selectDirectory00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::selectFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_selectFile00
static int tolua_libSLTK_win32_Sltk_Win32_selectFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  Sltk::Win32::selectFile();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selectFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::selectFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_selectFile01
static int tolua_libSLTK_win32_Sltk_Win32_selectFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Win32::selectFile(title);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_selectFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::selectFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_selectFile02
static int tolua_libSLTK_win32_Sltk_Win32_selectFile02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* filter = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* init_dir = ((const char*)  tolua_tostring(tolua_S,3,""));
  unsigned long flag = (( unsigned long)  tolua_tonumber(tolua_S,4,Sltk::Win32::SF_FILEMUSTEXIST));
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
  {
   string tolua_ret = (string)  Sltk::Win32::selectFile(title,filter,init_dir,flag,parent);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_selectFile01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getScreenWidth */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getScreenWidth00
static int tolua_libSLTK_win32_Sltk_Win32_getScreenWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::Win32::getScreenWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScreenWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getScreenHeight */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getScreenHeight00
static int tolua_libSLTK_win32_Sltk_Win32_getScreenHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::Win32::getScreenHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScreenHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::warpCursor */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_warpCursor00
static int tolua_libSLTK_win32_Sltk_Win32_warpCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long x = ((  long)  tolua_tonumber(tolua_S,1,0));
   long y = ((  long)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::warpCursor(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'warpCursor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendMouseAction */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendMouseAction00
static int tolua_libSLTK_win32_Sltk_Win32_sendMouseAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long event = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::sendMouseAction(event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendMouseAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendMouseWheel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendMouseWheel00
static int tolua_libSLTK_win32_Sltk_Win32_sendMouseWheel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long rot = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::sendMouseWheel(rot);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendMouseWheel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendKeyAction */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendKeyAction00
static int tolua_libSLTK_win32_Sltk_Win32_sendKeyAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char vkey = (( unsigned char)  tolua_tonumber(tolua_S,1,0));
   char mode = ((  char)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::sendKeyAction(vkey,mode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendKeyAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendKeyString */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendKeyString00
static int tolua_libSLTK_win32_Sltk_Win32_sendKeyString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* keys = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::sendKeyString(keys);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendKeyString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendClickButton */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendClickButton00
static int tolua_libSLTK_win32_Sltk_Win32_sendClickButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long button = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::Win32::sendClickButton(button);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendClickButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::sendDropFiles */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_sendDropFiles00
static int tolua_libSLTK_win32_Sltk_Win32_sendDropFiles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::sendDropFiles(hwnd,filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendDropFiles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::setClipboardText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_setClipboardText00
static int tolua_libSLTK_win32_Sltk_Win32_setClipboardText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* data = ((const char*)  tolua_tostring(tolua_S,1,0));
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::setClipboardText(data,hwnd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClipboardText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::clearClipboard */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_clearClipboard00
static int tolua_libSLTK_win32_Sltk_Win32_clearClipboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::clearClipboard(hwnd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearClipboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getClipboardText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getClipboardText00
static int tolua_libSLTK_win32_Sltk_Win32_getClipboardText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Win32::getClipboardText(hwnd);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClipboardText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_new00
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Pipe* tolua_ret = (Sltk::Win32::Pipe*)  Mtolua_new((Sltk::Win32::Pipe)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Pipe");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Pipe* tolua_ret = (Sltk::Win32::Pipe*)  Mtolua_new((Sltk::Win32::Pipe)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Pipe");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_new01
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::Win32::Pipe* tolua_ret = (Sltk::Win32::Pipe*)  Mtolua_new((Sltk::Win32::Pipe)(filename));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Pipe");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Pipe_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_new01_local
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::Win32::Pipe* tolua_ret = (Sltk::Win32::Pipe*)  Mtolua_new((Sltk::Win32::Pipe)(filename));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Pipe");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Pipe_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_open00
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Pipe* self = (Sltk::Win32::Pipe*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_close00
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Pipe* self = (Sltk::Win32::Pipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getReader of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_getReader00
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_getReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Pipe* self = (Sltk::Win32::Pipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getReader'", NULL);
#endif
  {
   Sltk::File* tolua_ret = (Sltk::File*)  self->getReader();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWriter of class  Sltk::Win32::Pipe */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Pipe_getWriter00
static int tolua_libSLTK_win32_Sltk_Win32_Pipe_getWriter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Pipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Pipe* self = (Sltk::Win32::Pipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWriter'", NULL);
#endif
  {
   Sltk::File* tolua_ret = (Sltk::File*)  self->getWriter();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWriter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::acquireAllProcess */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_acquireAllProcess00
static int tolua_libSLTK_win32_Sltk_Win32_acquireAllProcess00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  Sltk::Win32::acquireAllProcess();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireAllProcess'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getProcessCount */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getProcessCount00
static int tolua_libSLTK_win32_Sltk_Win32_getProcessCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::Win32::getProcessCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProcessCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getProcessID */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getProcessID00
static int tolua_libSLTK_win32_Sltk_Win32_getProcessID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long n = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::Win32::getProcessID(n);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProcessID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getProcessName */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getProcessName00
static int tolua_libSLTK_win32_Sltk_Win32_getProcessName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long n = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Win32::getProcessName(n);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProcessName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_new00
static int tolua_libSLTK_win32_Sltk_Win32_Process_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Process* tolua_ret = (Sltk::Win32::Process*)  Mtolua_new((Sltk::Win32::Process)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Process");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Process_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Process* tolua_ret = (Sltk::Win32::Process*)  Mtolua_new((Sltk::Win32::Process)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Process");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_delete00
static int tolua_libSLTK_win32_Sltk_Win32_Process_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_open00
static int tolua_libSLTK_win32_Sltk_Win32_Process_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_open01
static int tolua_libSLTK_win32_Sltk_Win32_Process_open01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(id);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Process_open00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: execute of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_execute00
static int tolua_libSLTK_win32_Sltk_Win32_Process_execute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'execute'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->execute(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'execute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_close00
static int tolua_libSLTK_win32_Sltk_Win32_Process_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_read00
static int tolua_libSLTK_win32_Sltk_Win32_Process_read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  void* dest = ((void*)  tolua_touserdata(tolua_S,3,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->read(address,dest,size);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getValue00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned char byte = (( unsigned char)  tolua_tonumber(tolua_S,3,4));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getValue(address,byte);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_write00
static int tolua_libSLTK_win32_Sltk_Win32_Process_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const void* buf = ((const void*)  tolua_touserdata(tolua_S,3,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write(address,buf,size);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeExpression of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_writeExpression00
static int tolua_libSLTK_win32_Sltk_Win32_Process_writeExpression00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* exp = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeExpression'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeExpression(address,exp);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeExpression'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_setValue00
static int tolua_libSLTK_win32_Sltk_Win32_Process_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long val = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned long byte = (( unsigned long)  tolua_tonumber(tolua_S,4,4));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setValue(address,val,byte);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: acquireModules of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_acquireModules00
static int tolua_libSLTK_win32_Sltk_Win32_Process_acquireModules00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquireModules'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->acquireModules();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireModules'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModuleNameFromHandle of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getModuleNameFromHandle00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getModuleNameFromHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long hmod = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModuleNameFromHandle'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getModuleNameFromHandle(hmod);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getModuleNameFromHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModuleName of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getModuleName00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getModuleName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModuleName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getModuleName(index);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getModuleName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModule of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getModule00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getModule00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModule'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getModule(name);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getModule'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: kill of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_kill00
static int tolua_libSLTK_win32_Sltk_Win32_Process_kill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Process* self = (Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'kill'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->kill();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'kill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getThreadID of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getThreadID00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getThreadID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::Process* self = (const Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getThreadID'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getThreadID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getThreadID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProcessID of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getProcessID00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getProcessID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::Process* self = (const Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProcessID'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getProcessID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProcessID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHandle of class  Sltk::Win32::Process */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Process_getHandle00
static int tolua_libSLTK_win32_Sltk_Win32_Process_getHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::Process* self = (const Sltk::Win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHandle'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getHandle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_new00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Registry* tolua_ret = (Sltk::Win32::Registry*)  Mtolua_new((Sltk::Win32::Registry)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Registry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Registry_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Registry* tolua_ret = (Sltk::Win32::Registry*)  Mtolua_new((Sltk::Win32::Registry)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Registry");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_delete00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_open00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long key = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* sub = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(key,sub);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_create00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long key = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* sub = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->create(key,sub);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_close00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_getValue00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Sltk::Binary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  Sltk::Binary* data = ((Sltk::Binary*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getValue(data,name);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_getString00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Sltk::Binary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  Sltk::Binary* data = ((Sltk::Binary*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getString(data,name);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_setValue00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long data = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setValue(name,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_setString00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setString(name,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_remove00
static int tolua_libSLTK_win32_Sltk_Win32_Registry_remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long MAX_KEY_LENGTH = (( unsigned long)  tolua_tonumber(tolua_S,2,256));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   self->remove(MAX_KEY_LENGTH);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  Sltk::Win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Registry_remove01
static int tolua_libSLTK_win32_Sltk_Win32_Registry_remove01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Win32::Registry* self = (Sltk::Win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->remove(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Registry_remove00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::reflectRegistry */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_reflectRegistry00
static int tolua_libSLTK_win32_Sltk_Win32_reflectRegistry00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::reflectRegistry();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reflectRegistry'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libSLTK_win32_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Win32",0);
   tolua_beginmodule(tolua_S,"Win32");
    tolua_function(tolua_S,"selectDirectory",tolua_libSLTK_win32_Sltk_Win32_selectDirectory00);
    tolua_function(tolua_S,"selectDirectory",tolua_libSLTK_win32_Sltk_Win32_selectDirectory01);
    tolua_constant(tolua_S,"SF_READONLY",Sltk::Win32::SF_READONLY);
    tolua_constant(tolua_S,"SF_OVERWRITEPROMPT",Sltk::Win32::SF_OVERWRITEPROMPT);
    tolua_constant(tolua_S,"SF_HIDEREADONLY",Sltk::Win32::SF_HIDEREADONLY);
    tolua_constant(tolua_S,"SF_NOCHANGEDIR",Sltk::Win32::SF_NOCHANGEDIR);
    tolua_constant(tolua_S,"SF_SHOWHELP",Sltk::Win32::SF_SHOWHELP);
    tolua_constant(tolua_S,"SF_NOVALIDATE",Sltk::Win32::SF_NOVALIDATE);
    tolua_constant(tolua_S,"SF_ALLOWMULTISELECT",Sltk::Win32::SF_ALLOWMULTISELECT);
    tolua_constant(tolua_S,"SF_EXTENSIONDIFFERENT",Sltk::Win32::SF_EXTENSIONDIFFERENT);
    tolua_constant(tolua_S,"SF_PATHMUSTEXIST",Sltk::Win32::SF_PATHMUSTEXIST);
    tolua_constant(tolua_S,"SF_FILEMUSTEXIST",Sltk::Win32::SF_FILEMUSTEXIST);
    tolua_constant(tolua_S,"SF_CREATEPROMPT",Sltk::Win32::SF_CREATEPROMPT);
    tolua_constant(tolua_S,"SF_SHAREAWARE",Sltk::Win32::SF_SHAREAWARE);
    tolua_constant(tolua_S,"SF_NOREADONLYRETURN",Sltk::Win32::SF_NOREADONLYRETURN);
    tolua_constant(tolua_S,"SF_NOTESTFILECREATE",Sltk::Win32::SF_NOTESTFILECREATE);
    tolua_constant(tolua_S,"SF_NONETWORKBUTTON",Sltk::Win32::SF_NONETWORKBUTTON);
    tolua_constant(tolua_S,"SF_NOLONGNAMES",Sltk::Win32::SF_NOLONGNAMES);
    tolua_function(tolua_S,"selectFile",tolua_libSLTK_win32_Sltk_Win32_selectFile00);
    tolua_function(tolua_S,"selectFile",tolua_libSLTK_win32_Sltk_Win32_selectFile01);
    tolua_function(tolua_S,"selectFile",tolua_libSLTK_win32_Sltk_Win32_selectFile02);
    tolua_function(tolua_S,"getScreenWidth",tolua_libSLTK_win32_Sltk_Win32_getScreenWidth00);
    tolua_function(tolua_S,"getScreenHeight",tolua_libSLTK_win32_Sltk_Win32_getScreenHeight00);
    tolua_function(tolua_S,"warpCursor",tolua_libSLTK_win32_Sltk_Win32_warpCursor00);
    tolua_constant(tolua_S,"MOUSEACT_LEFTDOWN",Sltk::Win32::MOUSEACT_LEFTDOWN);
    tolua_constant(tolua_S,"MOUSEACT_LEFTUP",Sltk::Win32::MOUSEACT_LEFTUP);
    tolua_constant(tolua_S,"MOUSEACT_RIGHTDOWN",Sltk::Win32::MOUSEACT_RIGHTDOWN);
    tolua_constant(tolua_S,"MOUSEACT_RIGHTUP",Sltk::Win32::MOUSEACT_RIGHTUP);
    tolua_constant(tolua_S,"MOUSEACT_MIDDLEDOWN",Sltk::Win32::MOUSEACT_MIDDLEDOWN);
    tolua_constant(tolua_S,"MOUSEACT_MIDDLEUP",Sltk::Win32::MOUSEACT_MIDDLEUP);
    tolua_constant(tolua_S,"MOUSEACT_XDOWN",Sltk::Win32::MOUSEACT_XDOWN);
    tolua_constant(tolua_S,"MOUSEACT_XUP",Sltk::Win32::MOUSEACT_XUP);
    tolua_function(tolua_S,"sendMouseAction",tolua_libSLTK_win32_Sltk_Win32_sendMouseAction00);
    tolua_function(tolua_S,"sendMouseWheel",tolua_libSLTK_win32_Sltk_Win32_sendMouseWheel00);
    tolua_function(tolua_S,"sendKeyAction",tolua_libSLTK_win32_Sltk_Win32_sendKeyAction00);
    tolua_function(tolua_S,"sendKeyString",tolua_libSLTK_win32_Sltk_Win32_sendKeyString00);
    tolua_function(tolua_S,"sendClickButton",tolua_libSLTK_win32_Sltk_Win32_sendClickButton00);
    tolua_function(tolua_S,"sendDropFiles",tolua_libSLTK_win32_Sltk_Win32_sendDropFiles00);
    tolua_function(tolua_S,"setClipboardText",tolua_libSLTK_win32_Sltk_Win32_setClipboardText00);
    tolua_function(tolua_S,"clearClipboard",tolua_libSLTK_win32_Sltk_Win32_clearClipboard00);
    tolua_function(tolua_S,"getClipboardText",tolua_libSLTK_win32_Sltk_Win32_getClipboardText00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Win32",0);
   tolua_beginmodule(tolua_S,"Win32");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Pipe","Sltk::Win32::Pipe","Sltk::Object",tolua_collect_Sltk__Win32__Pipe);
    #else
    tolua_cclass(tolua_S,"Pipe","Sltk::Win32::Pipe","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Pipe");
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Pipe_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Pipe_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Pipe_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Pipe_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Pipe_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Pipe_new01_local);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Pipe_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_win32_Sltk_Win32_Pipe_close00);
     tolua_function(tolua_S,"getReader",tolua_libSLTK_win32_Sltk_Win32_Pipe_getReader00);
     tolua_function(tolua_S,"getWriter",tolua_libSLTK_win32_Sltk_Win32_Pipe_getWriter00);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"acquireAllProcess",tolua_libSLTK_win32_Sltk_Win32_acquireAllProcess00);
    tolua_function(tolua_S,"getProcessCount",tolua_libSLTK_win32_Sltk_Win32_getProcessCount00);
    tolua_function(tolua_S,"getProcessID",tolua_libSLTK_win32_Sltk_Win32_getProcessID00);
    tolua_function(tolua_S,"getProcessName",tolua_libSLTK_win32_Sltk_Win32_getProcessName00);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Process","Sltk::Win32::Process","Sltk::Object",tolua_collect_Sltk__Win32__Process);
    #else
    tolua_cclass(tolua_S,"Process","Sltk::Win32::Process","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Process");
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Process_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Process_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Process_new00_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_win32_Sltk_Win32_Process_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Process_open00);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Process_open01);
     tolua_function(tolua_S,"execute",tolua_libSLTK_win32_Sltk_Win32_Process_execute00);
     tolua_function(tolua_S,"close",tolua_libSLTK_win32_Sltk_Win32_Process_close00);
     tolua_function(tolua_S,"read",tolua_libSLTK_win32_Sltk_Win32_Process_read00);
     tolua_function(tolua_S,"getValue",tolua_libSLTK_win32_Sltk_Win32_Process_getValue00);
     tolua_function(tolua_S,"write",tolua_libSLTK_win32_Sltk_Win32_Process_write00);
     tolua_function(tolua_S,"writeExpression",tolua_libSLTK_win32_Sltk_Win32_Process_writeExpression00);
     tolua_function(tolua_S,"setValue",tolua_libSLTK_win32_Sltk_Win32_Process_setValue00);
     tolua_function(tolua_S,"acquireModules",tolua_libSLTK_win32_Sltk_Win32_Process_acquireModules00);
     tolua_function(tolua_S,"getModuleNameFromHandle",tolua_libSLTK_win32_Sltk_Win32_Process_getModuleNameFromHandle00);
     tolua_function(tolua_S,"getModuleName",tolua_libSLTK_win32_Sltk_Win32_Process_getModuleName00);
     tolua_function(tolua_S,"getModule",tolua_libSLTK_win32_Sltk_Win32_Process_getModule00);
     tolua_function(tolua_S,"kill",tolua_libSLTK_win32_Sltk_Win32_Process_kill00);
     tolua_function(tolua_S,"getThreadID",tolua_libSLTK_win32_Sltk_Win32_Process_getThreadID00);
     tolua_function(tolua_S,"getProcessID",tolua_libSLTK_win32_Sltk_Win32_Process_getProcessID00);
     tolua_function(tolua_S,"getHandle",tolua_libSLTK_win32_Sltk_Win32_Process_getHandle00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Registry","Sltk::Win32::Registry","Sltk::Object",tolua_collect_Sltk__Win32__Registry);
    #else
    tolua_cclass(tolua_S,"Registry","Sltk::Win32::Registry","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Registry");
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Registry_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Registry_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Registry_new00_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_win32_Sltk_Win32_Registry_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Registry_open00);
     tolua_function(tolua_S,"create",tolua_libSLTK_win32_Sltk_Win32_Registry_create00);
     tolua_function(tolua_S,"close",tolua_libSLTK_win32_Sltk_Win32_Registry_close00);
     tolua_function(tolua_S,"getValue",tolua_libSLTK_win32_Sltk_Win32_Registry_getValue00);
     tolua_function(tolua_S,"getString",tolua_libSLTK_win32_Sltk_Win32_Registry_getString00);
     tolua_function(tolua_S,"setValue",tolua_libSLTK_win32_Sltk_Win32_Registry_setValue00);
     tolua_function(tolua_S,"setString",tolua_libSLTK_win32_Sltk_Win32_Registry_setString00);
     tolua_function(tolua_S,"remove",tolua_libSLTK_win32_Sltk_Win32_Registry_remove00);
     tolua_function(tolua_S,"remove",tolua_libSLTK_win32_Sltk_Win32_Registry_remove01);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"reflectRegistry",tolua_libSLTK_win32_Sltk_Win32_reflectRegistry00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libSLTK_win32 (lua_State* tolua_S) {
 return tolua_libSLTK_win32_open(tolua_S);
};
#endif

