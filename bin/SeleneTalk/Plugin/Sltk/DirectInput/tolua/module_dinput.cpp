/*
** Lua binding: libSLTK_dinput
** Generated automatically by tolua++-1.0.92 on 03/19/16 10:43:16.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libSLTK_dinput_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sltk__Win32__DirectInput (lua_State* tolua_S)
{
 Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::Win32::DXIMouseStatus");
 tolua_usertype(tolua_S,"Sltk::Win32::DirectInput");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::Win32::DXIJoypadStatus");
}

/* get function: button of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button
static int tolua_get_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::Win32::DXIMouseStatus* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::Win32::DXIMouseStatus*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=8)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->button[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button
static int tolua_set_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::Win32::DXIMouseStatus* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::Win32::DXIMouseStatus*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=8)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->button[tolua_index] = ((bool)  tolua_toboolean(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: relX of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_relX
static int tolua_get_Sltk__Win32__DXIMouseStatus_relX(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'relX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->relX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: relX of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_relX
static int tolua_set_Sltk__Win32__DXIMouseStatus_relX(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'relX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->relX = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: relY of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_relY
static int tolua_get_Sltk__Win32__DXIMouseStatus_relY(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'relY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->relY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: relY of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_relY
static int tolua_set_Sltk__Win32__DXIMouseStatus_relY(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'relY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->relY = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: absX of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_absX
static int tolua_get_Sltk__Win32__DXIMouseStatus_absX(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->absX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: absX of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_absX
static int tolua_set_Sltk__Win32__DXIMouseStatus_absX(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->absX = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: absY of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_absY
static int tolua_get_Sltk__Win32__DXIMouseStatus_absY(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->absY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: absY of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_absY
static int tolua_set_Sltk__Win32__DXIMouseStatus_absY(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'absY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->absY = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lx of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_lx
static int tolua_get_Sltk__Win32__DXIMouseStatus_lx(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lx'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lx);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lx of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_lx
static int tolua_set_Sltk__Win32__DXIMouseStatus_lx(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lx'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lx = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ly of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_ly
static int tolua_get_Sltk__Win32__DXIMouseStatus_ly(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ly'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ly);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ly of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_ly
static int tolua_set_Sltk__Win32__DXIMouseStatus_ly(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ly'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ly = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lz of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIMouseStatus_lz
static int tolua_get_Sltk__Win32__DXIMouseStatus_lz(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lz'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lz);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lz of class  Sltk::Win32::DXIMouseStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIMouseStatus_lz
static int tolua_set_Sltk__Win32__DXIMouseStatus_lz(lua_State* tolua_S)
{
  Sltk::Win32::DXIMouseStatus* self = (Sltk::Win32::DXIMouseStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lz'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lz = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: button of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button
static int tolua_get_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::Win32::DXIJoypadStatus* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::Win32::DXIJoypadStatus*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=32)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->button[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button
static int tolua_set_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::Win32::DXIJoypadStatus* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::Win32::DXIJoypadStatus*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=32)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->button[tolua_index] = ((  char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lx of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIJoypadStatus_lx
static int tolua_get_Sltk__Win32__DXIJoypadStatus_lx(lua_State* tolua_S)
{
  Sltk::Win32::DXIJoypadStatus* self = (Sltk::Win32::DXIJoypadStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lx'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->lx);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lx of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIJoypadStatus_lx
static int tolua_set_Sltk__Win32__DXIJoypadStatus_lx(lua_State* tolua_S)
{
  Sltk::Win32::DXIJoypadStatus* self = (Sltk::Win32::DXIJoypadStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lx'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lx = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ly of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__Win32__DXIJoypadStatus_ly
static int tolua_get_Sltk__Win32__DXIJoypadStatus_ly(lua_State* tolua_S)
{
  Sltk::Win32::DXIJoypadStatus* self = (Sltk::Win32::DXIJoypadStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ly'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ly);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ly of class  Sltk::Win32::DXIJoypadStatus */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__Win32__DXIJoypadStatus_ly
static int tolua_set_Sltk__Win32__DXIJoypadStatus_ly(lua_State* tolua_S)
{
  Sltk::Win32::DXIJoypadStatus* self = (Sltk::Win32::DXIJoypadStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ly'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ly = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::DirectInput* tolua_ret = (Sltk::Win32::DirectInput*)  Mtolua_new((Sltk::Win32::DirectInput)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::DirectInput");
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

/* method: new_local of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00_local
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Win32::DirectInput* tolua_ret = (Sltk::Win32::DirectInput*)  Mtolua_new((Sltk::Win32::DirectInput)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::DirectInput");
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

/* method: new of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long hWnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Win32::DirectInput* tolua_ret = (Sltk::Win32::DirectInput*)  Mtolua_new((Sltk::Win32::DirectInput)(hWnd));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::DirectInput");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01_local
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long hWnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Win32::DirectInput* tolua_ret = (Sltk::Win32::DirectInput*)  Mtolua_new((Sltk::Win32::DirectInput)(hWnd));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Win32::DirectInput");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_delete00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_open00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(hwnd);
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

/* method: close of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_close00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
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

/* method: acquire of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquire00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquire00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquire'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->acquire();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquire'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unacquire of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_unacquire00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_unacquire00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unacquire'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->unacquire();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unacquire'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: acquireInputStates of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquireInputStates00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquireInputStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquireInputStates'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->acquireInputStates();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireInputStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearInputStates of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_clearInputStates00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_clearInputStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearInputStates'", NULL);
#endif
  {
   self->clearInputStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearInputStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getString00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Win32::DirectInput* self = (Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
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

/* method: getKey of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getKey00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::DirectInput* self = (const Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getKey'", NULL);
#endif
  {
    char tolua_ret = (  char)  self->getKey(id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMouse of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getMouse00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getMouse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::DirectInput* self = (const Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMouse'", NULL);
#endif
  {
   const Sltk::Win32::DXIMouseStatus& tolua_ret = (const Sltk::Win32::DXIMouseStatus&)  self->getMouse();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Sltk::Win32::DXIMouseStatus");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMouse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getJoypad of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getJoypad00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getJoypad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::DirectInput* self = (const Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getJoypad'", NULL);
#endif
  {
   const Sltk::Win32::DXIJoypadStatus& tolua_ret = (const Sltk::Win32::DXIJoypadStatus&)  self->getJoypad();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Sltk::Win32::DXIJoypadStatus");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getJoypad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTargetWindow of class  Sltk::Win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getTargetWindow00
static int tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getTargetWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::Win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::Win32::DirectInput* self = (const Sltk::Win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTargetWindow'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getTargetWindow();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTargetWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libSLTK_dinput_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Win32",0);
   tolua_beginmodule(tolua_S,"Win32");
    tolua_constant(tolua_S,"DIK_ESCAPE",Sltk::Win32::DIK_ESCAPE);
    tolua_constant(tolua_S,"DIK_1",Sltk::Win32::DIK_1);
    tolua_constant(tolua_S,"DIK_2",Sltk::Win32::DIK_2);
    tolua_constant(tolua_S,"DIK_3",Sltk::Win32::DIK_3);
    tolua_constant(tolua_S,"DIK_4",Sltk::Win32::DIK_4);
    tolua_constant(tolua_S,"DIK_5",Sltk::Win32::DIK_5);
    tolua_constant(tolua_S,"DIK_6",Sltk::Win32::DIK_6);
    tolua_constant(tolua_S,"DIK_7",Sltk::Win32::DIK_7);
    tolua_constant(tolua_S,"DIK_8",Sltk::Win32::DIK_8);
    tolua_constant(tolua_S,"DIK_9",Sltk::Win32::DIK_9);
    tolua_constant(tolua_S,"DIK_0",Sltk::Win32::DIK_0);
    tolua_constant(tolua_S,"DIK_MINUS",Sltk::Win32::DIK_MINUS);
    tolua_constant(tolua_S,"DIK_EQUALS",Sltk::Win32::DIK_EQUALS);
    tolua_constant(tolua_S,"DIK_BACK",Sltk::Win32::DIK_BACK);
    tolua_constant(tolua_S,"DIK_TAB",Sltk::Win32::DIK_TAB);
    tolua_constant(tolua_S,"DIK_Q",Sltk::Win32::DIK_Q);
    tolua_constant(tolua_S,"DIK_W",Sltk::Win32::DIK_W);
    tolua_constant(tolua_S,"DIK_E",Sltk::Win32::DIK_E);
    tolua_constant(tolua_S,"DIK_R",Sltk::Win32::DIK_R);
    tolua_constant(tolua_S,"DIK_T",Sltk::Win32::DIK_T);
    tolua_constant(tolua_S,"DIK_Y",Sltk::Win32::DIK_Y);
    tolua_constant(tolua_S,"DIK_U",Sltk::Win32::DIK_U);
    tolua_constant(tolua_S,"DIK_I",Sltk::Win32::DIK_I);
    tolua_constant(tolua_S,"DIK_O",Sltk::Win32::DIK_O);
    tolua_constant(tolua_S,"DIK_P",Sltk::Win32::DIK_P);
    tolua_constant(tolua_S,"DIK_LBRACKET",Sltk::Win32::DIK_LBRACKET);
    tolua_constant(tolua_S,"DIK_RBRACKET",Sltk::Win32::DIK_RBRACKET);
    tolua_constant(tolua_S,"DIK_RETURN",Sltk::Win32::DIK_RETURN);
    tolua_constant(tolua_S,"DIK_LCONTROL",Sltk::Win32::DIK_LCONTROL);
    tolua_constant(tolua_S,"DIK_A",Sltk::Win32::DIK_A);
    tolua_constant(tolua_S,"DIK_S",Sltk::Win32::DIK_S);
    tolua_constant(tolua_S,"DIK_D",Sltk::Win32::DIK_D);
    tolua_constant(tolua_S,"DIK_F",Sltk::Win32::DIK_F);
    tolua_constant(tolua_S,"DIK_G",Sltk::Win32::DIK_G);
    tolua_constant(tolua_S,"DIK_H",Sltk::Win32::DIK_H);
    tolua_constant(tolua_S,"DIK_J",Sltk::Win32::DIK_J);
    tolua_constant(tolua_S,"DIK_K",Sltk::Win32::DIK_K);
    tolua_constant(tolua_S,"DIK_L",Sltk::Win32::DIK_L);
    tolua_constant(tolua_S,"DIK_SEMICOLON",Sltk::Win32::DIK_SEMICOLON);
    tolua_constant(tolua_S,"DIK_APOSTROPHE",Sltk::Win32::DIK_APOSTROPHE);
    tolua_constant(tolua_S,"DIK_GRAVE",Sltk::Win32::DIK_GRAVE);
    tolua_constant(tolua_S,"DIK_LSHIFT",Sltk::Win32::DIK_LSHIFT);
    tolua_constant(tolua_S,"DIK_BACKSLASH",Sltk::Win32::DIK_BACKSLASH);
    tolua_constant(tolua_S,"DIK_Z",Sltk::Win32::DIK_Z);
    tolua_constant(tolua_S,"DIK_X",Sltk::Win32::DIK_X);
    tolua_constant(tolua_S,"DIK_C",Sltk::Win32::DIK_C);
    tolua_constant(tolua_S,"DIK_V",Sltk::Win32::DIK_V);
    tolua_constant(tolua_S,"DIK_B",Sltk::Win32::DIK_B);
    tolua_constant(tolua_S,"DIK_N",Sltk::Win32::DIK_N);
    tolua_constant(tolua_S,"DIK_M",Sltk::Win32::DIK_M);
    tolua_constant(tolua_S,"DIK_COMMA",Sltk::Win32::DIK_COMMA);
    tolua_constant(tolua_S,"DIK_PERIOD",Sltk::Win32::DIK_PERIOD);
    tolua_constant(tolua_S,"DIK_SLASH",Sltk::Win32::DIK_SLASH);
    tolua_constant(tolua_S,"DIK_RSHIFT",Sltk::Win32::DIK_RSHIFT);
    tolua_constant(tolua_S,"DIK_MULTIPLY",Sltk::Win32::DIK_MULTIPLY);
    tolua_constant(tolua_S,"DIK_LMENU",Sltk::Win32::DIK_LMENU);
    tolua_constant(tolua_S,"DIK_SPACE",Sltk::Win32::DIK_SPACE);
    tolua_constant(tolua_S,"DIK_CAPITAL",Sltk::Win32::DIK_CAPITAL);
    tolua_constant(tolua_S,"DIK_F1",Sltk::Win32::DIK_F1);
    tolua_constant(tolua_S,"DIK_F2",Sltk::Win32::DIK_F2);
    tolua_constant(tolua_S,"DIK_F3",Sltk::Win32::DIK_F3);
    tolua_constant(tolua_S,"DIK_F4",Sltk::Win32::DIK_F4);
    tolua_constant(tolua_S,"DIK_F5",Sltk::Win32::DIK_F5);
    tolua_constant(tolua_S,"DIK_F6",Sltk::Win32::DIK_F6);
    tolua_constant(tolua_S,"DIK_F7",Sltk::Win32::DIK_F7);
    tolua_constant(tolua_S,"DIK_F8",Sltk::Win32::DIK_F8);
    tolua_constant(tolua_S,"DIK_F9",Sltk::Win32::DIK_F9);
    tolua_constant(tolua_S,"DIK_F10",Sltk::Win32::DIK_F10);
    tolua_constant(tolua_S,"DIK_NUMLOCK",Sltk::Win32::DIK_NUMLOCK);
    tolua_constant(tolua_S,"DIK_SCROLL",Sltk::Win32::DIK_SCROLL);
    tolua_constant(tolua_S,"DIK_NUMPAD7",Sltk::Win32::DIK_NUMPAD7);
    tolua_constant(tolua_S,"DIK_NUMPAD8",Sltk::Win32::DIK_NUMPAD8);
    tolua_constant(tolua_S,"DIK_NUMPAD9",Sltk::Win32::DIK_NUMPAD9);
    tolua_constant(tolua_S,"DIK_SUBTRACT",Sltk::Win32::DIK_SUBTRACT);
    tolua_constant(tolua_S,"DIK_NUMPAD4",Sltk::Win32::DIK_NUMPAD4);
    tolua_constant(tolua_S,"DIK_NUMPAD5",Sltk::Win32::DIK_NUMPAD5);
    tolua_constant(tolua_S,"DIK_NUMPAD6",Sltk::Win32::DIK_NUMPAD6);
    tolua_constant(tolua_S,"DIK_ADD",Sltk::Win32::DIK_ADD);
    tolua_constant(tolua_S,"DIK_NUMPAD1",Sltk::Win32::DIK_NUMPAD1);
    tolua_constant(tolua_S,"DIK_NUMPAD2",Sltk::Win32::DIK_NUMPAD2);
    tolua_constant(tolua_S,"DIK_NUMPAD3",Sltk::Win32::DIK_NUMPAD3);
    tolua_constant(tolua_S,"DIK_NUMPAD0",Sltk::Win32::DIK_NUMPAD0);
    tolua_constant(tolua_S,"DIK_DECIMAL",Sltk::Win32::DIK_DECIMAL);
    tolua_constant(tolua_S,"DIK_OEM_102",Sltk::Win32::DIK_OEM_102);
    tolua_constant(tolua_S,"DIK_F11",Sltk::Win32::DIK_F11);
    tolua_constant(tolua_S,"DIK_F12",Sltk::Win32::DIK_F12);
    tolua_constant(tolua_S,"DIK_F13",Sltk::Win32::DIK_F13);
    tolua_constant(tolua_S,"DIK_F14",Sltk::Win32::DIK_F14);
    tolua_constant(tolua_S,"DIK_F15",Sltk::Win32::DIK_F15);
    tolua_constant(tolua_S,"DIK_KANA",Sltk::Win32::DIK_KANA);
    tolua_constant(tolua_S,"DIK_ABNT_C1",Sltk::Win32::DIK_ABNT_C1);
    tolua_constant(tolua_S,"DIK_CONVERT",Sltk::Win32::DIK_CONVERT);
    tolua_constant(tolua_S,"DIK_NOCONVERT",Sltk::Win32::DIK_NOCONVERT);
    tolua_constant(tolua_S,"DIK_YEN",Sltk::Win32::DIK_YEN);
    tolua_constant(tolua_S,"DIK_ABNT_C2",Sltk::Win32::DIK_ABNT_C2);
    tolua_constant(tolua_S,"DIK_NUMPADEQUALS",Sltk::Win32::DIK_NUMPADEQUALS);
    tolua_constant(tolua_S,"DIK_PREVTRACK",Sltk::Win32::DIK_PREVTRACK);
    tolua_constant(tolua_S,"DIK_AT",Sltk::Win32::DIK_AT);
    tolua_constant(tolua_S,"DIK_COLON",Sltk::Win32::DIK_COLON);
    tolua_constant(tolua_S,"DIK_UNDERLINE",Sltk::Win32::DIK_UNDERLINE);
    tolua_constant(tolua_S,"DIK_KANJI",Sltk::Win32::DIK_KANJI);
    tolua_constant(tolua_S,"DIK_STOP",Sltk::Win32::DIK_STOP);
    tolua_constant(tolua_S,"DIK_AX",Sltk::Win32::DIK_AX);
    tolua_constant(tolua_S,"DIK_UNLABELED",Sltk::Win32::DIK_UNLABELED);
    tolua_constant(tolua_S,"DIK_NEXTTRACK",Sltk::Win32::DIK_NEXTTRACK);
    tolua_constant(tolua_S,"DIK_NUMPADENTER",Sltk::Win32::DIK_NUMPADENTER);
    tolua_constant(tolua_S,"DIK_RCONTROL",Sltk::Win32::DIK_RCONTROL);
    tolua_constant(tolua_S,"DIK_MUTE",Sltk::Win32::DIK_MUTE);
    tolua_constant(tolua_S,"DIK_CALCULATOR",Sltk::Win32::DIK_CALCULATOR);
    tolua_constant(tolua_S,"DIK_PLAYPAUSE",Sltk::Win32::DIK_PLAYPAUSE);
    tolua_constant(tolua_S,"DIK_MEDIASTOP",Sltk::Win32::DIK_MEDIASTOP);
    tolua_constant(tolua_S,"DIK_VOLUMEDOWN",Sltk::Win32::DIK_VOLUMEDOWN);
    tolua_constant(tolua_S,"DIK_VOLUMEUP",Sltk::Win32::DIK_VOLUMEUP);
    tolua_constant(tolua_S,"DIK_WEBHOME",Sltk::Win32::DIK_WEBHOME);
    tolua_constant(tolua_S,"DIK_NUMPADCOMMA",Sltk::Win32::DIK_NUMPADCOMMA);
    tolua_constant(tolua_S,"DIK_DIVIDE",Sltk::Win32::DIK_DIVIDE);
    tolua_constant(tolua_S,"DIK_SYSRQ",Sltk::Win32::DIK_SYSRQ);
    tolua_constant(tolua_S,"DIK_RMENU",Sltk::Win32::DIK_RMENU);
    tolua_constant(tolua_S,"DIK_PAUSE",Sltk::Win32::DIK_PAUSE);
    tolua_constant(tolua_S,"DIK_HOME",Sltk::Win32::DIK_HOME);
    tolua_constant(tolua_S,"DIK_UP",Sltk::Win32::DIK_UP);
    tolua_constant(tolua_S,"DIK_PRIOR",Sltk::Win32::DIK_PRIOR);
    tolua_constant(tolua_S,"DIK_LEFT",Sltk::Win32::DIK_LEFT);
    tolua_constant(tolua_S,"DIK_RIGHT",Sltk::Win32::DIK_RIGHT);
    tolua_constant(tolua_S,"DIK_END",Sltk::Win32::DIK_END);
    tolua_constant(tolua_S,"DIK_DOWN",Sltk::Win32::DIK_DOWN);
    tolua_constant(tolua_S,"DIK_NEXT",Sltk::Win32::DIK_NEXT);
    tolua_constant(tolua_S,"DIK_INSERT",Sltk::Win32::DIK_INSERT);
    tolua_constant(tolua_S,"DIK_DELETE",Sltk::Win32::DIK_DELETE);
    tolua_constant(tolua_S,"DIK_LWIN",Sltk::Win32::DIK_LWIN);
    tolua_constant(tolua_S,"DIK_RWIN",Sltk::Win32::DIK_RWIN);
    tolua_constant(tolua_S,"DIK_APPS",Sltk::Win32::DIK_APPS);
    tolua_constant(tolua_S,"DIK_POWER",Sltk::Win32::DIK_POWER);
    tolua_constant(tolua_S,"DIK_SLEEP",Sltk::Win32::DIK_SLEEP);
    tolua_constant(tolua_S,"DIK_WAKE",Sltk::Win32::DIK_WAKE);
    tolua_constant(tolua_S,"DIK_WEBSEARCH",Sltk::Win32::DIK_WEBSEARCH);
    tolua_constant(tolua_S,"DIK_WEBFAVORITES",Sltk::Win32::DIK_WEBFAVORITES);
    tolua_constant(tolua_S,"DIK_WEBREFRESH",Sltk::Win32::DIK_WEBREFRESH);
    tolua_constant(tolua_S,"DIK_WEBSTOP",Sltk::Win32::DIK_WEBSTOP);
    tolua_constant(tolua_S,"DIK_WEBFORWARD",Sltk::Win32::DIK_WEBFORWARD);
    tolua_constant(tolua_S,"DIK_WEBBACK",Sltk::Win32::DIK_WEBBACK);
    tolua_constant(tolua_S,"DIK_MYCOMPUTER",Sltk::Win32::DIK_MYCOMPUTER);
    tolua_constant(tolua_S,"DIK_MAIL",Sltk::Win32::DIK_MAIL);
    tolua_constant(tolua_S,"DIK_MEDIASELECT",Sltk::Win32::DIK_MEDIASELECT);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Win32",0);
   tolua_beginmodule(tolua_S,"Win32");
    tolua_cclass(tolua_S,"DXIMouseStatus","Sltk::Win32::DXIMouseStatus","",NULL);
    tolua_beginmodule(tolua_S,"DXIMouseStatus");
     tolua_array(tolua_S,"button",tolua_get_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button,tolua_set_libSLTK_dinput_Sltk_Win32_DXIMouseStatus_button);
     tolua_variable(tolua_S,"relX",tolua_get_Sltk__Win32__DXIMouseStatus_relX,tolua_set_Sltk__Win32__DXIMouseStatus_relX);
     tolua_variable(tolua_S,"relY",tolua_get_Sltk__Win32__DXIMouseStatus_relY,tolua_set_Sltk__Win32__DXIMouseStatus_relY);
     tolua_variable(tolua_S,"absX",tolua_get_Sltk__Win32__DXIMouseStatus_absX,tolua_set_Sltk__Win32__DXIMouseStatus_absX);
     tolua_variable(tolua_S,"absY",tolua_get_Sltk__Win32__DXIMouseStatus_absY,tolua_set_Sltk__Win32__DXIMouseStatus_absY);
     tolua_variable(tolua_S,"lx",tolua_get_Sltk__Win32__DXIMouseStatus_lx,tolua_set_Sltk__Win32__DXIMouseStatus_lx);
     tolua_variable(tolua_S,"ly",tolua_get_Sltk__Win32__DXIMouseStatus_ly,tolua_set_Sltk__Win32__DXIMouseStatus_ly);
     tolua_variable(tolua_S,"lz",tolua_get_Sltk__Win32__DXIMouseStatus_lz,tolua_set_Sltk__Win32__DXIMouseStatus_lz);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"DXIJoypadStatus","Sltk::Win32::DXIJoypadStatus","",NULL);
    tolua_beginmodule(tolua_S,"DXIJoypadStatus");
     tolua_array(tolua_S,"button",tolua_get_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button,tolua_set_libSLTK_dinput_Sltk_Win32_DXIJoypadStatus_button);
     tolua_variable(tolua_S,"lx",tolua_get_Sltk__Win32__DXIJoypadStatus_lx,tolua_set_Sltk__Win32__DXIJoypadStatus_lx);
     tolua_variable(tolua_S,"ly",tolua_get_Sltk__Win32__DXIJoypadStatus_ly,tolua_set_Sltk__Win32__DXIJoypadStatus_ly);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"DirectInput","Sltk::Win32::DirectInput","Sltk::Object",tolua_collect_Sltk__Win32__DirectInput);
    #else
    tolua_cclass(tolua_S,"DirectInput","Sltk::Win32::DirectInput","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"DirectInput");
     tolua_function(tolua_S,"new",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_close00);
     tolua_function(tolua_S,"acquire",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquire00);
     tolua_function(tolua_S,"unacquire",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_unacquire00);
     tolua_function(tolua_S,"acquireInputStates",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_acquireInputStates00);
     tolua_function(tolua_S,"clearInputStates",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_clearInputStates00);
     tolua_function(tolua_S,"getString",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getString00);
     tolua_function(tolua_S,"getKey",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getKey00);
     tolua_function(tolua_S,"getMouse",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getMouse00);
     tolua_function(tolua_S,"getJoypad",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getJoypad00);
     tolua_function(tolua_S,"getTargetWindow",tolua_libSLTK_dinput_Sltk_Win32_DirectInput_getTargetWindow00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libSLTK_dinput (lua_State* tolua_S) {
 return tolua_libSLTK_dinput_open(tolua_S);
};
#endif

