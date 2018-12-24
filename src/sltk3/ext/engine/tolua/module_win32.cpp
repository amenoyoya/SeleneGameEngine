/*
** Lua binding: libSLTK_win32
** Generated automatically by tolua++-1.0.92 on 04/10/16 00:11:48.
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

static int tolua_collect_Sltk__Win32__HTMLElement (lua_State* tolua_S)
{
 Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__Variant (lua_State* tolua_S)
{
 Sltk::Win32::Variant* self = (Sltk::Win32::Variant*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__Window (lua_State* tolua_S)
{
 Sltk::Win32::Window* self = (Sltk::Win32::Window*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__HTMLElementCollection (lua_State* tolua_S)
{
 Sltk::Win32::HTMLElementCollection* self = (Sltk::Win32::HTMLElementCollection*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Win32__Browser (lua_State* tolua_S)
{
 Sltk::Win32::Browser* self = (Sltk::Win32::Browser*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::Win32::HTMLElement");
 tolua_usertype(tolua_S,"Sltk::Win32::Variant");
 tolua_usertype(tolua_S,"Sltk::Win32::Window");
 tolua_usertype(tolua_S,"Sltk::Win32::HTMLElementCollection");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::Win32::Browser");
}

/* function: Sltk::Win32::showMessageBox */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_showMessageBox00
static int tolua_libSLTK_win32_Sltk_Win32_showMessageBox00(lua_State* tolua_S)
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
  const char* message = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    long tolua_ret = (  long)  Sltk::Win32::showMessageBox(message);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showMessageBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::showMessageBox */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_showMessageBox01
static int tolua_libSLTK_win32_Sltk_Win32_showMessageBox01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* message = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
    long tolua_ret = (  long)  Sltk::Win32::showMessageBox(message,title);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_showMessageBox00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::showMessageBox */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_showMessageBox02
static int tolua_libSLTK_win32_Sltk_Win32_showMessageBox02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* message = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long mode = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
  {
    long tolua_ret = (  long)  Sltk::Win32::showMessageBox(message,title,mode,hwnd);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_showMessageBox01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::adjustWindow */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_adjustWindow00
static int tolua_libSLTK_win32_Sltk_Win32_adjustWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::adjustWindow(hwnd,w,h);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'adjustWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::moveWindowToCenter */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter00
static int tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  bool show = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   bool tolua_ret = (bool)  Sltk::Win32::moveWindowToCenter(hwnd,show);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveWindowToCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::moveWindowToCenter */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter01
static int tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
  unsigned long back = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Sltk::Win32::moveWindowToCenter(hwnd,show,back);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getWindowName */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getWindowName00
static int tolua_libSLTK_win32_Sltk_Win32_getWindowName00(lua_State* tolua_S)
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
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long max = (( unsigned long)  tolua_tonumber(tolua_S,2,256));
  {
   string tolua_ret = (string)  Sltk::Win32::getWindowName(hwnd,max);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::setWindowText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_setWindowText00
static int tolua_libSLTK_win32_Sltk_Win32_setWindowText00(lua_State* tolua_S)
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::Win32::setWindowText(hwnd,text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWindowText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Win32::getWindowText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_getWindowText00
static int tolua_libSLTK_win32_Sltk_Win32_getWindowText00(lua_State* tolua_S)
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
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Win32::getWindowText(hwnd);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_new00
static int tolua_libSLTK_win32_Sltk_Win32_Window_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Window* tolua_ret = (Sltk::Win32::Window*)  Mtolua_new((Sltk::Win32::Window)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Window");
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

/* method: new_local of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Window_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Window* tolua_ret = (Sltk::Win32::Window*)  Mtolua_new((Sltk::Win32::Window)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Window");
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

/* method: new of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_new01
static int tolua_libSLTK_win32_Sltk_Win32_Window_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isstring(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,3,0));
   long x = ((  long)  tolua_tonumber(tolua_S,4,0x80000000));
   long y = ((  long)  tolua_tonumber(tolua_S,5,0x80000000));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,6,640));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,7,480));
  unsigned long style = (( unsigned long)  tolua_tonumber(tolua_S,8,WS_OVERLAPPEDWINDOW));
  unsigned long exstyle = (( unsigned long)  tolua_tonumber(tolua_S,9,0));
  const char* classname = ((const char*)  tolua_tostring(tolua_S,10,""));
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,11,0));
  {
   Sltk::Win32::Window* tolua_ret = (Sltk::Win32::Window*)  Mtolua_new((Sltk::Win32::Window)(parent,title,x,y,w,h,style,exstyle,classname,id));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Window");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Window_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_new01_local
static int tolua_libSLTK_win32_Sltk_Win32_Window_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isstring(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,3,0));
   long x = ((  long)  tolua_tonumber(tolua_S,4,0x80000000));
   long y = ((  long)  tolua_tonumber(tolua_S,5,0x80000000));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,6,640));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,7,480));
  unsigned long style = (( unsigned long)  tolua_tonumber(tolua_S,8,WS_OVERLAPPEDWINDOW));
  unsigned long exstyle = (( unsigned long)  tolua_tonumber(tolua_S,9,0));
  const char* classname = ((const char*)  tolua_tostring(tolua_S,10,""));
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,11,0));
  {
   Sltk::Win32::Window* tolua_ret = (Sltk::Win32::Window*)  Mtolua_new((Sltk::Win32::Window)(parent,title,x,y,w,h,style,exstyle,classname,id));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Window");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Window_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_delete00
static int tolua_libSLTK_win32_Sltk_Win32_Window_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Window* self = (Sltk::Win32::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_open00
static int tolua_libSLTK_win32_Sltk_Win32_Window_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isstring(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Window* self = (Sltk::Win32::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,3,"SeleneTalkWindow"));
   long x = ((  long)  tolua_tonumber(tolua_S,4,0x80000000));
   long y = ((  long)  tolua_tonumber(tolua_S,5,0x80000000));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,6,640));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,7,480));
  unsigned long style = (( unsigned long)  tolua_tonumber(tolua_S,8,WS_OVERLAPPEDWINDOW));
  unsigned long exstyle = (( unsigned long)  tolua_tonumber(tolua_S,9,0));
  const char* classname = ((const char*)  tolua_tostring(tolua_S,10,""));
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,11,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(parent,title,x,y,w,h,style,exstyle,classname,id);
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

/* method: close of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_close00
static int tolua_libSLTK_win32_Sltk_Win32_Window_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Window* self = (Sltk::Win32::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: show of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_show00
static int tolua_libSLTK_win32_Sltk_Win32_Window_show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Window* self = (Sltk::Win32::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned char flag = (( unsigned char)  tolua_tonumber(tolua_S,2,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'show'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->show(flag);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHandle of class  Sltk::Win32::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Window_getHandle00
static int tolua_libSLTK_win32_Sltk_Win32_Window_getHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Window* self = (Sltk::Win32::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* function: Sltk::Win32::pollWindowMessage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_pollWindowMessage00
static int tolua_libSLTK_win32_Sltk_Win32_pollWindowMessage00(lua_State* tolua_S)
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
   bool tolua_ret = (bool)  Sltk::Win32::pollWindowMessage();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pollWindowMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vType of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__Variant_unsigned_vType
static int tolua_get_Sltk__Win32__Variant_unsigned_vType(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vType'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->vType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vType of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__Variant_unsigned_vType
static int tolua_set_Sltk__Win32__Variant_unsigned_vType(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vType'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->vType = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: strVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__Variant_strVal
static int tolua_get_Sltk__Win32__Variant_strVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strVal'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->strVal);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: strVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__Variant_strVal
static int tolua_set_Sltk__Win32__Variant_strVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strVal'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->strVal = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: intVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__Variant_intVal
static int tolua_get_Sltk__Win32__Variant_intVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'intVal'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->intVal);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: intVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__Variant_intVal
static int tolua_set_Sltk__Win32__Variant_intVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'intVal'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->intVal = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: numVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__Variant_numVal
static int tolua_get_Sltk__Win32__Variant_numVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numVal'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->numVal);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: numVal of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__Variant_numVal
static int tolua_set_Sltk__Win32__Variant_numVal(lua_State* tolua_S)
{
  Sltk::Win32::Variant* self = (Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numVal'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->numVal = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Variant_new00
static int tolua_libSLTK_win32_Sltk_Win32_Variant_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Win32::Variant* tolua_ret = (Sltk::Win32::Variant*)  Mtolua_new((Sltk::Win32::Variant)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Variant");
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

/* method: new_local of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Variant_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Variant_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Win32::Variant* tolua_ret = (Sltk::Win32::Variant*)  Mtolua_new((Sltk::Win32::Variant)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Variant");
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

/* method: new of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Variant_new01
static int tolua_libSLTK_win32_Sltk_Win32_Variant_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  const string str = ((const string)  tolua_tocppstring(tolua_S,3,0));
   long ival = ((  long)  tolua_tonumber(tolua_S,4,0));
  double nval = ((double)  tolua_tonumber(tolua_S,5,0.0));
  {
   Sltk::Win32::Variant* tolua_ret = (Sltk::Win32::Variant*)  Mtolua_new((Sltk::Win32::Variant)(type,str,ival,nval));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Variant");
   tolua_pushcppstring(tolua_S,(const char*)str);
  }
 }
 return 2;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Variant_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Variant */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Variant_new01_local
static int tolua_libSLTK_win32_Sltk_Win32_Variant_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Variant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  const string str = ((const string)  tolua_tocppstring(tolua_S,3,0));
   long ival = ((  long)  tolua_tonumber(tolua_S,4,0));
  double nval = ((double)  tolua_tonumber(tolua_S,5,0.0));
  {
   Sltk::Win32::Variant* tolua_ret = (Sltk::Win32::Variant*)  Mtolua_new((Sltk::Win32::Variant)(type,str,ival,nval));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushcppstring(tolua_S,(const char*)str);
  }
 }
 return 2;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Variant_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttribute of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getAttribute00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* attr = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttribute'", NULL);
#endif
  {
   Sltk::Win32::Variant tolua_ret = (Sltk::Win32::Variant)  self->getAttribute(attr);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::Variant)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::Variant));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAttribute of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_removeAttribute00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_removeAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* attr = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAttribute'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeAttribute(attr);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttribute of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setAttribute00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Sltk::Win32::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* attr = ((const char*)  tolua_tostring(tolua_S,2,0));
  const Sltk::Win32::Variant* val = ((const Sltk::Win32::Variant*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttribute'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setAttribute(attr,*val);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClass of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getClass00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClass'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getClass();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClass of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setClass00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClass'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setClass(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getID of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getID00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getID'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setID of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setID00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setID'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setID(id);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerHTML of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerHTML00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerHTML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerHTML'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getInnerHTML();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerHTML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerHTML of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerHTML00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerHTML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* html = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerHTML'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setInnerHTML(html);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerHTML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerText of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerText00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerText'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getInnerText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerText of class  Sltk::Win32::HTMLElement */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerText00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElement",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElement* self = (Sltk::Win32::HTMLElement*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerText'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setInnerText(text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Sltk::Win32::HTMLElementCollection */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getSize00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::HTMLElementCollection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::HTMLElementCollection* self = (const Sltk::Win32::HTMLElementCollection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElement of class  Sltk::Win32::HTMLElementCollection */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement00
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElementCollection",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::HTMLElementCollection* self = (Sltk::Win32::HTMLElementCollection*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElement'", NULL);
#endif
  {
   Sltk::Win32::HTMLElement tolua_ret = (Sltk::Win32::HTMLElement)  self->getElement(index);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElement)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElement));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElement of class  Sltk::Win32::HTMLElementCollection */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement01
static int tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::HTMLElementCollection",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Win32::HTMLElementCollection* self = (Sltk::Win32::HTMLElementCollection*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElement'", NULL);
#endif
  {
   Sltk::Win32::HTMLElement tolua_ret = (Sltk::Win32::HTMLElement)  self->getElement(id);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElement)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElement));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_new00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Browser* tolua_ret = (Sltk::Win32::Browser*)  Mtolua_new((Sltk::Win32::Browser)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Browser");
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

/* method: new_local of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_new00_local
static int tolua_libSLTK_win32_Sltk_Win32_Browser_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::Browser* tolua_ret = (Sltk::Win32::Browser*)  Mtolua_new((Sltk::Win32::Browser)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Browser");
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

/* method: new of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_new01
static int tolua_libSLTK_win32_Sltk_Win32_Browser_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
   long x = ((  long)  tolua_tonumber(tolua_S,3,0));
   long y = ((  long)  tolua_tonumber(tolua_S,4,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,6,0));
  {
   Sltk::Win32::Browser* tolua_ret = (Sltk::Win32::Browser*)  Mtolua_new((Sltk::Win32::Browser)(parent,x,y,w,h));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Browser");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Browser_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_new01_local
static int tolua_libSLTK_win32_Sltk_Win32_Browser_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
   long x = ((  long)  tolua_tonumber(tolua_S,3,0));
   long y = ((  long)  tolua_tonumber(tolua_S,4,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,6,0));
  {
   Sltk::Win32::Browser* tolua_ret = (Sltk::Win32::Browser*)  Mtolua_new((Sltk::Win32::Browser)(parent,x,y,w,h));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::Browser");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_win32_Sltk_Win32_Browser_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_delete00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_open00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
   long x = ((  long)  tolua_tonumber(tolua_S,3,0));
   long y = ((  long)  tolua_tonumber(tolua_S,4,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(parent,x,y,w,h);
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

/* method: close of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_close00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getURL of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getURL00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getURL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getURL'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getURL();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getURL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: goHome of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_goHome00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_goHome00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'goHome'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->goHome();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'goHome'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: goBlank of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_goBlank00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_goBlank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'goBlank'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->goBlank();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'goBlank'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: goBack of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_goBack00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_goBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'goBack'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->goBack();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'goBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: goForward of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_goForward00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_goForward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'goForward'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->goForward();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'goForward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: navigate of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_navigate00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_navigate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* url = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'navigate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->navigate(url);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'navigate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeHTML of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_writeHTML00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_writeHTML00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* html = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeHTML'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeHTML(html);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeHTML'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSilent of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_setSilent00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_setSilent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSilent'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setSilent(flag);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSilent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: refresh of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_refresh00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_refresh00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'refresh'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->refresh();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'refresh'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_stop00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->stop();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: processKey of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_processKey00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_processKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long msg = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned long wp = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
  unsigned long lp = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'processKey'", NULL);
#endif
  {
   self->processKey(hwnd,msg,wp,lp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'processKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: executeScript of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_executeScript00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_executeScript00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_istable(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* script = ((const char*)  tolua_tostring(tolua_S,2,0));
   long nArgs = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifdef __cplusplus
  Sltk::Win32::Variant* args = Mtolua_new_dim(Sltk::Win32::Variant, nArgs);
#else
  Sltk::Win32::Variant* args = (Sltk::Win32::Variant*) malloc((nArgs)*sizeof(Sltk::Win32::Variant));
#endif
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'executeScript'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,4,"Sltk::Win32::Variant",nArgs,1,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<nArgs;i++)
    args[i] = *((Sltk::Win32::Variant*)  tolua_tofieldusertype(tolua_S,4,i+1,nullptr));
   }
  }
  {
   Sltk::Win32::Variant tolua_ret = (Sltk::Win32::Variant)  self->executeScript(script,nArgs,args);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::Variant)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::Variant));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::Variant");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
  {
   int i;
   for(i=0; i<nArgs;i++)
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::Variant)(args[i]));
    tolua_pushfieldusertype_and_takeownership(tolua_S,4,i+1,tolua_obj,"Sltk::Win32::Variant");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)& args[i],sizeof(Sltk::Win32::Variant));
    tolua_pushfieldusertype(tolua_S,4,i+1,tolua_obj,"Sltk::Win32::Variant");
#endif
   }
  }
#ifdef __cplusplus
  Mtolua_delete_dim(args);
#else
  free(args);
#endif
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'executeScript'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAllElements of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getAllElements00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getAllElements00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAllElements'", NULL);
#endif
  {
   Sltk::Win32::HTMLElementCollection tolua_ret = (Sltk::Win32::HTMLElementCollection)  self->getAllElements();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElementCollection)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElementCollection));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAllElements'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElementsByID of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByID00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElementsByID'", NULL);
#endif
  {
   Sltk::Win32::HTMLElementCollection tolua_ret = (Sltk::Win32::HTMLElementCollection)  self->getElementsByID(id);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElementCollection)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElementCollection));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElementsByID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElementsByTagName of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByTagName00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByTagName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* tagName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElementsByTagName'", NULL);
#endif
  {
   Sltk::Win32::HTMLElementCollection tolua_ret = (Sltk::Win32::HTMLElementCollection)  self->getElementsByTagName(tagName);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElementCollection)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElementCollection));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElementCollection");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElementsByTagName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElementByID of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getElementByID00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getElementByID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElementByID'", NULL);
#endif
  {
   Sltk::Win32::HTMLElement tolua_ret = (Sltk::Win32::HTMLElement)  self->getElementByID(id);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElement)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElement));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElementByID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBody of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getBody00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::Browser* self = (Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBody'", NULL);
#endif
  {
   Sltk::Win32::HTMLElement tolua_ret = (Sltk::Win32::HTMLElement)  self->getBody();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::Win32::HTMLElement)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::Win32::HTMLElement));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::Win32::HTMLElement");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWindowHandle of class  Sltk::Win32::Browser */
#ifndef TOLUA_DISABLE_tolua_libSLTK_win32_Sltk_Win32_Browser_getWindowHandle00
static int tolua_libSLTK_win32_Sltk_Win32_Browser_getWindowHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::Browser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::Browser* self = (const Sltk::Win32::Browser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindowHandle'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getWindowHandle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowHandle'.",&tolua_err);
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
    tolua_function(tolua_S,"showMessageBox",tolua_libSLTK_win32_Sltk_Win32_showMessageBox00);
    tolua_function(tolua_S,"showMessageBox",tolua_libSLTK_win32_Sltk_Win32_showMessageBox01);
    tolua_function(tolua_S,"showMessageBox",tolua_libSLTK_win32_Sltk_Win32_showMessageBox02);
    tolua_function(tolua_S,"adjustWindow",tolua_libSLTK_win32_Sltk_Win32_adjustWindow00);
    tolua_function(tolua_S,"moveWindowToCenter",tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter00);
    tolua_function(tolua_S,"moveWindowToCenter",tolua_libSLTK_win32_Sltk_Win32_moveWindowToCenter01);
    tolua_function(tolua_S,"getWindowName",tolua_libSLTK_win32_Sltk_Win32_getWindowName00);
    tolua_function(tolua_S,"setWindowText",tolua_libSLTK_win32_Sltk_Win32_setWindowText00);
    tolua_function(tolua_S,"getWindowText",tolua_libSLTK_win32_Sltk_Win32_getWindowText00);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Window","Sltk::Win32::Window","Sltk::Object",tolua_collect_Sltk__Win32__Window);
    #else
    tolua_cclass(tolua_S,"Window","Sltk::Win32::Window","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Window");
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Window_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Window_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Window_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Window_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Window_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Window_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_win32_Sltk_Win32_Window_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Window_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_win32_Sltk_Win32_Window_close00);
     tolua_function(tolua_S,"show",tolua_libSLTK_win32_Sltk_Win32_Window_show00);
     tolua_function(tolua_S,"getHandle",tolua_libSLTK_win32_Sltk_Win32_Window_getHandle00);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"pollWindowMessage",tolua_libSLTK_win32_Sltk_Win32_pollWindowMessage00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Win32",0);
   tolua_beginmodule(tolua_S,"Win32");
    tolua_constant(tolua_S,"VT_NONE",Sltk::Win32::VT_NONE);
    tolua_constant(tolua_S,"VT_STRING",Sltk::Win32::VT_STRING);
    tolua_constant(tolua_S,"VT_INTEGER",Sltk::Win32::VT_INTEGER);
    tolua_constant(tolua_S,"VT_NUMBER",Sltk::Win32::VT_NUMBER);
    tolua_constant(tolua_S,"VT_ERROR",Sltk::Win32::VT_ERROR);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Variant","Sltk::Win32::Variant","",tolua_collect_Sltk__Win32__Variant);
    #else
    tolua_cclass(tolua_S,"Variant","Sltk::Win32::Variant","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Variant");
     tolua_variable(tolua_S,"vType",tolua_get_Sltk__Win32__Variant_unsigned_vType,tolua_set_Sltk__Win32__Variant_unsigned_vType);
     tolua_variable(tolua_S,"strVal",tolua_get_Sltk__Win32__Variant_strVal,tolua_set_Sltk__Win32__Variant_strVal);
     tolua_variable(tolua_S,"intVal",tolua_get_Sltk__Win32__Variant_intVal,tolua_set_Sltk__Win32__Variant_intVal);
     tolua_variable(tolua_S,"numVal",tolua_get_Sltk__Win32__Variant_numVal,tolua_set_Sltk__Win32__Variant_numVal);
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Variant_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Variant_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Variant_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Variant_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Variant_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Variant_new01_local);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"HTMLElement","Sltk::Win32::HTMLElement","Sltk::Object",tolua_collect_Sltk__Win32__HTMLElement);
    #else
    tolua_cclass(tolua_S,"HTMLElement","Sltk::Win32::HTMLElement","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"HTMLElement");
     tolua_function(tolua_S,"getAttribute",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getAttribute00);
     tolua_function(tolua_S,"removeAttribute",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_removeAttribute00);
     tolua_function(tolua_S,"setAttribute",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setAttribute00);
     tolua_function(tolua_S,"getClass",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getClass00);
     tolua_function(tolua_S,"setClass",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setClass00);
     tolua_function(tolua_S,"getID",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getID00);
     tolua_function(tolua_S,"setID",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setID00);
     tolua_function(tolua_S,"getInnerHTML",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerHTML00);
     tolua_function(tolua_S,"setInnerHTML",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerHTML00);
     tolua_function(tolua_S,"getInnerText",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_getInnerText00);
     tolua_function(tolua_S,"setInnerText",tolua_libSLTK_win32_Sltk_Win32_HTMLElement_setInnerText00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"HTMLElementCollection","Sltk::Win32::HTMLElementCollection","Sltk::Object",tolua_collect_Sltk__Win32__HTMLElementCollection);
    #else
    tolua_cclass(tolua_S,"HTMLElementCollection","Sltk::Win32::HTMLElementCollection","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"HTMLElementCollection");
     tolua_function(tolua_S,"getSize",tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getSize00);
     tolua_function(tolua_S,"getElement",tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement00);
     tolua_function(tolua_S,"getElement",tolua_libSLTK_win32_Sltk_Win32_HTMLElementCollection_getElement01);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Browser","Sltk::Win32::Browser","Sltk::Object",tolua_collect_Sltk__Win32__Browser);
    #else
    tolua_cclass(tolua_S,"Browser","Sltk::Win32::Browser","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Browser");
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Browser_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Browser_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Browser_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_win32_Sltk_Win32_Browser_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_win32_Sltk_Win32_Browser_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_win32_Sltk_Win32_Browser_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_win32_Sltk_Win32_Browser_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_win32_Sltk_Win32_Browser_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_win32_Sltk_Win32_Browser_close00);
     tolua_function(tolua_S,"getURL",tolua_libSLTK_win32_Sltk_Win32_Browser_getURL00);
     tolua_function(tolua_S,"goHome",tolua_libSLTK_win32_Sltk_Win32_Browser_goHome00);
     tolua_function(tolua_S,"goBlank",tolua_libSLTK_win32_Sltk_Win32_Browser_goBlank00);
     tolua_function(tolua_S,"goBack",tolua_libSLTK_win32_Sltk_Win32_Browser_goBack00);
     tolua_function(tolua_S,"goForward",tolua_libSLTK_win32_Sltk_Win32_Browser_goForward00);
     tolua_function(tolua_S,"navigate",tolua_libSLTK_win32_Sltk_Win32_Browser_navigate00);
     tolua_function(tolua_S,"writeHTML",tolua_libSLTK_win32_Sltk_Win32_Browser_writeHTML00);
     tolua_function(tolua_S,"setSilent",tolua_libSLTK_win32_Sltk_Win32_Browser_setSilent00);
     tolua_function(tolua_S,"refresh",tolua_libSLTK_win32_Sltk_Win32_Browser_refresh00);
     tolua_function(tolua_S,"stop",tolua_libSLTK_win32_Sltk_Win32_Browser_stop00);
     tolua_function(tolua_S,"processKey",tolua_libSLTK_win32_Sltk_Win32_Browser_processKey00);
     tolua_function(tolua_S,"executeScript",tolua_libSLTK_win32_Sltk_Win32_Browser_executeScript00);
     tolua_function(tolua_S,"getAllElements",tolua_libSLTK_win32_Sltk_Win32_Browser_getAllElements00);
     tolua_function(tolua_S,"getElementsByID",tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByID00);
     tolua_function(tolua_S,"getElementsByTagName",tolua_libSLTK_win32_Sltk_Win32_Browser_getElementsByTagName00);
     tolua_function(tolua_S,"getElementByID",tolua_libSLTK_win32_Sltk_Win32_Browser_getElementByID00);
     tolua_function(tolua_S,"getBody",tolua_libSLTK_win32_Sltk_Win32_Browser_getBody00);
     tolua_function(tolua_S,"getWindowHandle",tolua_libSLTK_win32_Sltk_Win32_Browser_getWindowHandle00);
    tolua_endmodule(tolua_S);
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

