/*
** Lua binding: libSLTK_SDL
** Generated automatically by tolua++-1.0.92 on 04/10/16 00:11:49.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libSLTK_SDL_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sltk__SDL__Window (lua_State* tolua_S)
{
 Sltk::SDL::Window* self = (Sltk::SDL::Window*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Event (lua_State* tolua_S)
{
 Sltk::SDL::Event* self = (Sltk::SDL::Event*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Color (lua_State* tolua_S)
{
 Sltk::SDL::Color* self = (Sltk::SDL::Color*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__FPSManager (lua_State* tolua_S)
{
 Sltk::SDL::FPSManager* self = (Sltk::SDL::FPSManager*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Texture (lua_State* tolua_S)
{
 Sltk::SDL::Texture* self = (Sltk::SDL::Texture*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Mixer (lua_State* tolua_S)
{
 Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Joystick (lua_State* tolua_S)
{
 Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__SDL__Font (lua_State* tolua_S)
{
 Sltk::SDL::Font* self = (Sltk::SDL::Font*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::SDL::Keysym");
 tolua_usertype(tolua_S,"Sltk::SDL::TextInputEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::Joystick");
 tolua_usertype(tolua_S,"Sltk::SDL::Event");
 tolua_usertype(tolua_S,"Sltk::SDL::JoyButtonEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::MouseButtonEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::TouchFingerEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::TextEditingEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::DollarGestureEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::Color");
 tolua_usertype(tolua_S,"Sltk::SDL::OSEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::JoyHatEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::MultiGestureEvent");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::SDL::Font");
 tolua_usertype(tolua_S,"Sltk::SDL::FPSManager");
 tolua_usertype(tolua_S,"Sltk::SDL::MouseMotionEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::Mixer");
 tolua_usertype(tolua_S,"Sltk::SDL::QuitEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::MouseWheelEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::SysWMEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::CommonEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::DropEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::KeyboardEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::Window");
 tolua_usertype(tolua_S,"Sltk::SDL::ControllerButtonEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::ControllerAxisEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::JoyAxisEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::ControllerDeviceEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::JoyDeviceEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::Texture");
 tolua_usertype(tolua_S,"Sltk::SDL::UserEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::JoyBallEvent");
 tolua_usertype(tolua_S,"Sltk::SDL::WindowEvent");
}

/* get function: type of class  Sltk::SDL::CommonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__CommonEvent_unsigned_type
static int tolua_get_Sltk__SDL__CommonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::CommonEvent* self = (Sltk::SDL::CommonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::CommonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__CommonEvent_unsigned_type
static int tolua_set_Sltk__SDL__CommonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::CommonEvent* self = (Sltk::SDL::CommonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::CommonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__CommonEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__CommonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::CommonEvent* self = (Sltk::SDL::CommonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::CommonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__CommonEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__CommonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::CommonEvent* self = (Sltk::SDL::CommonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_type
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_type
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: event of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_event
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_event(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'event'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->event);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: event of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_event
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_event(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'event'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->event = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding3 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_unsigned_padding3
static int tolua_get_Sltk__SDL__WindowEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding3);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding3 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_unsigned_padding3
static int tolua_set_Sltk__SDL__WindowEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding3 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data1 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_data1
static int tolua_get_Sltk__SDL__WindowEvent_data1(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->data1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data1 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_data1
static int tolua_set_Sltk__SDL__WindowEvent_data1(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data1 = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data2 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__WindowEvent_data2
static int tolua_get_Sltk__SDL__WindowEvent_data2(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->data2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data2 of class  Sltk::SDL::WindowEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__WindowEvent_data2
static int tolua_set_Sltk__SDL__WindowEvent_data2(lua_State* tolua_S)
{
  Sltk::SDL::WindowEvent* self = (Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data2 = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scancode of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Keysym_scancode
static int tolua_get_Sltk__SDL__Keysym_scancode(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scancode'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->scancode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scancode of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Keysym_scancode
static int tolua_set_Sltk__SDL__Keysym_scancode(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scancode'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->scancode = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sym of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Keysym_sym
static int tolua_get_Sltk__SDL__Keysym_sym(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sym'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sym);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sym of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Keysym_sym
static int tolua_set_Sltk__SDL__Keysym_sym(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sym'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sym = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mod of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Keysym_unsigned_mod
static int tolua_get_Sltk__SDL__Keysym_unsigned_mod(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mod'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mod);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mod of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Keysym_unsigned_mod
static int tolua_set_Sltk__SDL__Keysym_unsigned_mod(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mod'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mod = ((unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: unused of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Keysym_unsigned_unused
static int tolua_get_Sltk__SDL__Keysym_unsigned_unused(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'unused'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->unused);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: unused of class  Sltk::SDL::Keysym */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Keysym_unsigned_unused
static int tolua_set_Sltk__SDL__Keysym_unsigned_unused(lua_State* tolua_S)
{
  Sltk::SDL::Keysym* self = (Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'unused'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->unused = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_type
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_type
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_state
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_state
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: repeat of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_repeat
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_repeat(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'repeat'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->repeat);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: repeat of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_repeat
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_repeat(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'repeat'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->repeat = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding3 of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding3
static int tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding3);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding3 of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding3
static int tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding3 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: keysym of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__KeyboardEvent_keysym
static int tolua_get_Sltk__SDL__KeyboardEvent_keysym(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'keysym'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->keysym,"Sltk::SDL::Keysym");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: keysym of class  Sltk::SDL::KeyboardEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__KeyboardEvent_keysym
static int tolua_set_Sltk__SDL__KeyboardEvent_keysym(lua_State* tolua_S)
{
  Sltk::SDL::KeyboardEvent* self = (Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'keysym'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::Keysym",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->keysym = *((Sltk::SDL::Keysym*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_unsigned_type
static int tolua_get_Sltk__SDL__TextEditingEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_unsigned_type
static int tolua_set_Sltk__SDL__TextEditingEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__TextEditingEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__TextEditingEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__TextEditingEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__TextEditingEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_text
static int tolua_get_Sltk__SDL__TextEditingEvent_text(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->text);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_text
static int tolua_set_Sltk__SDL__TextEditingEvent_text(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if (!tolua_istable(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy((char*)
self->text,(const char*)tolua_tostring(tolua_S,2,0),TEXTEDITINGEVENT_TEXT_SIZE-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: start of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_start
static int tolua_get_Sltk__SDL__TextEditingEvent_start(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'start'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->start);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: start of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_start
static int tolua_set_Sltk__SDL__TextEditingEvent_start(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'start'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->start = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: length of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextEditingEvent_length
static int tolua_get_Sltk__SDL__TextEditingEvent_length(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->length);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: length of class  Sltk::SDL::TextEditingEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextEditingEvent_length
static int tolua_set_Sltk__SDL__TextEditingEvent_length(lua_State* tolua_S)
{
  Sltk::SDL::TextEditingEvent* self = (Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->length = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextInputEvent_unsigned_type
static int tolua_get_Sltk__SDL__TextInputEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextInputEvent_unsigned_type
static int tolua_set_Sltk__SDL__TextInputEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextInputEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__TextInputEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextInputEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__TextInputEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextInputEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__TextInputEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextInputEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__TextInputEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TextInputEvent_text
static int tolua_get_Sltk__SDL__TextInputEvent_text(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->text);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  Sltk::SDL::TextInputEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TextInputEvent_text
static int tolua_set_Sltk__SDL__TextInputEvent_text(lua_State* tolua_S)
{
  Sltk::SDL::TextInputEvent* self = (Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if (!tolua_istable(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy((char*)
self->text,(const char*)tolua_tostring(tolua_S,2,0),TEXTINPUTEVENT_TEXT_SIZE-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_type
static int tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_type
static int tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_which
static int tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_which
static int tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_state
static int tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_state
static int tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_x
static int tolua_get_Sltk__SDL__MouseMotionEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_x
static int tolua_set_Sltk__SDL__MouseMotionEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_y
static int tolua_get_Sltk__SDL__MouseMotionEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_y
static int tolua_set_Sltk__SDL__MouseMotionEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xrel of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_xrel
static int tolua_get_Sltk__SDL__MouseMotionEvent_xrel(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xrel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xrel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xrel of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_xrel
static int tolua_set_Sltk__SDL__MouseMotionEvent_xrel(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xrel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xrel = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yrel of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseMotionEvent_yrel
static int tolua_get_Sltk__SDL__MouseMotionEvent_yrel(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yrel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yrel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yrel of class  Sltk::SDL::MouseMotionEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseMotionEvent_yrel
static int tolua_set_Sltk__SDL__MouseMotionEvent_yrel(lua_State* tolua_S)
{
  Sltk::SDL::MouseMotionEvent* self = (Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yrel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yrel = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_type
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_type
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_which
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_which
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: button of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_button
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->button);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_button
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->button = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_state
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_state
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_x
static int tolua_get_Sltk__SDL__MouseButtonEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_x
static int tolua_set_Sltk__SDL__MouseButtonEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseButtonEvent_y
static int tolua_get_Sltk__SDL__MouseButtonEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseButtonEvent_y
static int tolua_set_Sltk__SDL__MouseButtonEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseButtonEvent* self = (Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_type
static int tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_type
static int tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_which
static int tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_which
static int tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_which(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_x
static int tolua_get_Sltk__SDL__MouseWheelEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_x
static int tolua_set_Sltk__SDL__MouseWheelEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MouseWheelEvent_y
static int tolua_get_Sltk__SDL__MouseWheelEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MouseWheelEvent_y
static int tolua_set_Sltk__SDL__MouseWheelEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MouseWheelEvent* self = (Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_type
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_type
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_which
static int tolua_get_Sltk__SDL__JoyAxisEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_which
static int tolua_set_Sltk__SDL__JoyAxisEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: axis of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_axis
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_axis(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'axis'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->axis);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: axis of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_axis
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_axis(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'axis'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->axis = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding3 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding3
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding3);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding3 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding3
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding3 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: value of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_value
static int tolua_get_Sltk__SDL__JoyAxisEvent_value(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->value);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: value of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_value
static int tolua_set_Sltk__SDL__JoyAxisEvent_value(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->value = ((short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding4 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding4
static int tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding4(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding4'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding4);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding4 of class  Sltk::SDL::JoyAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding4
static int tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding4(lua_State* tolua_S)
{
  Sltk::SDL::JoyAxisEvent* self = (Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding4'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding4 = ((unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_type
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_type
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_which
static int tolua_get_Sltk__SDL__JoyBallEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_which
static int tolua_set_Sltk__SDL__JoyBallEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ball of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_ball
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_ball(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ball'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ball);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ball of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_ball
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_ball(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ball'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ball = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding3 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding3
static int tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding3);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding3 of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding3
static int tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding3 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xrel of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_xrel
static int tolua_get_Sltk__SDL__JoyBallEvent_xrel(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xrel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xrel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xrel of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_xrel
static int tolua_set_Sltk__SDL__JoyBallEvent_xrel(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xrel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xrel = ((short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yrel of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyBallEvent_yrel
static int tolua_get_Sltk__SDL__JoyBallEvent_yrel(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yrel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yrel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yrel of class  Sltk::SDL::JoyBallEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyBallEvent_yrel
static int tolua_set_Sltk__SDL__JoyBallEvent_yrel(lua_State* tolua_S)
{
  Sltk::SDL::JoyBallEvent* self = (Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yrel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yrel = ((short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_type
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_type
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_which
static int tolua_get_Sltk__SDL__JoyHatEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_which
static int tolua_set_Sltk__SDL__JoyHatEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hat of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_hat
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_hat(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hat'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->hat);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hat of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_hat
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_hat(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hat'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hat = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: value of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_value
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_value(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->value);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: value of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_value
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_value(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->value = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::JoyHatEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyHatEvent* self = (Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_type
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_type
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_which
static int tolua_get_Sltk__SDL__JoyButtonEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_which
static int tolua_set_Sltk__SDL__JoyButtonEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: button of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_button
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->button);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_button
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->button = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_state
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_state
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::JoyButtonEvent* self = (Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_type
static int tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_type
static int tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__JoyDeviceEvent_which
static int tolua_get_Sltk__SDL__JoyDeviceEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::JoyDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__JoyDeviceEvent_which
static int tolua_set_Sltk__SDL__JoyDeviceEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::JoyDeviceEvent* self = (Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_type
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_type
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_which
static int tolua_get_Sltk__SDL__ControllerAxisEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_which
static int tolua_set_Sltk__SDL__ControllerAxisEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: axis of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_axis
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_axis(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'axis'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->axis);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: axis of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_axis
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_axis(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'axis'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->axis = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding3 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding3
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding3);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding3 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding3
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding3(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding3'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding3 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: value of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_value
static int tolua_get_Sltk__SDL__ControllerAxisEvent_value(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->value);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: value of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_value
static int tolua_set_Sltk__SDL__ControllerAxisEvent_value(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'value'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->value = ((short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding4 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding4
static int tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding4(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding4'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding4);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding4 of class  Sltk::SDL::ControllerAxisEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding4
static int tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding4(lua_State* tolua_S)
{
  Sltk::SDL::ControllerAxisEvent* self = (Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding4'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding4 = ((unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_type
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_type
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_which
static int tolua_get_Sltk__SDL__ControllerButtonEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_which
static int tolua_set_Sltk__SDL__ControllerButtonEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: button of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_button
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->button);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_button
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_button(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->button = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_state
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: state of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_state
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_state(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->state = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding1 of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding1
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding1 of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding1
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding1(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding1 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding2 of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding2
static int tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding2 of class  Sltk::SDL::ControllerButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding2
static int tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding2(lua_State* tolua_S)
{
  Sltk::SDL::ControllerButtonEvent* self = (Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding2'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding2 = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_type
static int tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_type
static int tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: which of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__ControllerDeviceEvent_which
static int tolua_get_Sltk__SDL__ControllerDeviceEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->which);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: which of class  Sltk::SDL::ControllerDeviceEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__ControllerDeviceEvent_which
static int tolua_set_Sltk__SDL__ControllerDeviceEvent_which(lua_State* tolua_S)
{
  Sltk::SDL::ControllerDeviceEvent* self = (Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'which'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->which = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_type
static int tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_type
static int tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: touchId of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_touchId
static int tolua_get_Sltk__SDL__TouchFingerEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->touchId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: touchId of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_touchId
static int tolua_set_Sltk__SDL__TouchFingerEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->touchId = ((long long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fingerId of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_fingerId
static int tolua_get_Sltk__SDL__TouchFingerEvent_fingerId(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fingerId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->fingerId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fingerId of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_fingerId
static int tolua_set_Sltk__SDL__TouchFingerEvent_fingerId(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fingerId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fingerId = ((long long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_x
static int tolua_get_Sltk__SDL__TouchFingerEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_x
static int tolua_set_Sltk__SDL__TouchFingerEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_y
static int tolua_get_Sltk__SDL__TouchFingerEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_y
static int tolua_set_Sltk__SDL__TouchFingerEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dx of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_dx
static int tolua_get_Sltk__SDL__TouchFingerEvent_dx(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dx'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dx);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dx of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_dx
static int tolua_set_Sltk__SDL__TouchFingerEvent_dx(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dx'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dx = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dy of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_dy
static int tolua_get_Sltk__SDL__TouchFingerEvent_dy(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dy'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dy);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dy of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_dy
static int tolua_set_Sltk__SDL__TouchFingerEvent_dy(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dy'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dy = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pressure of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__TouchFingerEvent_pressure
static int tolua_get_Sltk__SDL__TouchFingerEvent_pressure(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pressure'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->pressure);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pressure of class  Sltk::SDL::TouchFingerEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__TouchFingerEvent_pressure
static int tolua_set_Sltk__SDL__TouchFingerEvent_pressure(lua_State* tolua_S)
{
  Sltk::SDL::TouchFingerEvent* self = (Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pressure'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pressure = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_type
static int tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_type
static int tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: touchId of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_touchId
static int tolua_get_Sltk__SDL__MultiGestureEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->touchId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: touchId of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_touchId
static int tolua_set_Sltk__SDL__MultiGestureEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->touchId = ((long long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dTheta of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_dTheta
static int tolua_get_Sltk__SDL__MultiGestureEvent_dTheta(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dTheta'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dTheta);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dTheta of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_dTheta
static int tolua_set_Sltk__SDL__MultiGestureEvent_dTheta(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dTheta'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dTheta = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dDist of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_dDist
static int tolua_get_Sltk__SDL__MultiGestureEvent_dDist(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dDist'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dDist);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dDist of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_dDist
static int tolua_set_Sltk__SDL__MultiGestureEvent_dDist(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dDist'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dDist = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_x
static int tolua_get_Sltk__SDL__MultiGestureEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_x
static int tolua_set_Sltk__SDL__MultiGestureEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_y
static int tolua_get_Sltk__SDL__MultiGestureEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_y
static int tolua_set_Sltk__SDL__MultiGestureEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: numFingers of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_numFingers
static int tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_numFingers(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numFingers'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->numFingers);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: numFingers of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_numFingers
static int tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_numFingers(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numFingers'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->numFingers = ((unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_padding
static int tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_padding(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->padding);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding of class  Sltk::SDL::MultiGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_padding
static int tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_padding(lua_State* tolua_S)
{
  Sltk::SDL::MultiGestureEvent* self = (Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->padding = ((unsigned short)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_type
static int tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_type
static int tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: touchId of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_touchId
static int tolua_get_Sltk__SDL__DollarGestureEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->touchId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: touchId of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_touchId
static int tolua_set_Sltk__SDL__DollarGestureEvent_touchId(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'touchId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->touchId = ((long long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gestureId of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_gestureId
static int tolua_get_Sltk__SDL__DollarGestureEvent_gestureId(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gestureId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->gestureId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gestureId of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_gestureId
static int tolua_set_Sltk__SDL__DollarGestureEvent_gestureId(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gestureId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gestureId = ((long long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: numFingers of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_numFingers
static int tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_numFingers(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numFingers'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->numFingers);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: numFingers of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_numFingers
static int tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_numFingers(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'numFingers'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->numFingers = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: error of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_error
static int tolua_get_Sltk__SDL__DollarGestureEvent_error(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'error'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->error);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: error of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_error
static int tolua_set_Sltk__SDL__DollarGestureEvent_error(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'error'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->error = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_x
static int tolua_get_Sltk__SDL__DollarGestureEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_x
static int tolua_set_Sltk__SDL__DollarGestureEvent_x(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DollarGestureEvent_y
static int tolua_get_Sltk__SDL__DollarGestureEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Sltk::SDL::DollarGestureEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DollarGestureEvent_y
static int tolua_set_Sltk__SDL__DollarGestureEvent_y(lua_State* tolua_S)
{
  Sltk::SDL::DollarGestureEvent* self = (Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DropEvent_unsigned_type
static int tolua_get_Sltk__SDL__DropEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DropEvent_unsigned_type
static int tolua_set_Sltk__SDL__DropEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DropEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__DropEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DropEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__DropEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: file of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__DropEvent_file
static int tolua_get_Sltk__SDL__DropEvent_file(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'file'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->file);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: file of class  Sltk::SDL::DropEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__DropEvent_file
static int tolua_set_Sltk__SDL__DropEvent_file(lua_State* tolua_S)
{
  Sltk::SDL::DropEvent* self = (Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'file'",NULL);
  if (!tolua_isstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->file = ((char*)  tolua_tostring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::QuitEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__QuitEvent_unsigned_type
static int tolua_get_Sltk__SDL__QuitEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::QuitEvent* self = (Sltk::SDL::QuitEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::QuitEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__QuitEvent_unsigned_type
static int tolua_set_Sltk__SDL__QuitEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::QuitEvent* self = (Sltk::SDL::QuitEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::QuitEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__QuitEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__QuitEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::QuitEvent* self = (Sltk::SDL::QuitEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::QuitEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__QuitEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__QuitEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::QuitEvent* self = (Sltk::SDL::QuitEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::OSEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__OSEvent_unsigned_type
static int tolua_get_Sltk__SDL__OSEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::OSEvent* self = (Sltk::SDL::OSEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::OSEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__OSEvent_unsigned_type
static int tolua_set_Sltk__SDL__OSEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::OSEvent* self = (Sltk::SDL::OSEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::OSEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__OSEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__OSEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::OSEvent* self = (Sltk::SDL::OSEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::OSEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__OSEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__OSEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::OSEvent* self = (Sltk::SDL::OSEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_unsigned_type
static int tolua_get_Sltk__SDL__UserEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_unsigned_type
static int tolua_set_Sltk__SDL__UserEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__UserEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__UserEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: windowID of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_unsigned_windowID
static int tolua_get_Sltk__SDL__UserEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->windowID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: windowID of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_unsigned_windowID
static int tolua_set_Sltk__SDL__UserEvent_unsigned_windowID(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'windowID'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->windowID = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: code of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_code
static int tolua_get_Sltk__SDL__UserEvent_code(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'code'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->code);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: code of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_code
static int tolua_set_Sltk__SDL__UserEvent_code(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'code'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->code = ((long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data1 of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_data1
static int tolua_get_Sltk__SDL__UserEvent_data1(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data1'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->data1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data1 of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_data1
static int tolua_set_Sltk__SDL__UserEvent_data1(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data1'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data1 = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data2 of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__UserEvent_data2
static int tolua_get_Sltk__SDL__UserEvent_data2(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data2'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->data2);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data2 of class  Sltk::SDL::UserEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__UserEvent_data2
static int tolua_set_Sltk__SDL__UserEvent_data2(lua_State* tolua_S)
{
  Sltk::SDL::UserEvent* self = (Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data2'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data2 = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__SysWMEvent_unsigned_type
static int tolua_get_Sltk__SDL__SysWMEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__SysWMEvent_unsigned_type
static int tolua_set_Sltk__SDL__SysWMEvent_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: timestamp of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__SysWMEvent_unsigned_timestamp
static int tolua_get_Sltk__SDL__SysWMEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->timestamp);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: timestamp of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__SysWMEvent_unsigned_timestamp
static int tolua_set_Sltk__SDL__SysWMEvent_unsigned_timestamp(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'timestamp'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->timestamp = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: msg of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__SysWMEvent_msg
static int tolua_get_Sltk__SDL__SysWMEvent_msg(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'msg'",NULL);
#endif
  tolua_pushuserdata(tolua_S,(void*)self->msg);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: msg of class  Sltk::SDL::SysWMEvent */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__SysWMEvent_msg
static int tolua_set_Sltk__SDL__SysWMEvent_msg(lua_State* tolua_S)
{
  Sltk::SDL::SysWMEvent* self = (Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'msg'",NULL);
  if (!tolua_isuserdata(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->msg = ((void*)  tolua_touserdata(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_unsigned_type
static int tolua_get_Sltk__SDL__Event_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_unsigned_type
static int tolua_set_Sltk__SDL__Event_unsigned_type(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: common of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_common
static int tolua_get_Sltk__SDL__Event_common(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'common'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->common,"Sltk::SDL::CommonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: common of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_common
static int tolua_set_Sltk__SDL__Event_common(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'common'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::CommonEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->common = *((Sltk::SDL::CommonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: window of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_window
static int tolua_get_Sltk__SDL__Event_window(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'window'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->window,"Sltk::SDL::WindowEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: window of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_window
static int tolua_set_Sltk__SDL__Event_window(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'window'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::WindowEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->window = *((Sltk::SDL::WindowEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: key of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_key
static int tolua_get_Sltk__SDL__Event_key(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'key'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->key,"Sltk::SDL::KeyboardEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: key of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_key
static int tolua_set_Sltk__SDL__Event_key(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'key'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::KeyboardEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->key = *((Sltk::SDL::KeyboardEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: edit of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_edit
static int tolua_get_Sltk__SDL__Event_edit(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'edit'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->edit,"Sltk::SDL::TextEditingEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: edit of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_edit
static int tolua_set_Sltk__SDL__Event_edit(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'edit'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::TextEditingEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->edit = *((Sltk::SDL::TextEditingEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: text of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_text
static int tolua_get_Sltk__SDL__Event_text(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->text,"Sltk::SDL::TextInputEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: text of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_text
static int tolua_set_Sltk__SDL__Event_text(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'text'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::TextInputEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->text = *((Sltk::SDL::TextInputEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: motion of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_motion
static int tolua_get_Sltk__SDL__Event_motion(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motion'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->motion,"Sltk::SDL::MouseMotionEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: motion of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_motion
static int tolua_set_Sltk__SDL__Event_motion(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'motion'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::MouseMotionEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->motion = *((Sltk::SDL::MouseMotionEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: button of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_button
static int tolua_get_Sltk__SDL__Event_button(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->button,"Sltk::SDL::MouseButtonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: button of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_button
static int tolua_set_Sltk__SDL__Event_button(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'button'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::MouseButtonEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->button = *((Sltk::SDL::MouseButtonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wheel of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_wheel
static int tolua_get_Sltk__SDL__Event_wheel(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wheel'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wheel,"Sltk::SDL::MouseWheelEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wheel of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_wheel
static int tolua_set_Sltk__SDL__Event_wheel(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wheel'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::MouseWheelEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wheel = *((Sltk::SDL::MouseWheelEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jaxis of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_jaxis
static int tolua_get_Sltk__SDL__Event_jaxis(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jaxis'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->jaxis,"Sltk::SDL::JoyAxisEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jaxis of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_jaxis
static int tolua_set_Sltk__SDL__Event_jaxis(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jaxis'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::JoyAxisEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->jaxis = *((Sltk::SDL::JoyAxisEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jball of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_jball
static int tolua_get_Sltk__SDL__Event_jball(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jball'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->jball,"Sltk::SDL::JoyBallEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jball of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_jball
static int tolua_set_Sltk__SDL__Event_jball(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jball'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::JoyBallEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->jball = *((Sltk::SDL::JoyBallEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jhat of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_jhat
static int tolua_get_Sltk__SDL__Event_jhat(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jhat'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->jhat,"Sltk::SDL::JoyHatEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jhat of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_jhat
static int tolua_set_Sltk__SDL__Event_jhat(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jhat'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::JoyHatEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->jhat = *((Sltk::SDL::JoyHatEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jbutton of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_jbutton
static int tolua_get_Sltk__SDL__Event_jbutton(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jbutton'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->jbutton,"Sltk::SDL::JoyButtonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jbutton of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_jbutton
static int tolua_set_Sltk__SDL__Event_jbutton(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jbutton'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::JoyButtonEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->jbutton = *((Sltk::SDL::JoyButtonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: jdevice of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_jdevice
static int tolua_get_Sltk__SDL__Event_jdevice(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jdevice'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->jdevice,"Sltk::SDL::JoyDeviceEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: jdevice of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_jdevice
static int tolua_set_Sltk__SDL__Event_jdevice(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'jdevice'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::JoyDeviceEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->jdevice = *((Sltk::SDL::JoyDeviceEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: caxis of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_caxis
static int tolua_get_Sltk__SDL__Event_caxis(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'caxis'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->caxis,"Sltk::SDL::ControllerAxisEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: caxis of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_caxis
static int tolua_set_Sltk__SDL__Event_caxis(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'caxis'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::ControllerAxisEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->caxis = *((Sltk::SDL::ControllerAxisEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbutton of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_cbutton
static int tolua_get_Sltk__SDL__Event_cbutton(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbutton'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbutton,"Sltk::SDL::ControllerButtonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbutton of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_cbutton
static int tolua_set_Sltk__SDL__Event_cbutton(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbutton'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::ControllerButtonEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbutton = *((Sltk::SDL::ControllerButtonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cdevice of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_cdevice
static int tolua_get_Sltk__SDL__Event_cdevice(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cdevice'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cdevice,"Sltk::SDL::ControllerDeviceEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cdevice of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_cdevice
static int tolua_set_Sltk__SDL__Event_cdevice(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cdevice'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::ControllerDeviceEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cdevice = *((Sltk::SDL::ControllerDeviceEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: quit of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_quit
static int tolua_get_Sltk__SDL__Event_quit(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'quit'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->quit,"Sltk::SDL::QuitEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: quit of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_quit
static int tolua_set_Sltk__SDL__Event_quit(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'quit'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::QuitEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->quit = *((Sltk::SDL::QuitEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: user of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_user
static int tolua_get_Sltk__SDL__Event_user(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'user'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->user,"Sltk::SDL::UserEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: user of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_user
static int tolua_set_Sltk__SDL__Event_user(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'user'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::UserEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->user = *((Sltk::SDL::UserEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: syswm of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_syswm
static int tolua_get_Sltk__SDL__Event_syswm(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'syswm'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->syswm,"Sltk::SDL::SysWMEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: syswm of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_syswm
static int tolua_set_Sltk__SDL__Event_syswm(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'syswm'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::SysWMEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->syswm = *((Sltk::SDL::SysWMEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tfinger of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_tfinger
static int tolua_get_Sltk__SDL__Event_tfinger(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tfinger'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tfinger,"Sltk::SDL::TouchFingerEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tfinger of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_tfinger
static int tolua_set_Sltk__SDL__Event_tfinger(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tfinger'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::TouchFingerEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tfinger = *((Sltk::SDL::TouchFingerEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mgesture of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_mgesture
static int tolua_get_Sltk__SDL__Event_mgesture(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mgesture'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->mgesture,"Sltk::SDL::MultiGestureEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mgesture of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_mgesture
static int tolua_set_Sltk__SDL__Event_mgesture(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mgesture'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::MultiGestureEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mgesture = *((Sltk::SDL::MultiGestureEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dgesture of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_dgesture
static int tolua_get_Sltk__SDL__Event_dgesture(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dgesture'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dgesture,"Sltk::SDL::DollarGestureEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dgesture of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_dgesture
static int tolua_set_Sltk__SDL__Event_dgesture(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dgesture'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::DollarGestureEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dgesture = *((Sltk::SDL::DollarGestureEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: drop of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_drop
static int tolua_get_Sltk__SDL__Event_drop(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'drop'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->drop,"Sltk::SDL::DropEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: drop of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_drop
static int tolua_set_Sltk__SDL__Event_drop(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'drop'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::SDL::DropEvent",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->drop = *((Sltk::SDL::DropEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: padding of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Event_unsigned_padding
static int tolua_get_Sltk__SDL__Event_unsigned_padding(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding'",NULL);
#endif
  tolua_pushstring(tolua_S,(const char*)self->padding);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: padding of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Event_unsigned_padding
static int tolua_set_Sltk__SDL__Event_unsigned_padding(lua_State* tolua_S)
{
  Sltk::SDL::Event* self = (Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'padding'",NULL);
  if (!tolua_istable(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
 strncpy((char*)
self->padding,(const char*)tolua_tostring(tolua_S,2,0),56-1);
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Event_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Event_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Event* tolua_ret = (Sltk::SDL::Event*)  Mtolua_new((Sltk::SDL::Event)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Event");
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

/* method: new_local of class  Sltk::SDL::Event */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Event_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Event_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Event* tolua_ret = (Sltk::SDL::Event*)  Mtolua_new((Sltk::SDL::Event)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Event");
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

/* get function: red of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Color_unsigned_red
static int tolua_get_Sltk__SDL__Color_unsigned_red(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'red'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->red);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: red of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Color_unsigned_red
static int tolua_set_Sltk__SDL__Color_unsigned_red(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'red'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->red = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: green of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Color_unsigned_green
static int tolua_get_Sltk__SDL__Color_unsigned_green(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'green'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->green);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: green of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Color_unsigned_green
static int tolua_set_Sltk__SDL__Color_unsigned_green(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'green'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->green = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: blue of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Color_unsigned_blue
static int tolua_get_Sltk__SDL__Color_unsigned_blue(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'blue'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->blue);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: blue of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Color_unsigned_blue
static int tolua_set_Sltk__SDL__Color_unsigned_blue(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'blue'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->blue = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: alpha of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Color_unsigned_alpha
static int tolua_get_Sltk__SDL__Color_unsigned_alpha(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->alpha);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: alpha of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Color_unsigned_alpha
static int tolua_set_Sltk__SDL__Color_unsigned_alpha(lua_State* tolua_S)
{
  Sltk::SDL::Color* self = (Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alpha'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->alpha = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
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

/* method: new_local of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
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

/* method: new of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char r = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char g = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char b = (( unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char a = (( unsigned char)  tolua_tonumber(tolua_S,5,255));
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)(r,g,b,a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Color_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char r = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char g = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char b = (( unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char a = (( unsigned char)  tolua_tonumber(tolua_S,5,255));
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)(r,g,b,a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Color_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new02
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Sltk::SDL::Color* c = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)(*c));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Color_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_new02_local
static int tolua_libSLTK_SDL_Sltk_SDL_Color_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Color",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Sltk::SDL::Color* c = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
  {
   Sltk::SDL::Color* tolua_ret = (Sltk::SDL::Color*)  Mtolua_new((Sltk::SDL::Color)(*c));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Color_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: convert of class  Sltk::SDL::Color */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Color_convert00
static int tolua_libSLTK_SDL_Sltk_SDL_Color_convert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Color* self = (const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convert'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->convert();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getMessage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getMessage00
static int tolua_libSLTK_SDL_Sltk_SDL_getMessage00(lua_State* tolua_S)
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
   string tolua_ret = (string)  Sltk::SDL::getMessage();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getRendererDriverCount */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverCount00
static int tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverCount00(lua_State* tolua_S)
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
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getRendererDriverCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRendererDriverCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getRendererDriverName */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverName00
static int tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverName00(lua_State* tolua_S)
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
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::SDL::getRendererDriverName(index);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRendererDriverName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getRendererName */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getRendererName00
static int tolua_libSLTK_SDL_Sltk_SDL_getRendererName00(lua_State* tolua_S)
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
  unsigned long handle = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::SDL::getRendererName(handle);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRendererName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::setColor */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_setColor00
static int tolua_libSLTK_SDL_Sltk_SDL_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::setColor(*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::clearScreen */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_clearScreen00
static int tolua_libSLTK_SDL_Sltk_SDL_clearScreen00(lua_State* tolua_S)
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
   bool tolua_ret = (bool)  Sltk::SDL::clearScreen();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearScreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::setBlendMode */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_setBlendMode00
static int tolua_libSLTK_SDL_Sltk_SDL_setBlendMode00(lua_State* tolua_S)
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
  unsigned char mode = (( unsigned char)  tolua_tonumber(tolua_S,1,Sltk::SDL::BLEND_ALPHA));
  {
   bool tolua_ret = (bool)  Sltk::SDL::setBlendMode(mode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::defaultEventProcedure */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_defaultEventProcedure00
static int tolua_libSLTK_SDL_Sltk_SDL_defaultEventProcedure00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Event* ev = ((Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::defaultEventProcedure(ev);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defaultEventProcedure'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::pushEvent */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_pushEvent00
static int tolua_libSLTK_SDL_Sltk_SDL_pushEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Event* ev = ((Sltk::SDL::Event*)  tolua_tousertype(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::pushEvent(ev);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::showCursor */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_showCursor00
static int tolua_libSLTK_SDL_Sltk_SDL_showCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool visible = ((bool)  tolua_toboolean(tolua_S,1,true));
  {
   Sltk::SDL::showCursor(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showCursor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::startTextInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_startTextInput00
static int tolua_libSLTK_SDL_Sltk_SDL_startTextInput00(lua_State* tolua_S)
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
   Sltk::SDL::startTextInput();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startTextInput'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::isTextInputActive */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_isTextInputActive00
static int tolua_libSLTK_SDL_Sltk_SDL_isTextInputActive00(lua_State* tolua_S)
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
   bool tolua_ret = (bool)  Sltk::SDL::isTextInputActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTextInputActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::stopTextInput */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_stopTextInput00
static int tolua_libSLTK_SDL_Sltk_SDL_stopTextInput00(lua_State* tolua_S)
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
   Sltk::SDL::stopTextInput();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopTextInput'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::setClipboardText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_setClipboardText00
static int tolua_libSLTK_SDL_Sltk_SDL_setClipboardText00(lua_State* tolua_S)
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::setClipboardText(text);
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

/* function: Sltk::SDL::getClipboardText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getClipboardText00
static int tolua_libSLTK_SDL_Sltk_SDL_getClipboardText00(lua_State* tolua_S)
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
   string tolua_ret = (string)  Sltk::SDL::getClipboardText();
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

/* function: Sltk::SDL::hasClipboardText */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_hasClipboardText00
static int tolua_libSLTK_SDL_Sltk_SDL_hasClipboardText00(lua_State* tolua_S)
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
   bool tolua_ret = (bool)  Sltk::SDL::hasClipboardText();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasClipboardText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::freeImage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_freeImage00
static int tolua_libSLTK_SDL_Sltk_SDL_freeImage00(lua_State* tolua_S)
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
  unsigned long surf = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::SDL::freeImage(surf);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'freeImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::loadImage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_loadImage00
static int tolua_libSLTK_SDL_Sltk_SDL_loadImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const Sltk::SDL::Color",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const void* data = ((const void*)  tolua_touserdata(tolua_S,1,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const Sltk::SDL::Color* colorKey = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,3,nullptr));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::loadImage(data,size,colorKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::createImage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_createImage00
static int tolua_libSLTK_SDL_Sltk_SDL_createImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const void* data = ((const void*)  tolua_touserdata(tolua_S,1,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  bool alpha = ((bool)  tolua_toboolean(tolua_S,4,false));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::createImage(data,w,h,alpha);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::saveImage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_saveImage00
static int tolua_libSLTK_SDL_Sltk_SDL_saveImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,3,Sltk::SDL::SAVE_BMP));
  bool release = ((bool)  tolua_toboolean(tolua_S,4,true));
  {
   bool tolua_ret = (bool)  Sltk::SDL::saveImage(surface,filename,type,release);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saveImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getImageWidth */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getImageWidth00
static int tolua_libSLTK_SDL_Sltk_SDL_getImageWidth00(lua_State* tolua_S)
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
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getImageWidth(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getImageHeight */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getImageHeight00
static int tolua_libSLTK_SDL_Sltk_SDL_getImageHeight00(lua_State* tolua_S)
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
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getImageHeight(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImageHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getImagePitch */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getImagePitch00
static int tolua_libSLTK_SDL_Sltk_SDL_getImagePitch00(lua_State* tolua_S)
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
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getImagePitch(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImagePitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getImagePixels */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getImagePixels00
static int tolua_libSLTK_SDL_Sltk_SDL_getImagePixels00(lua_State* tolua_S)
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
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   void* tolua_ret = (void*)  Sltk::SDL::getImagePixels(surface);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getImagePixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::setRenderTarget */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_setRenderTarget00
static int tolua_libSLTK_SDL_Sltk_SDL_setRenderTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* texture = ((Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,nullptr));
  {
   bool tolua_ret = (bool)  Sltk::SDL::setRenderTarget(texture);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRenderTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::readPixels */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_readPixels00
static int tolua_libSLTK_SDL_Sltk_SDL_readPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
  void* dest = ((void*)  tolua_touserdata(tolua_S,1,0));
  unsigned long x = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long y = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::readPixels(dest,x,y,w,h);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getPixel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getPixel00
static int tolua_libSLTK_SDL_Sltk_SDL_getPixel00(lua_State* tolua_S)
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
  unsigned long x = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long y = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::Color tolua_ret = (Sltk::SDL::Color)  Sltk::SDL::getPixel(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::SDL::Color)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::SDL::Color));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::drawPixel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_drawPixel00
static int tolua_libSLTK_SDL_Sltk_SDL_drawPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long x = ((  long)  tolua_tonumber(tolua_S,1,0));
   long y = ((  long)  tolua_tonumber(tolua_S,2,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::drawPixel(x,y,*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawPixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::drawLine */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_drawLine00
static int tolua_libSLTK_SDL_Sltk_SDL_drawLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long x1 = ((  long)  tolua_tonumber(tolua_S,1,0));
   long y1 = ((  long)  tolua_tonumber(tolua_S,2,0));
   long x2 = ((  long)  tolua_tonumber(tolua_S,3,0));
   long y2 = ((  long)  tolua_tonumber(tolua_S,4,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::drawLine(x1,y1,x2,y2,*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::drawRectangle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_drawRectangle00
static int tolua_libSLTK_SDL_Sltk_SDL_drawRectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long x = ((  long)  tolua_tonumber(tolua_S,1,0));
   long y = ((  long)  tolua_tonumber(tolua_S,2,0));
   long w = ((  long)  tolua_tonumber(tolua_S,3,0));
   long h = ((  long)  tolua_tonumber(tolua_S,4,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::drawRectangle(x,y,w,h,*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawRectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::fillRectangle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_fillRectangle00
static int tolua_libSLTK_SDL_Sltk_SDL_fillRectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long x = ((  long)  tolua_tonumber(tolua_S,1,0));
   long y = ((  long)  tolua_tonumber(tolua_S,2,0));
   long w = ((  long)  tolua_tonumber(tolua_S,3,0));
   long h = ((  long)  tolua_tonumber(tolua_S,4,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::fillRectangle(x,y,w,h,*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fillRectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: keyRepeatTime of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_unsigned_keyRepeatTime
static int tolua_get_Sltk__SDL__Window_unsigned_keyRepeatTime(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'keyRepeatTime'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->keyRepeatTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: keyRepeatTime of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_unsigned_keyRepeatTime
static int tolua_set_Sltk__SDL__Window_unsigned_keyRepeatTime(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'keyRepeatTime'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->keyRepeatTime = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: key of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Window_key
static int tolua_get_libSLTK_SDL_Sltk_SDL_Window_key(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=285)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->key[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: key of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Window_key
static int tolua_set_libSLTK_SDL_Sltk_SDL_Window_key(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=285)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->key[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sendKey of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendKey
static int tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendKey(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=285)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->sendKey[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sendKey of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendKey
static int tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendKey(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=285)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->sendKey[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mouse of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Window_mouse
static int tolua_get_libSLTK_SDL_Sltk_SDL_Window_mouse(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->mouse[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mouse of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Window_mouse
static int tolua_set_libSLTK_SDL_Sltk_SDL_Window_mouse(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->mouse[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sendMouse of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendMouse
static int tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendMouse(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->sendMouse[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sendMouse of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendMouse
static int tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendMouse(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Window* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Window*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->sendMouse[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mouseWheelX of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_unsigned_mouseWheelX
static int tolua_get_Sltk__SDL__Window_unsigned_mouseWheelX(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseWheelX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mouseWheelX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mouseWheelX of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_unsigned_mouseWheelX
static int tolua_set_Sltk__SDL__Window_unsigned_mouseWheelX(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseWheelX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mouseWheelX = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mouseWheelY of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_unsigned_mouseWheelY
static int tolua_get_Sltk__SDL__Window_unsigned_mouseWheelY(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseWheelY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mouseWheelY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mouseWheelY of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_unsigned_mouseWheelY
static int tolua_set_Sltk__SDL__Window_unsigned_mouseWheelY(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseWheelY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mouseWheelY = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mouseX of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_mouseX
static int tolua_get_Sltk__SDL__Window_mouseX(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mouseX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mouseX of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_mouseX
static int tolua_set_Sltk__SDL__Window_mouseX(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mouseX = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mouseY of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_mouseY
static int tolua_get_Sltk__SDL__Window_mouseY(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mouseY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mouseY of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_mouseY
static int tolua_set_Sltk__SDL__Window_mouseY(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mouseY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mouseY = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: activated of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Window_unsigned_activated
static int tolua_get_Sltk__SDL__Window_unsigned_activated(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'activated'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->activated);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: activated of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Window_unsigned_activated
static int tolua_set_Sltk__SDL__Window_unsigned_activated(lua_State* tolua_S)
{
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'activated'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->activated = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Mtolua_new((Sltk::SDL::Window)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
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

/* method: new_local of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Window_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Mtolua_new((Sltk::SDL::Window)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
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

/* method: new of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Window_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Sltk::SDL::Color* bg = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
  {
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Mtolua_new((Sltk::SDL::Window)(*bg));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Window_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Window_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Sltk::SDL::Color* bg = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
  {
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Mtolua_new((Sltk::SDL::Window)(*bg));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Window_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_delete00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_open00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isstring(tolua_S,8,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,"SDL_Window"));
   long x = ((  long)  tolua_tonumber(tolua_S,3,-1));
   long y = ((  long)  tolua_tonumber(tolua_S,4,-1));
   long w = ((  long)  tolua_tonumber(tolua_S,5,640));
   long h = ((  long)  tolua_tonumber(tolua_S,6,480));
  unsigned long flag = (( unsigned long)  tolua_tonumber(tolua_S,7,0));
  const char* rendererName = ((const char*)  tolua_tostring(tolua_S,8,"opengl"));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(title,x,y,w,h,flag,rendererName);
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

/* method: close of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_close00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: beginScene of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_beginScene00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_beginScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beginScene'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->beginScene();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beginScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: endScene of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_endScene00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_endScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'endScene'", NULL);
#endif
  {
   self->endScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: acquireKeyStates of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_acquireKeyStates00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_acquireKeyStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquireKeyStates'", NULL);
#endif
  {
   self->acquireKeyStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireKeyStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearKeyStates of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_clearKeyStates00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_clearKeyStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearKeyStates'", NULL);
#endif
  {
   self->clearKeyStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearKeyStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: acquireMouseStates of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_acquireMouseStates00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_acquireMouseStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquireMouseStates'", NULL);
#endif
  {
   self->acquireMouseStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireMouseStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearMouseStates of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_clearMouseStates00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_clearMouseStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearMouseStates'", NULL);
#endif
  {
   self->clearMouseStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearMouseStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: warpMouse of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_warpMouse00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_warpMouse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
   long x = ((  long)  tolua_tonumber(tolua_S,2,0));
   long y = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'warpMouse'", NULL);
#endif
  {
   self->warpMouse(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'warpMouse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundColor of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getBackgroundColor00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundColor'", NULL);
#endif
  {
   Sltk::SDL::Color tolua_ret = (Sltk::SDL::Color)  self->getBackgroundColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Sltk::SDL::Color)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Sltk::SDL::Color));
     tolua_pushusertype(tolua_S,tolua_obj,"Sltk::SDL::Color");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getWidth00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getHeight00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getX of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getX00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getX'", NULL);
#endif
  {
    long tolua_ret = (  long)  self->getX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getY of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getY00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getY'", NULL);
#endif
  {
    long tolua_ret = (  long)  self->getY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getID of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getID00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getID'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getID();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: setBackgroundColor of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setBackgroundColor00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  const Sltk::SDL::Color* bg = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColor'", NULL);
#endif
  {
   self->setBackgroundColor(*bg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitle of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setTitle00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setTitle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitle'", NULL);
#endif
  {
   self->setTitle(title);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSize of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setSize00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'", NULL);
#endif
  {
   self->setSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setPosition00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
   long x = ((  long)  tolua_tonumber(tolua_S,2,0));
   long y = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWindowMode of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setWindowMode00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setWindowMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWindowMode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setWindowMode(flag);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWindowMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIcon of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_setIcon00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_setIcon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Window* self = (Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned long surf = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool release = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIcon'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setIcon(surf,release);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIcon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHandle of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getHandle00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getRenderer of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getRenderer00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRenderer'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getRenderer();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContext of class  Sltk::SDL::Window */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Window_getContext00
static int tolua_libSLTK_SDL_Sltk_SDL_Window_getContext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Window* self = (const Sltk::SDL::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContext'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getContext();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getWindowFromID */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getWindowFromID00
static int tolua_libSLTK_SDL_Sltk_SDL_getWindowFromID00(lua_State* tolua_S)
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
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Sltk::SDL::getWindowFromID(id);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowFromID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getWindowsCount */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getWindowsCount00
static int tolua_libSLTK_SDL_Sltk_SDL_getWindowsCount00(lua_State* tolua_S)
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
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getWindowsCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowsCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getDrawingWindow */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getDrawingWindow00
static int tolua_libSLTK_SDL_Sltk_SDL_getDrawingWindow00(lua_State* tolua_S)
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
   Sltk::SDL::Window* tolua_ret = (Sltk::SDL::Window*)  Sltk::SDL::getDrawingWindow();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Window");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDrawingWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getDrawingRenderer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getDrawingRenderer00
static int tolua_libSLTK_SDL_Sltk_SDL_getDrawingRenderer00(lua_State* tolua_S)
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
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getDrawingRenderer();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDrawingRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long FPS = ((  long)  tolua_tonumber(tolua_S,2,60));
  {
   Sltk::SDL::FPSManager* tolua_ret = (Sltk::SDL::FPSManager*)  Mtolua_new((Sltk::SDL::FPSManager)(FPS));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::FPSManager");
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

/* method: new_local of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long FPS = ((  long)  tolua_tonumber(tolua_S,2,60));
  {
   Sltk::SDL::FPSManager* tolua_ret = (Sltk::SDL::FPSManager*)  Mtolua_new((Sltk::SDL::FPSManager)(FPS));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::FPSManager");
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

/* method: setFPS of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_setFPS00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_setFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::FPSManager* self = (Sltk::SDL::FPSManager*)  tolua_tousertype(tolua_S,1,0);
   long FPS = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFPS'", NULL);
#endif
  {
   self->setFPS(FPS);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_start00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_start00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::FPSManager* self = (Sltk::SDL::FPSManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start'", NULL);
#endif
  {
   self->start();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: beginScene of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_beginScene00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_beginScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::FPSManager* self = (Sltk::SDL::FPSManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beginScene'", NULL);
#endif
  {
   self->beginScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beginScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: endScene of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_endScene00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_endScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::FPSManager* self = (Sltk::SDL::FPSManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'endScene'", NULL);
#endif
  {
   self->endScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFPS of class  Sltk::SDL::FPSManager */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_FPSManager_getFPS00
static int tolua_libSLTK_SDL_Sltk_SDL_FPSManager_getFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::FPSManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::FPSManager* self = (const Sltk::SDL::FPSManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFPS'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getFPS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xAxis of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Joystick_xAxis
static int tolua_get_Sltk__SDL__Joystick_xAxis(lua_State* tolua_S)
{
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xAxis'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xAxis);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xAxis of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Joystick_xAxis
static int tolua_set_Sltk__SDL__Joystick_xAxis(lua_State* tolua_S)
{
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xAxis'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xAxis = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yAxis of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Joystick_yAxis
static int tolua_get_Sltk__SDL__Joystick_yAxis(lua_State* tolua_S)
{
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yAxis'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yAxis);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yAxis of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Joystick_yAxis
static int tolua_set_Sltk__SDL__Joystick_yAxis(lua_State* tolua_S)
{
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yAxis'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yAxis = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: buttons of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_buttons
static int tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_buttons(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Joystick* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Joystick*)  lua_touserdata(tolua_S,-1);
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
 tolua_pushnumber(tolua_S,(lua_Number)self->buttons[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: buttons of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_buttons
static int tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_buttons(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Joystick* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Joystick*)  lua_touserdata(tolua_S,-1);
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
  self->buttons[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crossButtons of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons
static int tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Joystick* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Joystick*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->crossButtons[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crossButtons of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons
static int tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons(lua_State* tolua_S)
{
 int tolua_index;
  Sltk::SDL::Joystick* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (Sltk::SDL::Joystick*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->crossButtons[tolua_index] = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Joystick* tolua_ret = (Sltk::SDL::Joystick*)  Mtolua_new((Sltk::SDL::Joystick)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Joystick");
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

/* method: new_local of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Joystick* tolua_ret = (Sltk::SDL::Joystick*)  Mtolua_new((Sltk::SDL::Joystick)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Joystick");
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

/* method: new of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::Joystick* tolua_ret = (Sltk::SDL::Joystick*)  Mtolua_new((Sltk::SDL::Joystick)(index));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Joystick");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::Joystick* tolua_ret = (Sltk::SDL::Joystick*)  Mtolua_new((Sltk::SDL::Joystick)(index));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Joystick");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_delete00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_open00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(index);
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

/* method: close of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_close00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: acquireInputStates of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_acquireInputStates00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_acquireInputStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Joystick* self = (Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquireInputStates'", NULL);
#endif
  {
   self->acquireInputStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquireInputStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_getName00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Joystick* self = (const Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAxisCount of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_getAxisCount00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_getAxisCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Joystick* self = (const Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAxisCount'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getAxisCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAxisCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getButtonCount of class  Sltk::SDL::Joystick */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Joystick_getButtonCount00
static int tolua_libSLTK_SDL_Sltk_SDL_Joystick_getButtonCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Joystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Joystick* self = (const Sltk::SDL::Joystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getButtonCount'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getButtonCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getButtonCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getJoystickCount */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getJoystickCount00
static int tolua_libSLTK_SDL_Sltk_SDL_getJoystickCount00(lua_State* tolua_S)
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
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getJoystickCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getJoystickCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Mixer* tolua_ret = (Sltk::SDL::Mixer*)  Mtolua_new((Sltk::SDL::Mixer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Mixer");
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

/* method: new_local of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Mixer* tolua_ret = (Sltk::SDL::Mixer*)  Mtolua_new((Sltk::SDL::Mixer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Mixer");
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

/* method: new of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const void* buf = ((const void*)  tolua_touserdata(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::SDL::Mixer* tolua_ret = (Sltk::SDL::Mixer*)  Mtolua_new((Sltk::SDL::Mixer)(buf,size));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Mixer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const void* buf = ((const void*)  tolua_touserdata(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::SDL::Mixer* tolua_ret = (Sltk::SDL::Mixer*)  Mtolua_new((Sltk::SDL::Mixer)(buf,size));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Mixer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_delete00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_open00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
  const void* buf = ((const void*)  tolua_touserdata(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(buf,size);
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

/* method: close of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_close00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: play of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_play00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
   long channel = ((  long)  tolua_tonumber(tolua_S,2,0));
   long loops = ((  long)  tolua_tonumber(tolua_S,3,0));
   long ticks = ((  long)  tolua_tonumber(tolua_S,4,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->play(channel,loops,ticks);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fadeIn of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_fadeIn00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_fadeIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
   long channel = ((  long)  tolua_tonumber(tolua_S,2,0));
   long loops = ((  long)  tolua_tonumber(tolua_S,3,0));
  unsigned long ms = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
   long ticks = ((  long)  tolua_tonumber(tolua_S,5,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fadeIn'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->fadeIn(channel,loops,ms,ticks);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fadeIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVolume of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_setVolume00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_setVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Mixer* self = (Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
  unsigned long vol = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVolume'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->setVolume(vol);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVolume of class  Sltk::SDL::Mixer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Mixer_getVolume00
static int tolua_libSLTK_SDL_Sltk_SDL_Mixer_getVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Mixer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Mixer* self = (const Sltk::SDL::Mixer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVolume'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::allocateChannels */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_allocateChannels00
static int tolua_libSLTK_SDL_Sltk_SDL_allocateChannels00(lua_State* tolua_S)
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
  unsigned long num = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::allocateChannels(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'allocateChannels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::setChannelVolume */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_setChannelVolume00
static int tolua_libSLTK_SDL_Sltk_SDL_setChannelVolume00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  unsigned long vol = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::setChannelVolume(channel,vol);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChannelVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::getChannelVolume */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_getChannelVolume00
static int tolua_libSLTK_SDL_Sltk_SDL_getChannelVolume00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::SDL::getChannelVolume(channel);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChannelVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::stopChannel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_stopChannel00
static int tolua_libSLTK_SDL_Sltk_SDL_stopChannel00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::SDL::stopChannel(channel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::fadeOutChannel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_fadeOutChannel00
static int tolua_libSLTK_SDL_Sltk_SDL_fadeOutChannel00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  unsigned long ms = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::fadeOutChannel(channel,ms);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fadeOutChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::pauseChannel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_pauseChannel00
static int tolua_libSLTK_SDL_Sltk_SDL_pauseChannel00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::SDL::pauseChannel(channel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::resumeChannel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_resumeChannel00
static int tolua_libSLTK_SDL_Sltk_SDL_resumeChannel00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::SDL::resumeChannel(channel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::expireChannel */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_expireChannel00
static int tolua_libSLTK_SDL_Sltk_SDL_expireChannel00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  unsigned long ms = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::expireChannel(channel,ms);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expireChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::isChannelPlaying */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_isChannelPlaying00
static int tolua_libSLTK_SDL_Sltk_SDL_isChannelPlaying00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::isChannelPlaying(channel);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChannelPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::isChannelPaused */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_isChannelPaused00
static int tolua_libSLTK_SDL_Sltk_SDL_isChannelPaused00(lua_State* tolua_S)
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
   long channel = ((  long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::SDL::isChannelPaused(channel);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChannelPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Font* tolua_ret = (Sltk::SDL::Font*)  Mtolua_new((Sltk::SDL::Font)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Font");
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

/* method: new_local of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Font_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Font* tolua_ret = (Sltk::SDL::Font*)  Mtolua_new((Sltk::SDL::Font)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Font");
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

/* method: new of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Font_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* fontname = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::SDL::Font* tolua_ret = (Sltk::SDL::Font*)  Mtolua_new((Sltk::SDL::Font)(fontname,size));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Font");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Font_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Font_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* fontname = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::SDL::Font* tolua_ret = (Sltk::SDL::Font*)  Mtolua_new((Sltk::SDL::Font)(fontname,size));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Font");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Font_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_delete00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Font* self = (Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_open00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Font* self = (Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
  const char* fontname = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(fontname,size);
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

/* method: close of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_close00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Font* self = (Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setStyle of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_setStyle00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_setStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Font* self = (Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned char style = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStyle'", NULL);
#endif
  {
   self->setStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSurface of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_createSurface00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_createSurface00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Font* self = (Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createSurface'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->createSurface(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSurface'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_getWidth00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Font* self = (const Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getWidth(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  Sltk::SDL::Font */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Font_getHeight00
static int tolua_libSLTK_SDL_Sltk_SDL_Font_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Font* self = (const Sltk::SDL::Font*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: centerX of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Texture_centerX
static int tolua_get_Sltk__SDL__Texture_centerX(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'centerX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->centerX);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: centerX of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Texture_centerX
static int tolua_set_Sltk__SDL__Texture_centerX(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'centerX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->centerX = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: centerY of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Texture_centerY
static int tolua_get_Sltk__SDL__Texture_centerY(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'centerY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->centerY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: centerY of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Texture_centerY
static int tolua_set_Sltk__SDL__Texture_centerY(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'centerY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->centerY = ((  long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: angle of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Texture_angle
static int tolua_get_Sltk__SDL__Texture_angle(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->angle);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: angle of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Texture_angle
static int tolua_set_Sltk__SDL__Texture_angle(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->angle = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: flipMode of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__SDL__Texture_unsigned_flipMode
static int tolua_get_Sltk__SDL__Texture_unsigned_flipMode(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'flipMode'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->flipMode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: flipMode of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__SDL__Texture_unsigned_flipMode
static int tolua_set_Sltk__SDL__Texture_unsigned_flipMode(lua_State* tolua_S)
{
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'flipMode'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->flipMode = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
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

/* method: new_local of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new00_local
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
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

/* method: new of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new01
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,4,Sltk::SDL::TEXTURE_STREAMING));
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)(w,h,type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new01_local
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,4,Sltk::SDL::TEXTURE_STREAMING));
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)(w,h,type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new02
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool release = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)(surface,release));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_new02_local
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool release = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
   Sltk::SDL::Texture* tolua_ret = (Sltk::SDL::Texture*)  Mtolua_new((Sltk::SDL::Texture)(surface,release));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::SDL::Texture");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_delete00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_open00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  unsigned long w = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long h = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,4,Sltk::SDL::TEXTURE_STREAMING));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(w,h,type);
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

/* method: open of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_open01
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_open01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  unsigned long surface = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  bool release = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(surface,release);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_open00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_close00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setBlendMode of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_setBlendMode00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_setBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  unsigned char mode = (( unsigned char)  tolua_tonumber(tolua_S,2,Sltk::SDL::BLEND_ALPHA));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendMode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setBlendMode(mode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  unsigned char r = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char g = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char b = (( unsigned char)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setColor(r,g,b);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor01
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setColor(*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_setAlpha00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
  unsigned char a = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setAlpha(a);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFormat of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_getFormat00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_getFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Texture* self = (const Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFormat'", NULL);
#endif
  {
   unsigned char tolua_ret = ( unsigned char)  self->getFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPixels of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_getPixels00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_getPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixels'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->getPixels();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updatePixels of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_updatePixels00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_updatePixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updatePixels'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->updatePixels();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updatePixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_draw00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::SDL::Texture* self = (Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
   long x = ((  long)  tolua_tonumber(tolua_S,2,0));
   long y = ((  long)  tolua_tonumber(tolua_S,3,0));
   long w = ((  long)  tolua_tonumber(tolua_S,4,-1));
   long h = ((  long)  tolua_tonumber(tolua_S,5,-1));
   long sx = ((  long)  tolua_tonumber(tolua_S,6,0));
   long sy = ((  long)  tolua_tonumber(tolua_S,7,0));
   long sw = ((  long)  tolua_tonumber(tolua_S,8,-1));
   long sh = ((  long)  tolua_tonumber(tolua_S,9,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->draw(x,y,w,h,sx,sy,sw,sh);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHandle of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_getHandle00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_getHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Texture* self = (const Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getWidth of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_getWidth00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Texture* self = (const Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  Sltk::SDL::Texture */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_Texture_getHeight00
static int tolua_libSLTK_SDL_Sltk_SDL_Texture_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::SDL::Texture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::SDL::Texture* self = (const Sltk::SDL::Texture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::set2DView */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_set2DView00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_set2DView00(lua_State* tolua_S)
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
  unsigned long width = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long height = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::SDL::GL::set2DView(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set2DView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::set3DView */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_set3DView00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_set3DView00(lua_State* tolua_S)
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
   Sltk::SDL::GL::set3DView();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set3DView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::drawPrimitive */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_drawPrimitive00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_drawPrimitive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_istable(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char type = (( unsigned char)  tolua_tonumber(tolua_S,1,0));
   long num = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifdef __cplusplus
  float* vertices = Mtolua_new_dim(float, num);
#else
  float* vertices = (float*) malloc((num)*sizeof(float));
#endif
#ifdef __cplusplus
   long* colors = Mtolua_new_dim(long, num);
#else
   long* colors = (long*) malloc((num)*sizeof(long));
#endif
   long first = ((  long)  tolua_tonumber(tolua_S,5,0));
   long count = ((  long)  tolua_tonumber(tolua_S,6,-1));
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,3,num,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<num;i++)
    vertices[i] = ((float)  tolua_tofieldnumber(tolua_S,3,i+1,0));
   }
  }
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,4,num,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<num;i++)
    colors[i] = ((long)  tolua_tofieldnumber(tolua_S,4,i+1,0));
   }
  }
  {
   Sltk::SDL::GL::drawPrimitive(type,num,vertices,colors,first,count);
  }
  {
   int i;
   for(i=0; i<num;i++)
    tolua_pushfieldnumber(tolua_S,3,i+1,(lua_Number) vertices[i]);
  }
  {
   int i;
   for(i=0; i<num;i++)
    tolua_pushfieldnumber(tolua_S,4,i+1,(lua_Number) colors[i]);
  }
#ifdef __cplusplus
  Mtolua_delete_dim(vertices);
#else
  free(vertices);
#endif
#ifdef __cplusplus
  Mtolua_delete_dim(colors);
#else
  free(colors);
#endif
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawPrimitive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::drawTriangle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_drawTriangle00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_drawTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x1 = ((float)  tolua_tonumber(tolua_S,1,0));
  float y1 = ((float)  tolua_tonumber(tolua_S,2,0));
  float x2 = ((float)  tolua_tonumber(tolua_S,3,0));
  float y2 = ((float)  tolua_tonumber(tolua_S,4,0));
  float x3 = ((float)  tolua_tonumber(tolua_S,5,0));
  float y3 = ((float)  tolua_tonumber(tolua_S,6,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,7,0));
  {
   Sltk::SDL::GL::drawTriangle(x1,y1,x2,y2,x3,y3,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::fillTriangle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_fillTriangle00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_fillTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x1 = ((float)  tolua_tonumber(tolua_S,1,0));
  float y1 = ((float)  tolua_tonumber(tolua_S,2,0));
  float x2 = ((float)  tolua_tonumber(tolua_S,3,0));
  float y2 = ((float)  tolua_tonumber(tolua_S,4,0));
  float x3 = ((float)  tolua_tonumber(tolua_S,5,0));
  float y3 = ((float)  tolua_tonumber(tolua_S,6,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,7,0));
  {
   Sltk::SDL::GL::fillTriangle(x1,y1,x2,y2,x3,y3,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fillTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::drawCircle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_drawCircle00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_drawCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,4,0));
  {
   Sltk::SDL::GL::drawCircle(x,y,radius,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::fillCircle */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_fillCircle00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_fillCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,4,0));
  {
   Sltk::SDL::GL::fillCircle(x,y,radius,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fillCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::drawOval */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_drawOval00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_drawOval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float radius_x = ((float)  tolua_tonumber(tolua_S,3,0));
  float radius_y = ((float)  tolua_tonumber(tolua_S,4,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,5,0));
  {
   Sltk::SDL::GL::drawOval(x,y,radius_x,radius_y,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawOval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::SDL::GL::fillOval */
#ifndef TOLUA_DISABLE_tolua_libSLTK_SDL_Sltk_SDL_GL_fillOval00
static int tolua_libSLTK_SDL_Sltk_SDL_GL_fillOval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Sltk::SDL::Color",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float radius_x = ((float)  tolua_tonumber(tolua_S,3,0));
  float radius_y = ((float)  tolua_tonumber(tolua_S,4,0));
  const Sltk::SDL::Color* color = ((const Sltk::SDL::Color*)  tolua_tousertype(tolua_S,5,0));
  {
   Sltk::SDL::GL::fillOval(x,y,radius_x,radius_y,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fillOval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libSLTK_SDL_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"TEXTEDITINGEVENT_TEXT_SIZE",TEXTEDITINGEVENT_TEXT_SIZE);
  tolua_constant(tolua_S,"TEXTINPUTEVENT_TEXT_SIZE",TEXTINPUTEVENT_TEXT_SIZE);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"SDL",0);
   tolua_beginmodule(tolua_S,"SDL");
    tolua_constant(tolua_S,"FIRSTEVENT",Sltk::SDL::FIRSTEVENT);
    tolua_constant(tolua_S,"QUIT",Sltk::SDL::QUIT);
    tolua_constant(tolua_S,"APP_TERMINATING",Sltk::SDL::APP_TERMINATING);
    tolua_constant(tolua_S,"APP_LOWMEMORY",Sltk::SDL::APP_LOWMEMORY);
    tolua_constant(tolua_S,"APP_WILLENTERBACKGROUND",Sltk::SDL::APP_WILLENTERBACKGROUND);
    tolua_constant(tolua_S,"APP_DIDENTERBACKGROUND",Sltk::SDL::APP_DIDENTERBACKGROUND);
    tolua_constant(tolua_S,"APP_WILLENTERFOREGROUND",Sltk::SDL::APP_WILLENTERFOREGROUND);
    tolua_constant(tolua_S,"APP_DIDENTERFOREGROUND",Sltk::SDL::APP_DIDENTERFOREGROUND);
    tolua_constant(tolua_S,"WINDOWEVENT",Sltk::SDL::WINDOWEVENT);
    tolua_constant(tolua_S,"SYSWMEVENT",Sltk::SDL::SYSWMEVENT);
    tolua_constant(tolua_S,"KEYDOWN",Sltk::SDL::KEYDOWN);
    tolua_constant(tolua_S,"KEYUP",Sltk::SDL::KEYUP);
    tolua_constant(tolua_S,"TEXTEDITING",Sltk::SDL::TEXTEDITING);
    tolua_constant(tolua_S,"TEXTINPUT",Sltk::SDL::TEXTINPUT);
    tolua_constant(tolua_S,"MOUSEMOTION",Sltk::SDL::MOUSEMOTION);
    tolua_constant(tolua_S,"MOUSEBUTTONDOWN",Sltk::SDL::MOUSEBUTTONDOWN);
    tolua_constant(tolua_S,"MOUSEBUTTONUP",Sltk::SDL::MOUSEBUTTONUP);
    tolua_constant(tolua_S,"MOUSEWHEEL",Sltk::SDL::MOUSEWHEEL);
    tolua_constant(tolua_S,"JOYAXISMOTION",Sltk::SDL::JOYAXISMOTION);
    tolua_constant(tolua_S,"JOYBALLMOTION",Sltk::SDL::JOYBALLMOTION);
    tolua_constant(tolua_S,"JOYHATMOTION",Sltk::SDL::JOYHATMOTION);
    tolua_constant(tolua_S,"JOYBUTTONDOWN",Sltk::SDL::JOYBUTTONDOWN);
    tolua_constant(tolua_S,"JOYBUTTONUP",Sltk::SDL::JOYBUTTONUP);
    tolua_constant(tolua_S,"JOYDEVICEADDED",Sltk::SDL::JOYDEVICEADDED);
    tolua_constant(tolua_S,"JOYDEVICEREMOVED",Sltk::SDL::JOYDEVICEREMOVED);
    tolua_constant(tolua_S,"CONTROLLERAXISMOTION",Sltk::SDL::CONTROLLERAXISMOTION);
    tolua_constant(tolua_S,"CONTROLLERBUTTONDOWN",Sltk::SDL::CONTROLLERBUTTONDOWN);
    tolua_constant(tolua_S,"CONTROLLERBUTTONUP",Sltk::SDL::CONTROLLERBUTTONUP);
    tolua_constant(tolua_S,"CONTROLLERDEVICEADDED",Sltk::SDL::CONTROLLERDEVICEADDED);
    tolua_constant(tolua_S,"CONTROLLERDEVICEREMOVED",Sltk::SDL::CONTROLLERDEVICEREMOVED);
    tolua_constant(tolua_S,"CONTROLLERDEVICEREMAPPED",Sltk::SDL::CONTROLLERDEVICEREMAPPED);
    tolua_constant(tolua_S,"FINGERDOWN",Sltk::SDL::FINGERDOWN);
    tolua_constant(tolua_S,"FINGERUP",Sltk::SDL::FINGERUP);
    tolua_constant(tolua_S,"FINGERMOTION",Sltk::SDL::FINGERMOTION);
    tolua_constant(tolua_S,"DOLLARGESTURE",Sltk::SDL::DOLLARGESTURE);
    tolua_constant(tolua_S,"DOLLARRECORD",Sltk::SDL::DOLLARRECORD);
    tolua_constant(tolua_S,"MULTIGESTURE",Sltk::SDL::MULTIGESTURE);
    tolua_constant(tolua_S,"CLIPBOARDUPDATE",Sltk::SDL::CLIPBOARDUPDATE);
    tolua_constant(tolua_S,"DROPFILE",Sltk::SDL::DROPFILE);
    tolua_constant(tolua_S,"USEREVENT",Sltk::SDL::USEREVENT);
    tolua_constant(tolua_S,"LASTEVENT",Sltk::SDL::LASTEVENT);
    tolua_constant(tolua_S,"WINDOWEVENT_NONE",Sltk::SDL::WINDOWEVENT_NONE);
    tolua_constant(tolua_S,"WINDOWEVENT_SHOWN",Sltk::SDL::WINDOWEVENT_SHOWN);
    tolua_constant(tolua_S,"WINDOWEVENT_HIDDEN",Sltk::SDL::WINDOWEVENT_HIDDEN);
    tolua_constant(tolua_S,"WINDOWEVENT_EXPOSED",Sltk::SDL::WINDOWEVENT_EXPOSED);
    tolua_constant(tolua_S,"WINDOWEVENT_MOVED",Sltk::SDL::WINDOWEVENT_MOVED);
    tolua_constant(tolua_S,"WINDOWEVENT_RESIZED",Sltk::SDL::WINDOWEVENT_RESIZED);
    tolua_constant(tolua_S,"WINDOWEVENT_SIZE_CHANGED",Sltk::SDL::WINDOWEVENT_SIZE_CHANGED);
    tolua_constant(tolua_S,"WINDOWEVENT_MINIMIZED",Sltk::SDL::WINDOWEVENT_MINIMIZED);
    tolua_constant(tolua_S,"WINDOWEVENT_MAXIMIZED",Sltk::SDL::WINDOWEVENT_MAXIMIZED);
    tolua_constant(tolua_S,"WINDOWEVENT_RESTORED",Sltk::SDL::WINDOWEVENT_RESTORED);
    tolua_constant(tolua_S,"WINDOWEVENT_ENTER",Sltk::SDL::WINDOWEVENT_ENTER);
    tolua_constant(tolua_S,"WINDOWEVENT_LEAVE",Sltk::SDL::WINDOWEVENT_LEAVE);
    tolua_constant(tolua_S,"WINDOWEVENT_FOCUS_GAINED",Sltk::SDL::WINDOWEVENT_FOCUS_GAINED);
    tolua_constant(tolua_S,"WINDOWEVENT_FOCUS_LOST",Sltk::SDL::WINDOWEVENT_FOCUS_LOST);
    tolua_constant(tolua_S,"WINDOWEVENT_CLOSE",Sltk::SDL::WINDOWEVENT_CLOSE);
    tolua_cclass(tolua_S,"CommonEvent","Sltk::SDL::CommonEvent","",NULL);
    tolua_beginmodule(tolua_S,"CommonEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__CommonEvent_unsigned_type,tolua_set_Sltk__SDL__CommonEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__CommonEvent_unsigned_timestamp,tolua_set_Sltk__SDL__CommonEvent_unsigned_timestamp);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"WindowEvent","Sltk::SDL::WindowEvent","",NULL);
    tolua_beginmodule(tolua_S,"WindowEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__WindowEvent_unsigned_type,tolua_set_Sltk__SDL__WindowEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__WindowEvent_unsigned_timestamp,tolua_set_Sltk__SDL__WindowEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__WindowEvent_unsigned_windowID,tolua_set_Sltk__SDL__WindowEvent_unsigned_windowID);
     tolua_variable(tolua_S,"event",tolua_get_Sltk__SDL__WindowEvent_unsigned_event,tolua_set_Sltk__SDL__WindowEvent_unsigned_event);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__WindowEvent_unsigned_padding1,tolua_set_Sltk__SDL__WindowEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__WindowEvent_unsigned_padding2,tolua_set_Sltk__SDL__WindowEvent_unsigned_padding2);
     tolua_variable(tolua_S,"padding3",tolua_get_Sltk__SDL__WindowEvent_unsigned_padding3,tolua_set_Sltk__SDL__WindowEvent_unsigned_padding3);
     tolua_variable(tolua_S,"data1",tolua_get_Sltk__SDL__WindowEvent_data1,tolua_set_Sltk__SDL__WindowEvent_data1);
     tolua_variable(tolua_S,"data2",tolua_get_Sltk__SDL__WindowEvent_data2,tolua_set_Sltk__SDL__WindowEvent_data2);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"Keysym","Sltk::SDL::Keysym","",NULL);
    tolua_beginmodule(tolua_S,"Keysym");
     tolua_variable(tolua_S,"scancode",tolua_get_Sltk__SDL__Keysym_scancode,tolua_set_Sltk__SDL__Keysym_scancode);
     tolua_variable(tolua_S,"sym",tolua_get_Sltk__SDL__Keysym_sym,tolua_set_Sltk__SDL__Keysym_sym);
     tolua_variable(tolua_S,"mod",tolua_get_Sltk__SDL__Keysym_unsigned_mod,tolua_set_Sltk__SDL__Keysym_unsigned_mod);
     tolua_variable(tolua_S,"unused",tolua_get_Sltk__SDL__Keysym_unsigned_unused,tolua_set_Sltk__SDL__Keysym_unsigned_unused);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"KeyboardEvent","Sltk::SDL::KeyboardEvent","",NULL);
    tolua_beginmodule(tolua_S,"KeyboardEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_type,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_timestamp,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_windowID,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_windowID);
     tolua_variable(tolua_S,"state",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_state,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_state);
     tolua_variable(tolua_S,"repeat",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_repeat,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_repeat);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding2,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding2);
     tolua_variable(tolua_S,"padding3",tolua_get_Sltk__SDL__KeyboardEvent_unsigned_padding3,tolua_set_Sltk__SDL__KeyboardEvent_unsigned_padding3);
     tolua_variable(tolua_S,"keysym",tolua_get_Sltk__SDL__KeyboardEvent_keysym,tolua_set_Sltk__SDL__KeyboardEvent_keysym);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"TextEditingEvent","Sltk::SDL::TextEditingEvent","",NULL);
    tolua_beginmodule(tolua_S,"TextEditingEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__TextEditingEvent_unsigned_type,tolua_set_Sltk__SDL__TextEditingEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__TextEditingEvent_unsigned_timestamp,tolua_set_Sltk__SDL__TextEditingEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__TextEditingEvent_unsigned_windowID,tolua_set_Sltk__SDL__TextEditingEvent_unsigned_windowID);
     tolua_variable(tolua_S,"text",tolua_get_Sltk__SDL__TextEditingEvent_text,tolua_set_Sltk__SDL__TextEditingEvent_text);
     tolua_variable(tolua_S,"start",tolua_get_Sltk__SDL__TextEditingEvent_start,tolua_set_Sltk__SDL__TextEditingEvent_start);
     tolua_variable(tolua_S,"length",tolua_get_Sltk__SDL__TextEditingEvent_length,tolua_set_Sltk__SDL__TextEditingEvent_length);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"TextInputEvent","Sltk::SDL::TextInputEvent","",NULL);
    tolua_beginmodule(tolua_S,"TextInputEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__TextInputEvent_unsigned_type,tolua_set_Sltk__SDL__TextInputEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__TextInputEvent_unsigned_timestamp,tolua_set_Sltk__SDL__TextInputEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__TextInputEvent_unsigned_windowID,tolua_set_Sltk__SDL__TextInputEvent_unsigned_windowID);
     tolua_variable(tolua_S,"text",tolua_get_Sltk__SDL__TextInputEvent_text,tolua_set_Sltk__SDL__TextInputEvent_text);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseMotionEvent","Sltk::SDL::MouseMotionEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseMotionEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_type,tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_timestamp,tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_windowID,tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_windowID);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_which,tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_which);
     tolua_variable(tolua_S,"state",tolua_get_Sltk__SDL__MouseMotionEvent_unsigned_state,tolua_set_Sltk__SDL__MouseMotionEvent_unsigned_state);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__MouseMotionEvent_x,tolua_set_Sltk__SDL__MouseMotionEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__MouseMotionEvent_y,tolua_set_Sltk__SDL__MouseMotionEvent_y);
     tolua_variable(tolua_S,"xrel",tolua_get_Sltk__SDL__MouseMotionEvent_xrel,tolua_set_Sltk__SDL__MouseMotionEvent_xrel);
     tolua_variable(tolua_S,"yrel",tolua_get_Sltk__SDL__MouseMotionEvent_yrel,tolua_set_Sltk__SDL__MouseMotionEvent_yrel);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseButtonEvent","Sltk::SDL::MouseButtonEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseButtonEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_type,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_timestamp,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_windowID,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_windowID);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_which,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_which);
     tolua_variable(tolua_S,"button",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_button,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_button);
     tolua_variable(tolua_S,"state",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_state,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_state);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding1,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__MouseButtonEvent_unsigned_padding2,tolua_set_Sltk__SDL__MouseButtonEvent_unsigned_padding2);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__MouseButtonEvent_x,tolua_set_Sltk__SDL__MouseButtonEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__MouseButtonEvent_y,tolua_set_Sltk__SDL__MouseButtonEvent_y);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseWheelEvent","Sltk::SDL::MouseWheelEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseWheelEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_type,tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_timestamp,tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_windowID,tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_windowID);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__MouseWheelEvent_unsigned_which,tolua_set_Sltk__SDL__MouseWheelEvent_unsigned_which);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__MouseWheelEvent_x,tolua_set_Sltk__SDL__MouseWheelEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__MouseWheelEvent_y,tolua_set_Sltk__SDL__MouseWheelEvent_y);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyAxisEvent","Sltk::SDL::JoyAxisEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyAxisEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_type,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_timestamp,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__JoyAxisEvent_which,tolua_set_Sltk__SDL__JoyAxisEvent_which);
     tolua_variable(tolua_S,"axis",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_axis,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_axis);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding1,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding2,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding2);
     tolua_variable(tolua_S,"padding3",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding3,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding3);
     tolua_variable(tolua_S,"value",tolua_get_Sltk__SDL__JoyAxisEvent_value,tolua_set_Sltk__SDL__JoyAxisEvent_value);
     tolua_variable(tolua_S,"padding4",tolua_get_Sltk__SDL__JoyAxisEvent_unsigned_padding4,tolua_set_Sltk__SDL__JoyAxisEvent_unsigned_padding4);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyBallEvent","Sltk::SDL::JoyBallEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyBallEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_type,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_timestamp,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__JoyBallEvent_which,tolua_set_Sltk__SDL__JoyBallEvent_which);
     tolua_variable(tolua_S,"ball",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_ball,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_ball);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding1,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding2,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding2);
     tolua_variable(tolua_S,"padding3",tolua_get_Sltk__SDL__JoyBallEvent_unsigned_padding3,tolua_set_Sltk__SDL__JoyBallEvent_unsigned_padding3);
     tolua_variable(tolua_S,"xrel",tolua_get_Sltk__SDL__JoyBallEvent_xrel,tolua_set_Sltk__SDL__JoyBallEvent_xrel);
     tolua_variable(tolua_S,"yrel",tolua_get_Sltk__SDL__JoyBallEvent_yrel,tolua_set_Sltk__SDL__JoyBallEvent_yrel);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyHatEvent","Sltk::SDL::JoyHatEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyHatEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_type,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_timestamp,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__JoyHatEvent_which,tolua_set_Sltk__SDL__JoyHatEvent_which);
     tolua_variable(tolua_S,"hat",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_hat,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_hat);
     tolua_variable(tolua_S,"value",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_value,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_value);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding1,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__JoyHatEvent_unsigned_padding2,tolua_set_Sltk__SDL__JoyHatEvent_unsigned_padding2);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyButtonEvent","Sltk::SDL::JoyButtonEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyButtonEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_type,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_timestamp,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__JoyButtonEvent_which,tolua_set_Sltk__SDL__JoyButtonEvent_which);
     tolua_variable(tolua_S,"button",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_button,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_button);
     tolua_variable(tolua_S,"state",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_state,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_state);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding1,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__JoyButtonEvent_unsigned_padding2,tolua_set_Sltk__SDL__JoyButtonEvent_unsigned_padding2);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyDeviceEvent","Sltk::SDL::JoyDeviceEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyDeviceEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_type,tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp,tolua_set_Sltk__SDL__JoyDeviceEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__JoyDeviceEvent_which,tolua_set_Sltk__SDL__JoyDeviceEvent_which);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ControllerAxisEvent","Sltk::SDL::ControllerAxisEvent","",NULL);
    tolua_beginmodule(tolua_S,"ControllerAxisEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_type,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__ControllerAxisEvent_which,tolua_set_Sltk__SDL__ControllerAxisEvent_which);
     tolua_variable(tolua_S,"axis",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_axis,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_axis);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding1,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding2,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding2);
     tolua_variable(tolua_S,"padding3",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding3,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding3);
     tolua_variable(tolua_S,"value",tolua_get_Sltk__SDL__ControllerAxisEvent_value,tolua_set_Sltk__SDL__ControllerAxisEvent_value);
     tolua_variable(tolua_S,"padding4",tolua_get_Sltk__SDL__ControllerAxisEvent_unsigned_padding4,tolua_set_Sltk__SDL__ControllerAxisEvent_unsigned_padding4);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ControllerButtonEvent","Sltk::SDL::ControllerButtonEvent","",NULL);
    tolua_beginmodule(tolua_S,"ControllerButtonEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_type,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__ControllerButtonEvent_which,tolua_set_Sltk__SDL__ControllerButtonEvent_which);
     tolua_variable(tolua_S,"button",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_button,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_button);
     tolua_variable(tolua_S,"state",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_state,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_state);
     tolua_variable(tolua_S,"padding1",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding1,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding1);
     tolua_variable(tolua_S,"padding2",tolua_get_Sltk__SDL__ControllerButtonEvent_unsigned_padding2,tolua_set_Sltk__SDL__ControllerButtonEvent_unsigned_padding2);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ControllerDeviceEvent","Sltk::SDL::ControllerDeviceEvent","",NULL);
    tolua_beginmodule(tolua_S,"ControllerDeviceEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_type,tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp,tolua_set_Sltk__SDL__ControllerDeviceEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"which",tolua_get_Sltk__SDL__ControllerDeviceEvent_which,tolua_set_Sltk__SDL__ControllerDeviceEvent_which);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"TouchFingerEvent","Sltk::SDL::TouchFingerEvent","",NULL);
    tolua_beginmodule(tolua_S,"TouchFingerEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_type,tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__TouchFingerEvent_unsigned_timestamp,tolua_set_Sltk__SDL__TouchFingerEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"touchId",tolua_get_Sltk__SDL__TouchFingerEvent_touchId,tolua_set_Sltk__SDL__TouchFingerEvent_touchId);
     tolua_variable(tolua_S,"fingerId",tolua_get_Sltk__SDL__TouchFingerEvent_fingerId,tolua_set_Sltk__SDL__TouchFingerEvent_fingerId);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__TouchFingerEvent_x,tolua_set_Sltk__SDL__TouchFingerEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__TouchFingerEvent_y,tolua_set_Sltk__SDL__TouchFingerEvent_y);
     tolua_variable(tolua_S,"dx",tolua_get_Sltk__SDL__TouchFingerEvent_dx,tolua_set_Sltk__SDL__TouchFingerEvent_dx);
     tolua_variable(tolua_S,"dy",tolua_get_Sltk__SDL__TouchFingerEvent_dy,tolua_set_Sltk__SDL__TouchFingerEvent_dy);
     tolua_variable(tolua_S,"pressure",tolua_get_Sltk__SDL__TouchFingerEvent_pressure,tolua_set_Sltk__SDL__TouchFingerEvent_pressure);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MultiGestureEvent","Sltk::SDL::MultiGestureEvent","",NULL);
    tolua_beginmodule(tolua_S,"MultiGestureEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_type,tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_timestamp,tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"touchId",tolua_get_Sltk__SDL__MultiGestureEvent_touchId,tolua_set_Sltk__SDL__MultiGestureEvent_touchId);
     tolua_variable(tolua_S,"dTheta",tolua_get_Sltk__SDL__MultiGestureEvent_dTheta,tolua_set_Sltk__SDL__MultiGestureEvent_dTheta);
     tolua_variable(tolua_S,"dDist",tolua_get_Sltk__SDL__MultiGestureEvent_dDist,tolua_set_Sltk__SDL__MultiGestureEvent_dDist);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__MultiGestureEvent_x,tolua_set_Sltk__SDL__MultiGestureEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__MultiGestureEvent_y,tolua_set_Sltk__SDL__MultiGestureEvent_y);
     tolua_variable(tolua_S,"numFingers",tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_numFingers,tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_numFingers);
     tolua_variable(tolua_S,"padding",tolua_get_Sltk__SDL__MultiGestureEvent_unsigned_padding,tolua_set_Sltk__SDL__MultiGestureEvent_unsigned_padding);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"DollarGestureEvent","Sltk::SDL::DollarGestureEvent","",NULL);
    tolua_beginmodule(tolua_S,"DollarGestureEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_type,tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_timestamp,tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"touchId",tolua_get_Sltk__SDL__DollarGestureEvent_touchId,tolua_set_Sltk__SDL__DollarGestureEvent_touchId);
     tolua_variable(tolua_S,"gestureId",tolua_get_Sltk__SDL__DollarGestureEvent_gestureId,tolua_set_Sltk__SDL__DollarGestureEvent_gestureId);
     tolua_variable(tolua_S,"numFingers",tolua_get_Sltk__SDL__DollarGestureEvent_unsigned_numFingers,tolua_set_Sltk__SDL__DollarGestureEvent_unsigned_numFingers);
     tolua_variable(tolua_S,"error",tolua_get_Sltk__SDL__DollarGestureEvent_error,tolua_set_Sltk__SDL__DollarGestureEvent_error);
     tolua_variable(tolua_S,"x",tolua_get_Sltk__SDL__DollarGestureEvent_x,tolua_set_Sltk__SDL__DollarGestureEvent_x);
     tolua_variable(tolua_S,"y",tolua_get_Sltk__SDL__DollarGestureEvent_y,tolua_set_Sltk__SDL__DollarGestureEvent_y);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"DropEvent","Sltk::SDL::DropEvent","",NULL);
    tolua_beginmodule(tolua_S,"DropEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__DropEvent_unsigned_type,tolua_set_Sltk__SDL__DropEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__DropEvent_unsigned_timestamp,tolua_set_Sltk__SDL__DropEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"file",tolua_get_Sltk__SDL__DropEvent_file,tolua_set_Sltk__SDL__DropEvent_file);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"QuitEvent","Sltk::SDL::QuitEvent","",NULL);
    tolua_beginmodule(tolua_S,"QuitEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__QuitEvent_unsigned_type,tolua_set_Sltk__SDL__QuitEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__QuitEvent_unsigned_timestamp,tolua_set_Sltk__SDL__QuitEvent_unsigned_timestamp);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"OSEvent","Sltk::SDL::OSEvent","",NULL);
    tolua_beginmodule(tolua_S,"OSEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__OSEvent_unsigned_type,tolua_set_Sltk__SDL__OSEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__OSEvent_unsigned_timestamp,tolua_set_Sltk__SDL__OSEvent_unsigned_timestamp);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"UserEvent","Sltk::SDL::UserEvent","",NULL);
    tolua_beginmodule(tolua_S,"UserEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__UserEvent_unsigned_type,tolua_set_Sltk__SDL__UserEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__UserEvent_unsigned_timestamp,tolua_set_Sltk__SDL__UserEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"windowID",tolua_get_Sltk__SDL__UserEvent_unsigned_windowID,tolua_set_Sltk__SDL__UserEvent_unsigned_windowID);
     tolua_variable(tolua_S,"code",tolua_get_Sltk__SDL__UserEvent_code,tolua_set_Sltk__SDL__UserEvent_code);
     tolua_variable(tolua_S,"data1",tolua_get_Sltk__SDL__UserEvent_data1,tolua_set_Sltk__SDL__UserEvent_data1);
     tolua_variable(tolua_S,"data2",tolua_get_Sltk__SDL__UserEvent_data2,tolua_set_Sltk__SDL__UserEvent_data2);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"SysWMEvent","Sltk::SDL::SysWMEvent","",NULL);
    tolua_beginmodule(tolua_S,"SysWMEvent");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__SysWMEvent_unsigned_type,tolua_set_Sltk__SDL__SysWMEvent_unsigned_type);
     tolua_variable(tolua_S,"timestamp",tolua_get_Sltk__SDL__SysWMEvent_unsigned_timestamp,tolua_set_Sltk__SDL__SysWMEvent_unsigned_timestamp);
     tolua_variable(tolua_S,"msg",tolua_get_Sltk__SDL__SysWMEvent_msg,tolua_set_Sltk__SDL__SysWMEvent_msg);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Event","Sltk::SDL::Event","",tolua_collect_Sltk__SDL__Event);
    #else
    tolua_cclass(tolua_S,"Event","Sltk::SDL::Event","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Event");
     tolua_variable(tolua_S,"type",tolua_get_Sltk__SDL__Event_unsigned_type,tolua_set_Sltk__SDL__Event_unsigned_type);
     tolua_variable(tolua_S,"common",tolua_get_Sltk__SDL__Event_common,tolua_set_Sltk__SDL__Event_common);
     tolua_variable(tolua_S,"window",tolua_get_Sltk__SDL__Event_window,tolua_set_Sltk__SDL__Event_window);
     tolua_variable(tolua_S,"key",tolua_get_Sltk__SDL__Event_key,tolua_set_Sltk__SDL__Event_key);
     tolua_variable(tolua_S,"edit",tolua_get_Sltk__SDL__Event_edit,tolua_set_Sltk__SDL__Event_edit);
     tolua_variable(tolua_S,"text",tolua_get_Sltk__SDL__Event_text,tolua_set_Sltk__SDL__Event_text);
     tolua_variable(tolua_S,"motion",tolua_get_Sltk__SDL__Event_motion,tolua_set_Sltk__SDL__Event_motion);
     tolua_variable(tolua_S,"button",tolua_get_Sltk__SDL__Event_button,tolua_set_Sltk__SDL__Event_button);
     tolua_variable(tolua_S,"wheel",tolua_get_Sltk__SDL__Event_wheel,tolua_set_Sltk__SDL__Event_wheel);
     tolua_variable(tolua_S,"jaxis",tolua_get_Sltk__SDL__Event_jaxis,tolua_set_Sltk__SDL__Event_jaxis);
     tolua_variable(tolua_S,"jball",tolua_get_Sltk__SDL__Event_jball,tolua_set_Sltk__SDL__Event_jball);
     tolua_variable(tolua_S,"jhat",tolua_get_Sltk__SDL__Event_jhat,tolua_set_Sltk__SDL__Event_jhat);
     tolua_variable(tolua_S,"jbutton",tolua_get_Sltk__SDL__Event_jbutton,tolua_set_Sltk__SDL__Event_jbutton);
     tolua_variable(tolua_S,"jdevice",tolua_get_Sltk__SDL__Event_jdevice,tolua_set_Sltk__SDL__Event_jdevice);
     tolua_variable(tolua_S,"caxis",tolua_get_Sltk__SDL__Event_caxis,tolua_set_Sltk__SDL__Event_caxis);
     tolua_variable(tolua_S,"cbutton",tolua_get_Sltk__SDL__Event_cbutton,tolua_set_Sltk__SDL__Event_cbutton);
     tolua_variable(tolua_S,"cdevice",tolua_get_Sltk__SDL__Event_cdevice,tolua_set_Sltk__SDL__Event_cdevice);
     tolua_variable(tolua_S,"quit",tolua_get_Sltk__SDL__Event_quit,tolua_set_Sltk__SDL__Event_quit);
     tolua_variable(tolua_S,"user",tolua_get_Sltk__SDL__Event_user,tolua_set_Sltk__SDL__Event_user);
     tolua_variable(tolua_S,"syswm",tolua_get_Sltk__SDL__Event_syswm,tolua_set_Sltk__SDL__Event_syswm);
     tolua_variable(tolua_S,"tfinger",tolua_get_Sltk__SDL__Event_tfinger,tolua_set_Sltk__SDL__Event_tfinger);
     tolua_variable(tolua_S,"mgesture",tolua_get_Sltk__SDL__Event_mgesture,tolua_set_Sltk__SDL__Event_mgesture);
     tolua_variable(tolua_S,"dgesture",tolua_get_Sltk__SDL__Event_dgesture,tolua_set_Sltk__SDL__Event_dgesture);
     tolua_variable(tolua_S,"drop",tolua_get_Sltk__SDL__Event_drop,tolua_set_Sltk__SDL__Event_drop);
     tolua_variable(tolua_S,"padding",tolua_get_Sltk__SDL__Event_unsigned_padding,tolua_set_Sltk__SDL__Event_unsigned_padding);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Event_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Event_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Event_new00_local);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"SDL",0);
   tolua_beginmodule(tolua_S,"SDL");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Color","Sltk::SDL::Color","",tolua_collect_Sltk__SDL__Color);
    #else
    tolua_cclass(tolua_S,"Color","Sltk::SDL::Color","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Color");
     tolua_variable(tolua_S,"red",tolua_get_Sltk__SDL__Color_unsigned_red,tolua_set_Sltk__SDL__Color_unsigned_red);
     tolua_variable(tolua_S,"green",tolua_get_Sltk__SDL__Color_unsigned_green,tolua_set_Sltk__SDL__Color_unsigned_green);
     tolua_variable(tolua_S,"blue",tolua_get_Sltk__SDL__Color_unsigned_blue,tolua_set_Sltk__SDL__Color_unsigned_blue);
     tolua_variable(tolua_S,"alpha",tolua_get_Sltk__SDL__Color_unsigned_alpha,tolua_set_Sltk__SDL__Color_unsigned_alpha);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Color_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Color_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Color_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Color_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Color_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Color_new01_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Color_new02);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Color_new02_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Color_new02_local);
     tolua_function(tolua_S,"convert",tolua_libSLTK_SDL_Sltk_SDL_Color_convert00);
    tolua_endmodule(tolua_S);
    tolua_constant(tolua_S,"BLEND_NONE",Sltk::SDL::BLEND_NONE);
    tolua_constant(tolua_S,"BLEND_ALPHA",Sltk::SDL::BLEND_ALPHA);
    tolua_constant(tolua_S,"BLEND_ADD",Sltk::SDL::BLEND_ADD);
    tolua_constant(tolua_S,"BLEND_MOD",Sltk::SDL::BLEND_MOD);
    tolua_constant(tolua_S,"FONT_NORMAL",Sltk::SDL::FONT_NORMAL);
    tolua_constant(tolua_S,"FONT_BOLD",Sltk::SDL::FONT_BOLD);
    tolua_constant(tolua_S,"FONT_ITALIC",Sltk::SDL::FONT_ITALIC);
    tolua_constant(tolua_S,"FONT_UNDERLINE",Sltk::SDL::FONT_UNDERLINE);
    tolua_constant(tolua_S,"FONT_STRIKETHROUGH",Sltk::SDL::FONT_STRIKETHROUGH);
    tolua_constant(tolua_S,"TEXTURE_STATIC",Sltk::SDL::TEXTURE_STATIC);
    tolua_constant(tolua_S,"TEXTURE_STREAMING",Sltk::SDL::TEXTURE_STREAMING);
    tolua_constant(tolua_S,"TEXTURE_TARGET",Sltk::SDL::TEXTURE_TARGET);
    tolua_constant(tolua_S,"SAVE_BMP",Sltk::SDL::SAVE_BMP);
    tolua_constant(tolua_S,"SAVE_PNG",Sltk::SDL::SAVE_PNG);
    tolua_constant(tolua_S,"MOUSE_LEFT",Sltk::SDL::MOUSE_LEFT);
    tolua_constant(tolua_S,"MOUSE_MIDDLE",Sltk::SDL::MOUSE_MIDDLE);
    tolua_constant(tolua_S,"MOUSE_RIGHT",Sltk::SDL::MOUSE_RIGHT);
    tolua_constant(tolua_S,"JOY_LEFT",Sltk::SDL::JOY_LEFT);
    tolua_constant(tolua_S,"JOY_UP",Sltk::SDL::JOY_UP);
    tolua_constant(tolua_S,"JOY_RIGHT",Sltk::SDL::JOY_RIGHT);
    tolua_constant(tolua_S,"JOY_DOWN",Sltk::SDL::JOY_DOWN);
    tolua_constant(tolua_S,"KEY_UNKNOWN",Sltk::SDL::KEY_UNKNOWN);
    tolua_constant(tolua_S,"KEY_A",Sltk::SDL::KEY_A);
    tolua_constant(tolua_S,"KEY_B",Sltk::SDL::KEY_B);
    tolua_constant(tolua_S,"KEY_C",Sltk::SDL::KEY_C);
    tolua_constant(tolua_S,"KEY_D",Sltk::SDL::KEY_D);
    tolua_constant(tolua_S,"KEY_E",Sltk::SDL::KEY_E);
    tolua_constant(tolua_S,"KEY_F",Sltk::SDL::KEY_F);
    tolua_constant(tolua_S,"KEY_G",Sltk::SDL::KEY_G);
    tolua_constant(tolua_S,"KEY_H",Sltk::SDL::KEY_H);
    tolua_constant(tolua_S,"KEY_I",Sltk::SDL::KEY_I);
    tolua_constant(tolua_S,"KEY_J",Sltk::SDL::KEY_J);
    tolua_constant(tolua_S,"KEY_K",Sltk::SDL::KEY_K);
    tolua_constant(tolua_S,"KEY_L",Sltk::SDL::KEY_L);
    tolua_constant(tolua_S,"KEY_M",Sltk::SDL::KEY_M);
    tolua_constant(tolua_S,"KEY_N",Sltk::SDL::KEY_N);
    tolua_constant(tolua_S,"KEY_O",Sltk::SDL::KEY_O);
    tolua_constant(tolua_S,"KEY_P",Sltk::SDL::KEY_P);
    tolua_constant(tolua_S,"KEY_Q",Sltk::SDL::KEY_Q);
    tolua_constant(tolua_S,"KEY_R",Sltk::SDL::KEY_R);
    tolua_constant(tolua_S,"KEY_S",Sltk::SDL::KEY_S);
    tolua_constant(tolua_S,"KEY_T",Sltk::SDL::KEY_T);
    tolua_constant(tolua_S,"KEY_U",Sltk::SDL::KEY_U);
    tolua_constant(tolua_S,"KEY_V",Sltk::SDL::KEY_V);
    tolua_constant(tolua_S,"KEY_W",Sltk::SDL::KEY_W);
    tolua_constant(tolua_S,"KEY_X",Sltk::SDL::KEY_X);
    tolua_constant(tolua_S,"KEY_Y",Sltk::SDL::KEY_Y);
    tolua_constant(tolua_S,"KEY_Z",Sltk::SDL::KEY_Z);
    tolua_constant(tolua_S,"KEY_1",Sltk::SDL::KEY_1);
    tolua_constant(tolua_S,"KEY_2",Sltk::SDL::KEY_2);
    tolua_constant(tolua_S,"KEY_3",Sltk::SDL::KEY_3);
    tolua_constant(tolua_S,"KEY_4",Sltk::SDL::KEY_4);
    tolua_constant(tolua_S,"KEY_5",Sltk::SDL::KEY_5);
    tolua_constant(tolua_S,"KEY_6",Sltk::SDL::KEY_6);
    tolua_constant(tolua_S,"KEY_7",Sltk::SDL::KEY_7);
    tolua_constant(tolua_S,"KEY_8",Sltk::SDL::KEY_8);
    tolua_constant(tolua_S,"KEY_9",Sltk::SDL::KEY_9);
    tolua_constant(tolua_S,"KEY_0",Sltk::SDL::KEY_0);
    tolua_constant(tolua_S,"KEY_RETURN",Sltk::SDL::KEY_RETURN);
    tolua_constant(tolua_S,"KEY_ESCAPE",Sltk::SDL::KEY_ESCAPE);
    tolua_constant(tolua_S,"KEY_BACKSPACE",Sltk::SDL::KEY_BACKSPACE);
    tolua_constant(tolua_S,"KEY_TAB",Sltk::SDL::KEY_TAB);
    tolua_constant(tolua_S,"KEY_SPACE",Sltk::SDL::KEY_SPACE);
    tolua_constant(tolua_S,"KEY_MINUS",Sltk::SDL::KEY_MINUS);
    tolua_constant(tolua_S,"KEY_EQUALS",Sltk::SDL::KEY_EQUALS);
    tolua_constant(tolua_S,"KEY_LEFTBRACKET",Sltk::SDL::KEY_LEFTBRACKET);
    tolua_constant(tolua_S,"KEY_RIGHTBRACKET",Sltk::SDL::KEY_RIGHTBRACKET);
    tolua_constant(tolua_S,"KEY_BACKSLASH",Sltk::SDL::KEY_BACKSLASH);
    tolua_constant(tolua_S,"KEY_NONUSHASH",Sltk::SDL::KEY_NONUSHASH);
    tolua_constant(tolua_S,"KEY_SEMICOLON",Sltk::SDL::KEY_SEMICOLON);
    tolua_constant(tolua_S,"KEY_APOSTROPHE",Sltk::SDL::KEY_APOSTROPHE);
    tolua_constant(tolua_S,"KEY_GRAVE",Sltk::SDL::KEY_GRAVE);
    tolua_constant(tolua_S,"KEY_COMMA",Sltk::SDL::KEY_COMMA);
    tolua_constant(tolua_S,"KEY_PERIOD",Sltk::SDL::KEY_PERIOD);
    tolua_constant(tolua_S,"KEY_SLASH",Sltk::SDL::KEY_SLASH);
    tolua_constant(tolua_S,"KEY_CAPSLOCK",Sltk::SDL::KEY_CAPSLOCK);
    tolua_constant(tolua_S,"KEY_F1",Sltk::SDL::KEY_F1);
    tolua_constant(tolua_S,"KEY_F2",Sltk::SDL::KEY_F2);
    tolua_constant(tolua_S,"KEY_F3",Sltk::SDL::KEY_F3);
    tolua_constant(tolua_S,"KEY_F4",Sltk::SDL::KEY_F4);
    tolua_constant(tolua_S,"KEY_F5",Sltk::SDL::KEY_F5);
    tolua_constant(tolua_S,"KEY_F6",Sltk::SDL::KEY_F6);
    tolua_constant(tolua_S,"KEY_F7",Sltk::SDL::KEY_F7);
    tolua_constant(tolua_S,"KEY_F8",Sltk::SDL::KEY_F8);
    tolua_constant(tolua_S,"KEY_F9",Sltk::SDL::KEY_F9);
    tolua_constant(tolua_S,"KEY_F10",Sltk::SDL::KEY_F10);
    tolua_constant(tolua_S,"KEY_F11",Sltk::SDL::KEY_F11);
    tolua_constant(tolua_S,"KEY_F12",Sltk::SDL::KEY_F12);
    tolua_constant(tolua_S,"KEY_PRINTSCREEN",Sltk::SDL::KEY_PRINTSCREEN);
    tolua_constant(tolua_S,"KEY_SCROLLLOCK",Sltk::SDL::KEY_SCROLLLOCK);
    tolua_constant(tolua_S,"KEY_PAUSE",Sltk::SDL::KEY_PAUSE);
    tolua_constant(tolua_S,"KEY_INSERT",Sltk::SDL::KEY_INSERT);
    tolua_constant(tolua_S,"KEY_HOME",Sltk::SDL::KEY_HOME);
    tolua_constant(tolua_S,"KEY_PAGEUP",Sltk::SDL::KEY_PAGEUP);
    tolua_constant(tolua_S,"KEY_DELETE",Sltk::SDL::KEY_DELETE);
    tolua_constant(tolua_S,"KEY_END",Sltk::SDL::KEY_END);
    tolua_constant(tolua_S,"KEY_PAGEDOWN",Sltk::SDL::KEY_PAGEDOWN);
    tolua_constant(tolua_S,"KEY_RIGHT",Sltk::SDL::KEY_RIGHT);
    tolua_constant(tolua_S,"KEY_LEFT",Sltk::SDL::KEY_LEFT);
    tolua_constant(tolua_S,"KEY_DOWN",Sltk::SDL::KEY_DOWN);
    tolua_constant(tolua_S,"KEY_UP",Sltk::SDL::KEY_UP);
    tolua_constant(tolua_S,"KEY_NUMLOCKCLEAR",Sltk::SDL::KEY_NUMLOCKCLEAR);
    tolua_constant(tolua_S,"KEY_KP_DIVIDE",Sltk::SDL::KEY_KP_DIVIDE);
    tolua_constant(tolua_S,"KEY_KP_MULTIPLY",Sltk::SDL::KEY_KP_MULTIPLY);
    tolua_constant(tolua_S,"KEY_KP_MINUS",Sltk::SDL::KEY_KP_MINUS);
    tolua_constant(tolua_S,"KEY_KP_PLUS",Sltk::SDL::KEY_KP_PLUS);
    tolua_constant(tolua_S,"KEY_KP_ENTER",Sltk::SDL::KEY_KP_ENTER);
    tolua_constant(tolua_S,"KEY_KP_1",Sltk::SDL::KEY_KP_1);
    tolua_constant(tolua_S,"KEY_KP_2",Sltk::SDL::KEY_KP_2);
    tolua_constant(tolua_S,"KEY_KP_3",Sltk::SDL::KEY_KP_3);
    tolua_constant(tolua_S,"KEY_KP_4",Sltk::SDL::KEY_KP_4);
    tolua_constant(tolua_S,"KEY_KP_5",Sltk::SDL::KEY_KP_5);
    tolua_constant(tolua_S,"KEY_KP_6",Sltk::SDL::KEY_KP_6);
    tolua_constant(tolua_S,"KEY_KP_7",Sltk::SDL::KEY_KP_7);
    tolua_constant(tolua_S,"KEY_KP_8",Sltk::SDL::KEY_KP_8);
    tolua_constant(tolua_S,"KEY_KP_9",Sltk::SDL::KEY_KP_9);
    tolua_constant(tolua_S,"KEY_KP_0",Sltk::SDL::KEY_KP_0);
    tolua_constant(tolua_S,"KEY_KP_PERIOD",Sltk::SDL::KEY_KP_PERIOD);
    tolua_constant(tolua_S,"KEY_NONUSBACKSLASH",Sltk::SDL::KEY_NONUSBACKSLASH);
    tolua_constant(tolua_S,"KEY_APPLICATION",Sltk::SDL::KEY_APPLICATION);
    tolua_constant(tolua_S,"KEY_POWER",Sltk::SDL::KEY_POWER);
    tolua_constant(tolua_S,"KEY_KP_EQUALS",Sltk::SDL::KEY_KP_EQUALS);
    tolua_constant(tolua_S,"KEY_F13",Sltk::SDL::KEY_F13);
    tolua_constant(tolua_S,"KEY_F14",Sltk::SDL::KEY_F14);
    tolua_constant(tolua_S,"KEY_F15",Sltk::SDL::KEY_F15);
    tolua_constant(tolua_S,"KEY_F16",Sltk::SDL::KEY_F16);
    tolua_constant(tolua_S,"KEY_F17",Sltk::SDL::KEY_F17);
    tolua_constant(tolua_S,"KEY_F18",Sltk::SDL::KEY_F18);
    tolua_constant(tolua_S,"KEY_F19",Sltk::SDL::KEY_F19);
    tolua_constant(tolua_S,"KEY_F20",Sltk::SDL::KEY_F20);
    tolua_constant(tolua_S,"KEY_F21",Sltk::SDL::KEY_F21);
    tolua_constant(tolua_S,"KEY_F22",Sltk::SDL::KEY_F22);
    tolua_constant(tolua_S,"KEY_F23",Sltk::SDL::KEY_F23);
    tolua_constant(tolua_S,"KEY_F24",Sltk::SDL::KEY_F24);
    tolua_constant(tolua_S,"KEY_EXECUTE",Sltk::SDL::KEY_EXECUTE);
    tolua_constant(tolua_S,"KEY_HELP",Sltk::SDL::KEY_HELP);
    tolua_constant(tolua_S,"KEY_MENU",Sltk::SDL::KEY_MENU);
    tolua_constant(tolua_S,"KEY_SELECT",Sltk::SDL::KEY_SELECT);
    tolua_constant(tolua_S,"KEY_STOP",Sltk::SDL::KEY_STOP);
    tolua_constant(tolua_S,"KEY_AGAIN",Sltk::SDL::KEY_AGAIN);
    tolua_constant(tolua_S,"KEY_UNDO",Sltk::SDL::KEY_UNDO);
    tolua_constant(tolua_S,"KEY_CUT",Sltk::SDL::KEY_CUT);
    tolua_constant(tolua_S,"KEY_COPY",Sltk::SDL::KEY_COPY);
    tolua_constant(tolua_S,"KEY_PASTE",Sltk::SDL::KEY_PASTE);
    tolua_constant(tolua_S,"KEY_FIND",Sltk::SDL::KEY_FIND);
    tolua_constant(tolua_S,"KEY_MUTE",Sltk::SDL::KEY_MUTE);
    tolua_constant(tolua_S,"KEY_VOLUMEUP",Sltk::SDL::KEY_VOLUMEUP);
    tolua_constant(tolua_S,"KEY_VOLUMEDOWN",Sltk::SDL::KEY_VOLUMEDOWN);
    tolua_constant(tolua_S,"KEY_KP_COMMA",Sltk::SDL::KEY_KP_COMMA);
    tolua_constant(tolua_S,"KEY_KP_EQUALSAS400",Sltk::SDL::KEY_KP_EQUALSAS400);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL1",Sltk::SDL::KEY_INTERNATIONAL1);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL2",Sltk::SDL::KEY_INTERNATIONAL2);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL3",Sltk::SDL::KEY_INTERNATIONAL3);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL4",Sltk::SDL::KEY_INTERNATIONAL4);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL5",Sltk::SDL::KEY_INTERNATIONAL5);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL6",Sltk::SDL::KEY_INTERNATIONAL6);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL7",Sltk::SDL::KEY_INTERNATIONAL7);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL8",Sltk::SDL::KEY_INTERNATIONAL8);
    tolua_constant(tolua_S,"KEY_INTERNATIONAL9",Sltk::SDL::KEY_INTERNATIONAL9);
    tolua_constant(tolua_S,"KEY_LANG1",Sltk::SDL::KEY_LANG1);
    tolua_constant(tolua_S,"KEY_LANG2",Sltk::SDL::KEY_LANG2);
    tolua_constant(tolua_S,"KEY_LANG3",Sltk::SDL::KEY_LANG3);
    tolua_constant(tolua_S,"KEY_LANG4",Sltk::SDL::KEY_LANG4);
    tolua_constant(tolua_S,"KEY_LANG5",Sltk::SDL::KEY_LANG5);
    tolua_constant(tolua_S,"KEY_LANG6",Sltk::SDL::KEY_LANG6);
    tolua_constant(tolua_S,"KEY_LANG7",Sltk::SDL::KEY_LANG7);
    tolua_constant(tolua_S,"KEY_LANG8",Sltk::SDL::KEY_LANG8);
    tolua_constant(tolua_S,"KEY_LANG9",Sltk::SDL::KEY_LANG9);
    tolua_constant(tolua_S,"KEY_ALTERASE",Sltk::SDL::KEY_ALTERASE);
    tolua_constant(tolua_S,"KEY_SYSREQ",Sltk::SDL::KEY_SYSREQ);
    tolua_constant(tolua_S,"KEY_CANCEL",Sltk::SDL::KEY_CANCEL);
    tolua_constant(tolua_S,"KEY_CLEAR",Sltk::SDL::KEY_CLEAR);
    tolua_constant(tolua_S,"KEY_PRIOR",Sltk::SDL::KEY_PRIOR);
    tolua_constant(tolua_S,"KEY_RETURN2",Sltk::SDL::KEY_RETURN2);
    tolua_constant(tolua_S,"KEY_SEPARATOR",Sltk::SDL::KEY_SEPARATOR);
    tolua_constant(tolua_S,"KEY_OUT",Sltk::SDL::KEY_OUT);
    tolua_constant(tolua_S,"KEY_OPER",Sltk::SDL::KEY_OPER);
    tolua_constant(tolua_S,"KEY_CLEARAGAIN",Sltk::SDL::KEY_CLEARAGAIN);
    tolua_constant(tolua_S,"KEY_CRSEL",Sltk::SDL::KEY_CRSEL);
    tolua_constant(tolua_S,"KEY_EXSEL",Sltk::SDL::KEY_EXSEL);
    tolua_constant(tolua_S,"KEY_KP_00",Sltk::SDL::KEY_KP_00);
    tolua_constant(tolua_S,"KEY_KP_000",Sltk::SDL::KEY_KP_000);
    tolua_constant(tolua_S,"KEY_THOUSANDSSEPARATOR",Sltk::SDL::KEY_THOUSANDSSEPARATOR);
    tolua_constant(tolua_S,"KEY_DECIMALSEPARATOR",Sltk::SDL::KEY_DECIMALSEPARATOR);
    tolua_constant(tolua_S,"KEY_CURRENCYUNIT",Sltk::SDL::KEY_CURRENCYUNIT);
    tolua_constant(tolua_S,"KEY_CURRENCYSUBUNIT",Sltk::SDL::KEY_CURRENCYSUBUNIT);
    tolua_constant(tolua_S,"KEY_KP_LEFTPAREN",Sltk::SDL::KEY_KP_LEFTPAREN);
    tolua_constant(tolua_S,"KEY_KP_RIGHTPAREN",Sltk::SDL::KEY_KP_RIGHTPAREN);
    tolua_constant(tolua_S,"KEY_KP_LEFTBRACE",Sltk::SDL::KEY_KP_LEFTBRACE);
    tolua_constant(tolua_S,"KEY_KP_RIGHTBRACE",Sltk::SDL::KEY_KP_RIGHTBRACE);
    tolua_constant(tolua_S,"KEY_KP_TAB",Sltk::SDL::KEY_KP_TAB);
    tolua_constant(tolua_S,"KEY_KP_BACKSPACE",Sltk::SDL::KEY_KP_BACKSPACE);
    tolua_constant(tolua_S,"KEY_KP_A",Sltk::SDL::KEY_KP_A);
    tolua_constant(tolua_S,"KEY_KP_B",Sltk::SDL::KEY_KP_B);
    tolua_constant(tolua_S,"KEY_KP_C",Sltk::SDL::KEY_KP_C);
    tolua_constant(tolua_S,"KEY_KP_D",Sltk::SDL::KEY_KP_D);
    tolua_constant(tolua_S,"KEY_KP_E",Sltk::SDL::KEY_KP_E);
    tolua_constant(tolua_S,"KEY_KP_F",Sltk::SDL::KEY_KP_F);
    tolua_constant(tolua_S,"KEY_KP_XOR",Sltk::SDL::KEY_KP_XOR);
    tolua_constant(tolua_S,"KEY_KP_POWER",Sltk::SDL::KEY_KP_POWER);
    tolua_constant(tolua_S,"KEY_KP_PERCENT",Sltk::SDL::KEY_KP_PERCENT);
    tolua_constant(tolua_S,"KEY_KP_LESS",Sltk::SDL::KEY_KP_LESS);
    tolua_constant(tolua_S,"KEY_KP_GREATER",Sltk::SDL::KEY_KP_GREATER);
    tolua_constant(tolua_S,"KEY_KP_AMPERSAND",Sltk::SDL::KEY_KP_AMPERSAND);
    tolua_constant(tolua_S,"KEY_KP_DBLAMPERSAND",Sltk::SDL::KEY_KP_DBLAMPERSAND);
    tolua_constant(tolua_S,"KEY_KP_VERTICALBAR",Sltk::SDL::KEY_KP_VERTICALBAR);
    tolua_constant(tolua_S,"KEY_KP_DBLVERTICALBAR",Sltk::SDL::KEY_KP_DBLVERTICALBAR);
    tolua_constant(tolua_S,"KEY_KP_COLON",Sltk::SDL::KEY_KP_COLON);
    tolua_constant(tolua_S,"KEY_KP_HASH",Sltk::SDL::KEY_KP_HASH);
    tolua_constant(tolua_S,"KEY_KP_SPACE",Sltk::SDL::KEY_KP_SPACE);
    tolua_constant(tolua_S,"KEY_KP_AT",Sltk::SDL::KEY_KP_AT);
    tolua_constant(tolua_S,"KEY_KP_EXCLAM",Sltk::SDL::KEY_KP_EXCLAM);
    tolua_constant(tolua_S,"KEY_KP_MEMSTORE",Sltk::SDL::KEY_KP_MEMSTORE);
    tolua_constant(tolua_S,"KEY_KP_MEMRECALL",Sltk::SDL::KEY_KP_MEMRECALL);
    tolua_constant(tolua_S,"KEY_KP_MEMCLEAR",Sltk::SDL::KEY_KP_MEMCLEAR);
    tolua_constant(tolua_S,"KEY_KP_MEMADD",Sltk::SDL::KEY_KP_MEMADD);
    tolua_constant(tolua_S,"KEY_KP_MEMSUBTRACT",Sltk::SDL::KEY_KP_MEMSUBTRACT);
    tolua_constant(tolua_S,"KEY_KP_MEMMULTIPLY",Sltk::SDL::KEY_KP_MEMMULTIPLY);
    tolua_constant(tolua_S,"KEY_KP_MEMDIVIDE",Sltk::SDL::KEY_KP_MEMDIVIDE);
    tolua_constant(tolua_S,"KEY_KP_PLUSMINUS",Sltk::SDL::KEY_KP_PLUSMINUS);
    tolua_constant(tolua_S,"KEY_KP_CLEAR",Sltk::SDL::KEY_KP_CLEAR);
    tolua_constant(tolua_S,"KEY_KP_CLEARENTRY",Sltk::SDL::KEY_KP_CLEARENTRY);
    tolua_constant(tolua_S,"KEY_KP_BINARY",Sltk::SDL::KEY_KP_BINARY);
    tolua_constant(tolua_S,"KEY_KP_OCTAL",Sltk::SDL::KEY_KP_OCTAL);
    tolua_constant(tolua_S,"KEY_KP_DECIMAL",Sltk::SDL::KEY_KP_DECIMAL);
    tolua_constant(tolua_S,"KEY_KP_HEXADECIMAL",Sltk::SDL::KEY_KP_HEXADECIMAL);
    tolua_constant(tolua_S,"KEY_LCTRL",Sltk::SDL::KEY_LCTRL);
    tolua_constant(tolua_S,"KEY_LSHIFT",Sltk::SDL::KEY_LSHIFT);
    tolua_constant(tolua_S,"KEY_LALT",Sltk::SDL::KEY_LALT);
    tolua_constant(tolua_S,"KEY_LGUI",Sltk::SDL::KEY_LGUI);
    tolua_constant(tolua_S,"KEY_RCTRL",Sltk::SDL::KEY_RCTRL);
    tolua_constant(tolua_S,"KEY_RSHIFT",Sltk::SDL::KEY_RSHIFT);
    tolua_constant(tolua_S,"KEY_RALT",Sltk::SDL::KEY_RALT);
    tolua_constant(tolua_S,"KEY_RGUI",Sltk::SDL::KEY_RGUI);
    tolua_constant(tolua_S,"KEY_MODE",Sltk::SDL::KEY_MODE);
    tolua_constant(tolua_S,"KEY_AUDIONEXT",Sltk::SDL::KEY_AUDIONEXT);
    tolua_constant(tolua_S,"KEY_AUDIOPREV",Sltk::SDL::KEY_AUDIOPREV);
    tolua_constant(tolua_S,"KEY_AUDIOSTOP",Sltk::SDL::KEY_AUDIOSTOP);
    tolua_constant(tolua_S,"KEY_AUDIOPLAY",Sltk::SDL::KEY_AUDIOPLAY);
    tolua_constant(tolua_S,"KEY_AUDIOMUTE",Sltk::SDL::KEY_AUDIOMUTE);
    tolua_constant(tolua_S,"KEY_MEDIASELECT",Sltk::SDL::KEY_MEDIASELECT);
    tolua_constant(tolua_S,"KEY_WWW",Sltk::SDL::KEY_WWW);
    tolua_constant(tolua_S,"KEY_MAIL",Sltk::SDL::KEY_MAIL);
    tolua_constant(tolua_S,"KEY_CALCULATOR",Sltk::SDL::KEY_CALCULATOR);
    tolua_constant(tolua_S,"KEY_COMPUTER",Sltk::SDL::KEY_COMPUTER);
    tolua_constant(tolua_S,"KEY_AC_SEARCH",Sltk::SDL::KEY_AC_SEARCH);
    tolua_constant(tolua_S,"KEY_AC_HOME",Sltk::SDL::KEY_AC_HOME);
    tolua_constant(tolua_S,"KEY_AC_BACK",Sltk::SDL::KEY_AC_BACK);
    tolua_constant(tolua_S,"KEY_AC_FORWARD",Sltk::SDL::KEY_AC_FORWARD);
    tolua_constant(tolua_S,"KEY_AC_STOP",Sltk::SDL::KEY_AC_STOP);
    tolua_constant(tolua_S,"KEY_AC_REFRESH",Sltk::SDL::KEY_AC_REFRESH);
    tolua_constant(tolua_S,"KEY_AC_BOOKMARKS",Sltk::SDL::KEY_AC_BOOKMARKS);
    tolua_constant(tolua_S,"KEY_BRIGHTNESSDOWN",Sltk::SDL::KEY_BRIGHTNESSDOWN);
    tolua_constant(tolua_S,"KEY_BRIGHTNESSUP",Sltk::SDL::KEY_BRIGHTNESSUP);
    tolua_constant(tolua_S,"KEY_DISPLAYSWITCH",Sltk::SDL::KEY_DISPLAYSWITCH);
    tolua_constant(tolua_S,"KEY_KBDILLUMTOGGLE",Sltk::SDL::KEY_KBDILLUMTOGGLE);
    tolua_constant(tolua_S,"KEY_KBDILLUMDOWN",Sltk::SDL::KEY_KBDILLUMDOWN);
    tolua_constant(tolua_S,"KEY_KBDILLUMUP",Sltk::SDL::KEY_KBDILLUMUP);
    tolua_constant(tolua_S,"KEY_EJECT",Sltk::SDL::KEY_EJECT);
    tolua_constant(tolua_S,"KEY_SLEEP",Sltk::SDL::KEY_SLEEP);
    tolua_constant(tolua_S,"KEY_APP1",Sltk::SDL::KEY_APP1);
    tolua_constant(tolua_S,"KEY_APP2",Sltk::SDL::KEY_APP2);
    tolua_constant(tolua_S,"NUM_SCANCODES",Sltk::SDL::NUM_SCANCODES);
    tolua_constant(tolua_S,"SDLK_UNKNOWN",Sltk::SDL::SDLK_UNKNOWN);
    tolua_constant(tolua_S,"SDLK_RETURN",Sltk::SDL::SDLK_RETURN);
    tolua_constant(tolua_S,"SDLK_ESCAPE",Sltk::SDL::SDLK_ESCAPE);
    tolua_constant(tolua_S,"SDLK_BACKSPACE",Sltk::SDL::SDLK_BACKSPACE);
    tolua_constant(tolua_S,"SDLK_TAB",Sltk::SDL::SDLK_TAB);
    tolua_constant(tolua_S,"SDLK_SPACE",Sltk::SDL::SDLK_SPACE);
    tolua_constant(tolua_S,"SDLK_EXCLAIM",Sltk::SDL::SDLK_EXCLAIM);
    tolua_constant(tolua_S,"SDLK_QUOTEDBL",Sltk::SDL::SDLK_QUOTEDBL);
    tolua_constant(tolua_S,"SDLK_HASH",Sltk::SDL::SDLK_HASH);
    tolua_constant(tolua_S,"SDLK_PERCENT",Sltk::SDL::SDLK_PERCENT);
    tolua_constant(tolua_S,"SDLK_DOLLAR",Sltk::SDL::SDLK_DOLLAR);
    tolua_constant(tolua_S,"SDLK_AMPERSAND",Sltk::SDL::SDLK_AMPERSAND);
    tolua_constant(tolua_S,"SDLK_QUOTE",Sltk::SDL::SDLK_QUOTE);
    tolua_constant(tolua_S,"SDLK_LEFTPAREN",Sltk::SDL::SDLK_LEFTPAREN);
    tolua_constant(tolua_S,"SDLK_RIGHTPAREN",Sltk::SDL::SDLK_RIGHTPAREN);
    tolua_constant(tolua_S,"SDLK_ASTERISK",Sltk::SDL::SDLK_ASTERISK);
    tolua_constant(tolua_S,"SDLK_PLUS",Sltk::SDL::SDLK_PLUS);
    tolua_constant(tolua_S,"SDLK_COMMA",Sltk::SDL::SDLK_COMMA);
    tolua_constant(tolua_S,"SDLK_MINUS",Sltk::SDL::SDLK_MINUS);
    tolua_constant(tolua_S,"SDLK_PERIOD",Sltk::SDL::SDLK_PERIOD);
    tolua_constant(tolua_S,"SDLK_SLASH",Sltk::SDL::SDLK_SLASH);
    tolua_constant(tolua_S,"SDLK_0",Sltk::SDL::SDLK_0);
    tolua_constant(tolua_S,"SDLK_1",Sltk::SDL::SDLK_1);
    tolua_constant(tolua_S,"SDLK_2",Sltk::SDL::SDLK_2);
    tolua_constant(tolua_S,"SDLK_3",Sltk::SDL::SDLK_3);
    tolua_constant(tolua_S,"SDLK_4",Sltk::SDL::SDLK_4);
    tolua_constant(tolua_S,"SDLK_5",Sltk::SDL::SDLK_5);
    tolua_constant(tolua_S,"SDLK_6",Sltk::SDL::SDLK_6);
    tolua_constant(tolua_S,"SDLK_7",Sltk::SDL::SDLK_7);
    tolua_constant(tolua_S,"SDLK_8",Sltk::SDL::SDLK_8);
    tolua_constant(tolua_S,"SDLK_9",Sltk::SDL::SDLK_9);
    tolua_constant(tolua_S,"SDLK_COLON",Sltk::SDL::SDLK_COLON);
    tolua_constant(tolua_S,"SDLK_SEMICOLON",Sltk::SDL::SDLK_SEMICOLON);
    tolua_constant(tolua_S,"SDLK_LESS",Sltk::SDL::SDLK_LESS);
    tolua_constant(tolua_S,"SDLK_EQUALS",Sltk::SDL::SDLK_EQUALS);
    tolua_constant(tolua_S,"SDLK_GREATER",Sltk::SDL::SDLK_GREATER);
    tolua_constant(tolua_S,"SDLK_QUESTION",Sltk::SDL::SDLK_QUESTION);
    tolua_constant(tolua_S,"SDLK_AT",Sltk::SDL::SDLK_AT);
    tolua_constant(tolua_S,"SDLK_LEFTBRACKET",Sltk::SDL::SDLK_LEFTBRACKET);
    tolua_constant(tolua_S,"SDLK_BACKSLASH",Sltk::SDL::SDLK_BACKSLASH);
    tolua_constant(tolua_S,"SDLK_RIGHTBRACKET",Sltk::SDL::SDLK_RIGHTBRACKET);
    tolua_constant(tolua_S,"SDLK_CARET",Sltk::SDL::SDLK_CARET);
    tolua_constant(tolua_S,"SDLK_UNDERSCORE",Sltk::SDL::SDLK_UNDERSCORE);
    tolua_constant(tolua_S,"SDLK_BACKQUOTE",Sltk::SDL::SDLK_BACKQUOTE);
    tolua_constant(tolua_S,"SDLK_a",Sltk::SDL::SDLK_a);
    tolua_constant(tolua_S,"SDLK_b",Sltk::SDL::SDLK_b);
    tolua_constant(tolua_S,"SDLK_c",Sltk::SDL::SDLK_c);
    tolua_constant(tolua_S,"SDLK_d",Sltk::SDL::SDLK_d);
    tolua_constant(tolua_S,"SDLK_e",Sltk::SDL::SDLK_e);
    tolua_constant(tolua_S,"SDLK_f",Sltk::SDL::SDLK_f);
    tolua_constant(tolua_S,"SDLK_g",Sltk::SDL::SDLK_g);
    tolua_constant(tolua_S,"SDLK_h",Sltk::SDL::SDLK_h);
    tolua_constant(tolua_S,"SDLK_i",Sltk::SDL::SDLK_i);
    tolua_constant(tolua_S,"SDLK_j",Sltk::SDL::SDLK_j);
    tolua_constant(tolua_S,"SDLK_k",Sltk::SDL::SDLK_k);
    tolua_constant(tolua_S,"SDLK_l",Sltk::SDL::SDLK_l);
    tolua_constant(tolua_S,"SDLK_m",Sltk::SDL::SDLK_m);
    tolua_constant(tolua_S,"SDLK_n",Sltk::SDL::SDLK_n);
    tolua_constant(tolua_S,"SDLK_o",Sltk::SDL::SDLK_o);
    tolua_constant(tolua_S,"SDLK_p",Sltk::SDL::SDLK_p);
    tolua_constant(tolua_S,"SDLK_q",Sltk::SDL::SDLK_q);
    tolua_constant(tolua_S,"SDLK_r",Sltk::SDL::SDLK_r);
    tolua_constant(tolua_S,"SDLK_s",Sltk::SDL::SDLK_s);
    tolua_constant(tolua_S,"SDLK_t",Sltk::SDL::SDLK_t);
    tolua_constant(tolua_S,"SDLK_u",Sltk::SDL::SDLK_u);
    tolua_constant(tolua_S,"SDLK_v",Sltk::SDL::SDLK_v);
    tolua_constant(tolua_S,"SDLK_w",Sltk::SDL::SDLK_w);
    tolua_constant(tolua_S,"SDLK_x",Sltk::SDL::SDLK_x);
    tolua_constant(tolua_S,"SDLK_y",Sltk::SDL::SDLK_y);
    tolua_constant(tolua_S,"SDLK_z",Sltk::SDL::SDLK_z);
    tolua_constant(tolua_S,"SDLK_CAPSLOCK",Sltk::SDL::SDLK_CAPSLOCK);
    tolua_constant(tolua_S,"SDLK_F1",Sltk::SDL::SDLK_F1);
    tolua_constant(tolua_S,"SDLK_F2",Sltk::SDL::SDLK_F2);
    tolua_constant(tolua_S,"SDLK_F3",Sltk::SDL::SDLK_F3);
    tolua_constant(tolua_S,"SDLK_F4",Sltk::SDL::SDLK_F4);
    tolua_constant(tolua_S,"SDLK_F5",Sltk::SDL::SDLK_F5);
    tolua_constant(tolua_S,"SDLK_F6",Sltk::SDL::SDLK_F6);
    tolua_constant(tolua_S,"SDLK_F7",Sltk::SDL::SDLK_F7);
    tolua_constant(tolua_S,"SDLK_F8",Sltk::SDL::SDLK_F8);
    tolua_constant(tolua_S,"SDLK_F9",Sltk::SDL::SDLK_F9);
    tolua_constant(tolua_S,"SDLK_F10",Sltk::SDL::SDLK_F10);
    tolua_constant(tolua_S,"SDLK_F11",Sltk::SDL::SDLK_F11);
    tolua_constant(tolua_S,"SDLK_F12",Sltk::SDL::SDLK_F12);
    tolua_constant(tolua_S,"SDLK_PRINTSCREEN",Sltk::SDL::SDLK_PRINTSCREEN);
    tolua_constant(tolua_S,"SDLK_SCROLLLOCK",Sltk::SDL::SDLK_SCROLLLOCK);
    tolua_constant(tolua_S,"SDLK_PAUSE",Sltk::SDL::SDLK_PAUSE);
    tolua_constant(tolua_S,"SDLK_INSERT",Sltk::SDL::SDLK_INSERT);
    tolua_constant(tolua_S,"SDLK_HOME",Sltk::SDL::SDLK_HOME);
    tolua_constant(tolua_S,"SDLK_PAGEUP",Sltk::SDL::SDLK_PAGEUP);
    tolua_constant(tolua_S,"SDLK_DELETE",Sltk::SDL::SDLK_DELETE);
    tolua_constant(tolua_S,"SDLK_END",Sltk::SDL::SDLK_END);
    tolua_constant(tolua_S,"SDLK_PAGEDOWN",Sltk::SDL::SDLK_PAGEDOWN);
    tolua_constant(tolua_S,"SDLK_RIGHT",Sltk::SDL::SDLK_RIGHT);
    tolua_constant(tolua_S,"SDLK_LEFT",Sltk::SDL::SDLK_LEFT);
    tolua_constant(tolua_S,"SDLK_DOWN",Sltk::SDL::SDLK_DOWN);
    tolua_constant(tolua_S,"SDLK_UP",Sltk::SDL::SDLK_UP);
    tolua_constant(tolua_S,"SDLK_NUMLOCKCLEAR",Sltk::SDL::SDLK_NUMLOCKCLEAR);
    tolua_constant(tolua_S,"SDLK_KP_DIVIDE",Sltk::SDL::SDLK_KP_DIVIDE);
    tolua_constant(tolua_S,"SDLK_KP_MULTIPLY",Sltk::SDL::SDLK_KP_MULTIPLY);
    tolua_constant(tolua_S,"SDLK_KP_MINUS",Sltk::SDL::SDLK_KP_MINUS);
    tolua_constant(tolua_S,"SDLK_KP_PLUS",Sltk::SDL::SDLK_KP_PLUS);
    tolua_constant(tolua_S,"SDLK_KP_ENTER",Sltk::SDL::SDLK_KP_ENTER);
    tolua_constant(tolua_S,"SDLK_KP_1",Sltk::SDL::SDLK_KP_1);
    tolua_constant(tolua_S,"SDLK_KP_2",Sltk::SDL::SDLK_KP_2);
    tolua_constant(tolua_S,"SDLK_KP_3",Sltk::SDL::SDLK_KP_3);
    tolua_constant(tolua_S,"SDLK_KP_4",Sltk::SDL::SDLK_KP_4);
    tolua_constant(tolua_S,"SDLK_KP_5",Sltk::SDL::SDLK_KP_5);
    tolua_constant(tolua_S,"SDLK_KP_6",Sltk::SDL::SDLK_KP_6);
    tolua_constant(tolua_S,"SDLK_KP_7",Sltk::SDL::SDLK_KP_7);
    tolua_constant(tolua_S,"SDLK_KP_8",Sltk::SDL::SDLK_KP_8);
    tolua_constant(tolua_S,"SDLK_KP_9",Sltk::SDL::SDLK_KP_9);
    tolua_constant(tolua_S,"SDLK_KP_0",Sltk::SDL::SDLK_KP_0);
    tolua_constant(tolua_S,"SDLK_KP_PERIOD",Sltk::SDL::SDLK_KP_PERIOD);
    tolua_constant(tolua_S,"SDLK_APPLICATION",Sltk::SDL::SDLK_APPLICATION);
    tolua_constant(tolua_S,"SDLK_POWER",Sltk::SDL::SDLK_POWER);
    tolua_constant(tolua_S,"SDLK_KP_EQUALS",Sltk::SDL::SDLK_KP_EQUALS);
    tolua_constant(tolua_S,"SDLK_F13",Sltk::SDL::SDLK_F13);
    tolua_constant(tolua_S,"SDLK_F14",Sltk::SDL::SDLK_F14);
    tolua_constant(tolua_S,"SDLK_F15",Sltk::SDL::SDLK_F15);
    tolua_constant(tolua_S,"SDLK_F16",Sltk::SDL::SDLK_F16);
    tolua_constant(tolua_S,"SDLK_F17",Sltk::SDL::SDLK_F17);
    tolua_constant(tolua_S,"SDLK_F18",Sltk::SDL::SDLK_F18);
    tolua_constant(tolua_S,"SDLK_F19",Sltk::SDL::SDLK_F19);
    tolua_constant(tolua_S,"SDLK_F20",Sltk::SDL::SDLK_F20);
    tolua_constant(tolua_S,"SDLK_F21",Sltk::SDL::SDLK_F21);
    tolua_constant(tolua_S,"SDLK_F22",Sltk::SDL::SDLK_F22);
    tolua_constant(tolua_S,"SDLK_F23",Sltk::SDL::SDLK_F23);
    tolua_constant(tolua_S,"SDLK_F24",Sltk::SDL::SDLK_F24);
    tolua_constant(tolua_S,"SDLK_EXECUTE",Sltk::SDL::SDLK_EXECUTE);
    tolua_constant(tolua_S,"SDLK_HELP",Sltk::SDL::SDLK_HELP);
    tolua_constant(tolua_S,"SDLK_MENU",Sltk::SDL::SDLK_MENU);
    tolua_constant(tolua_S,"SDLK_SELECT",Sltk::SDL::SDLK_SELECT);
    tolua_constant(tolua_S,"SDLK_STOP",Sltk::SDL::SDLK_STOP);
    tolua_constant(tolua_S,"SDLK_AGAIN",Sltk::SDL::SDLK_AGAIN);
    tolua_constant(tolua_S,"SDLK_UNDO",Sltk::SDL::SDLK_UNDO);
    tolua_constant(tolua_S,"SDLK_CUT",Sltk::SDL::SDLK_CUT);
    tolua_constant(tolua_S,"SDLK_COPY",Sltk::SDL::SDLK_COPY);
    tolua_constant(tolua_S,"SDLK_PASTE",Sltk::SDL::SDLK_PASTE);
    tolua_constant(tolua_S,"SDLK_FIND",Sltk::SDL::SDLK_FIND);
    tolua_constant(tolua_S,"SDLK_MUTE",Sltk::SDL::SDLK_MUTE);
    tolua_constant(tolua_S,"SDLK_VOLUMEUP",Sltk::SDL::SDLK_VOLUMEUP);
    tolua_constant(tolua_S,"SDLK_VOLUMEDOWN",Sltk::SDL::SDLK_VOLUMEDOWN);
    tolua_constant(tolua_S,"SDLK_KP_COMMA",Sltk::SDL::SDLK_KP_COMMA);
    tolua_constant(tolua_S,"SDLK_KP_EQUALSAS400",Sltk::SDL::SDLK_KP_EQUALSAS400);
    tolua_constant(tolua_S,"SDLK_ALTERASE",Sltk::SDL::SDLK_ALTERASE);
    tolua_constant(tolua_S,"SDLK_SYSREQ",Sltk::SDL::SDLK_SYSREQ);
    tolua_constant(tolua_S,"SDLK_CANCEL",Sltk::SDL::SDLK_CANCEL);
    tolua_constant(tolua_S,"SDLK_CLEAR",Sltk::SDL::SDLK_CLEAR);
    tolua_constant(tolua_S,"SDLK_PRIOR",Sltk::SDL::SDLK_PRIOR);
    tolua_constant(tolua_S,"SDLK_RETURN2",Sltk::SDL::SDLK_RETURN2);
    tolua_constant(tolua_S,"SDLK_SEPARATOR",Sltk::SDL::SDLK_SEPARATOR);
    tolua_constant(tolua_S,"SDLK_OUT",Sltk::SDL::SDLK_OUT);
    tolua_constant(tolua_S,"SDLK_OPER",Sltk::SDL::SDLK_OPER);
    tolua_constant(tolua_S,"SDLK_CLEARAGAIN",Sltk::SDL::SDLK_CLEARAGAIN);
    tolua_constant(tolua_S,"SDLK_CRSEL",Sltk::SDL::SDLK_CRSEL);
    tolua_constant(tolua_S,"SDLK_EXSEL",Sltk::SDL::SDLK_EXSEL);
    tolua_constant(tolua_S,"SDLK_KP_00",Sltk::SDL::SDLK_KP_00);
    tolua_constant(tolua_S,"SDLK_KP_000",Sltk::SDL::SDLK_KP_000);
    tolua_constant(tolua_S,"SDLK_THOUSANDSSEPARATOR",Sltk::SDL::SDLK_THOUSANDSSEPARATOR);
    tolua_constant(tolua_S,"SDLK_DECIMALSEPARATOR",Sltk::SDL::SDLK_DECIMALSEPARATOR);
    tolua_constant(tolua_S,"SDLK_CURRENCYUNIT",Sltk::SDL::SDLK_CURRENCYUNIT);
    tolua_constant(tolua_S,"SDLK_CURRENCYSUBUNIT",Sltk::SDL::SDLK_CURRENCYSUBUNIT);
    tolua_constant(tolua_S,"SDLK_KP_LEFTPAREN",Sltk::SDL::SDLK_KP_LEFTPAREN);
    tolua_constant(tolua_S,"SDLK_KP_RIGHTPAREN",Sltk::SDL::SDLK_KP_RIGHTPAREN);
    tolua_constant(tolua_S,"SDLK_KP_LEFTBRACE",Sltk::SDL::SDLK_KP_LEFTBRACE);
    tolua_constant(tolua_S,"SDLK_KP_RIGHTBRACE",Sltk::SDL::SDLK_KP_RIGHTBRACE);
    tolua_constant(tolua_S,"SDLK_KP_TAB",Sltk::SDL::SDLK_KP_TAB);
    tolua_constant(tolua_S,"SDLK_KP_BACKSPACE",Sltk::SDL::SDLK_KP_BACKSPACE);
    tolua_constant(tolua_S,"SDLK_KP_A",Sltk::SDL::SDLK_KP_A);
    tolua_constant(tolua_S,"SDLK_KP_B",Sltk::SDL::SDLK_KP_B);
    tolua_constant(tolua_S,"SDLK_KP_C",Sltk::SDL::SDLK_KP_C);
    tolua_constant(tolua_S,"SDLK_KP_D",Sltk::SDL::SDLK_KP_D);
    tolua_constant(tolua_S,"SDLK_KP_E",Sltk::SDL::SDLK_KP_E);
    tolua_constant(tolua_S,"SDLK_KP_F",Sltk::SDL::SDLK_KP_F);
    tolua_constant(tolua_S,"SDLK_KP_XOR",Sltk::SDL::SDLK_KP_XOR);
    tolua_constant(tolua_S,"SDLK_KP_POWER",Sltk::SDL::SDLK_KP_POWER);
    tolua_constant(tolua_S,"SDLK_KP_PERCENT",Sltk::SDL::SDLK_KP_PERCENT);
    tolua_constant(tolua_S,"SDLK_KP_LESS",Sltk::SDL::SDLK_KP_LESS);
    tolua_constant(tolua_S,"SDLK_KP_GREATER",Sltk::SDL::SDLK_KP_GREATER);
    tolua_constant(tolua_S,"SDLK_KP_AMPERSAND",Sltk::SDL::SDLK_KP_AMPERSAND);
    tolua_constant(tolua_S,"SDLK_KP_DBLAMPERSAND",Sltk::SDL::SDLK_KP_DBLAMPERSAND);
    tolua_constant(tolua_S,"SDLK_KP_VERTICALBAR",Sltk::SDL::SDLK_KP_VERTICALBAR);
    tolua_constant(tolua_S,"SDLK_KP_DBLVERTICALBAR",Sltk::SDL::SDLK_KP_DBLVERTICALBAR);
    tolua_constant(tolua_S,"SDLK_KP_COLON",Sltk::SDL::SDLK_KP_COLON);
    tolua_constant(tolua_S,"SDLK_KP_HASH",Sltk::SDL::SDLK_KP_HASH);
    tolua_constant(tolua_S,"SDLK_KP_SPACE",Sltk::SDL::SDLK_KP_SPACE);
    tolua_constant(tolua_S,"SDLK_KP_AT",Sltk::SDL::SDLK_KP_AT);
    tolua_constant(tolua_S,"SDLK_KP_EXCLAM",Sltk::SDL::SDLK_KP_EXCLAM);
    tolua_constant(tolua_S,"SDLK_KP_MEMSTORE",Sltk::SDL::SDLK_KP_MEMSTORE);
    tolua_constant(tolua_S,"SDLK_KP_MEMRECALL",Sltk::SDL::SDLK_KP_MEMRECALL);
    tolua_constant(tolua_S,"SDLK_KP_MEMCLEAR",Sltk::SDL::SDLK_KP_MEMCLEAR);
    tolua_constant(tolua_S,"SDLK_KP_MEMADD",Sltk::SDL::SDLK_KP_MEMADD);
    tolua_constant(tolua_S,"SDLK_KP_MEMSUBTRACT",Sltk::SDL::SDLK_KP_MEMSUBTRACT);
    tolua_constant(tolua_S,"SDLK_KP_MEMMULTIPLY",Sltk::SDL::SDLK_KP_MEMMULTIPLY);
    tolua_constant(tolua_S,"SDLK_KP_MEMDIVIDE",Sltk::SDL::SDLK_KP_MEMDIVIDE);
    tolua_constant(tolua_S,"SDLK_KP_PLUSMINUS",Sltk::SDL::SDLK_KP_PLUSMINUS);
    tolua_constant(tolua_S,"SDLK_KP_CLEAR",Sltk::SDL::SDLK_KP_CLEAR);
    tolua_constant(tolua_S,"SDLK_KP_CLEARENTRY",Sltk::SDL::SDLK_KP_CLEARENTRY);
    tolua_constant(tolua_S,"SDLK_KP_BINARY",Sltk::SDL::SDLK_KP_BINARY);
    tolua_constant(tolua_S,"SDLK_KP_OCTAL",Sltk::SDL::SDLK_KP_OCTAL);
    tolua_constant(tolua_S,"SDLK_KP_DECIMAL",Sltk::SDL::SDLK_KP_DECIMAL);
    tolua_constant(tolua_S,"SDLK_KP_HEXADECIMAL",Sltk::SDL::SDLK_KP_HEXADECIMAL);
    tolua_constant(tolua_S,"SDLK_LCTRL",Sltk::SDL::SDLK_LCTRL);
    tolua_constant(tolua_S,"SDLK_LSHIFT",Sltk::SDL::SDLK_LSHIFT);
    tolua_constant(tolua_S,"SDLK_LALT",Sltk::SDL::SDLK_LALT);
    tolua_constant(tolua_S,"SDLK_LGUI",Sltk::SDL::SDLK_LGUI);
    tolua_constant(tolua_S,"SDLK_RCTRL",Sltk::SDL::SDLK_RCTRL);
    tolua_constant(tolua_S,"SDLK_RSHIFT",Sltk::SDL::SDLK_RSHIFT);
    tolua_constant(tolua_S,"SDLK_RALT",Sltk::SDL::SDLK_RALT);
    tolua_constant(tolua_S,"SDLK_RGUI",Sltk::SDL::SDLK_RGUI);
    tolua_constant(tolua_S,"SDLK_MODE",Sltk::SDL::SDLK_MODE);
    tolua_constant(tolua_S,"SDLK_AUDIONEXT",Sltk::SDL::SDLK_AUDIONEXT);
    tolua_constant(tolua_S,"SDLK_AUDIOPREV",Sltk::SDL::SDLK_AUDIOPREV);
    tolua_constant(tolua_S,"SDLK_AUDIOSTOP",Sltk::SDL::SDLK_AUDIOSTOP);
    tolua_constant(tolua_S,"SDLK_AUDIOPLAY",Sltk::SDL::SDLK_AUDIOPLAY);
    tolua_constant(tolua_S,"SDLK_AUDIOMUTE",Sltk::SDL::SDLK_AUDIOMUTE);
    tolua_constant(tolua_S,"SDLK_MEDIASELECT",Sltk::SDL::SDLK_MEDIASELECT);
    tolua_constant(tolua_S,"SDLK_WWW",Sltk::SDL::SDLK_WWW);
    tolua_constant(tolua_S,"SDLK_MAIL",Sltk::SDL::SDLK_MAIL);
    tolua_constant(tolua_S,"SDLK_CALCULATOR",Sltk::SDL::SDLK_CALCULATOR);
    tolua_constant(tolua_S,"SDLK_COMPUTER",Sltk::SDL::SDLK_COMPUTER);
    tolua_constant(tolua_S,"SDLK_AC_SEARCH",Sltk::SDL::SDLK_AC_SEARCH);
    tolua_constant(tolua_S,"SDLK_AC_HOME",Sltk::SDL::SDLK_AC_HOME);
    tolua_constant(tolua_S,"SDLK_AC_BACK",Sltk::SDL::SDLK_AC_BACK);
    tolua_constant(tolua_S,"SDLK_AC_FORWARD",Sltk::SDL::SDLK_AC_FORWARD);
    tolua_constant(tolua_S,"SDLK_AC_STOP",Sltk::SDL::SDLK_AC_STOP);
    tolua_constant(tolua_S,"SDLK_AC_REFRESH",Sltk::SDL::SDLK_AC_REFRESH);
    tolua_constant(tolua_S,"SDLK_AC_BOOKMARKS",Sltk::SDL::SDLK_AC_BOOKMARKS);
    tolua_constant(tolua_S,"SDLK_BRIGHTNESSDOWN",Sltk::SDL::SDLK_BRIGHTNESSDOWN);
    tolua_constant(tolua_S,"SDLK_BRIGHTNESSUP",Sltk::SDL::SDLK_BRIGHTNESSUP);
    tolua_constant(tolua_S,"SDLK_DISPLAYSWITCH",Sltk::SDL::SDLK_DISPLAYSWITCH);
    tolua_constant(tolua_S,"SDLK_KBDILLUMTOGGLE",Sltk::SDL::SDLK_KBDILLUMTOGGLE);
    tolua_constant(tolua_S,"SDLK_KBDILLUMDOWN",Sltk::SDL::SDLK_KBDILLUMDOWN);
    tolua_constant(tolua_S,"SDLK_KBDILLUMUP",Sltk::SDL::SDLK_KBDILLUMUP);
    tolua_constant(tolua_S,"SDLK_EJECT",Sltk::SDL::SDLK_EJECT);
    tolua_constant(tolua_S,"SDLK_SLEEP",Sltk::SDL::SDLK_SLEEP);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"SDL",0);
   tolua_beginmodule(tolua_S,"SDL");
    tolua_function(tolua_S,"getMessage",tolua_libSLTK_SDL_Sltk_SDL_getMessage00);
    tolua_function(tolua_S,"getRendererDriverCount",tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverCount00);
    tolua_function(tolua_S,"getRendererDriverName",tolua_libSLTK_SDL_Sltk_SDL_getRendererDriverName00);
    tolua_function(tolua_S,"getRendererName",tolua_libSLTK_SDL_Sltk_SDL_getRendererName00);
    tolua_function(tolua_S,"setColor",tolua_libSLTK_SDL_Sltk_SDL_setColor00);
    tolua_function(tolua_S,"clearScreen",tolua_libSLTK_SDL_Sltk_SDL_clearScreen00);
    tolua_function(tolua_S,"setBlendMode",tolua_libSLTK_SDL_Sltk_SDL_setBlendMode00);
    tolua_function(tolua_S,"defaultEventProcedure",tolua_libSLTK_SDL_Sltk_SDL_defaultEventProcedure00);
    tolua_function(tolua_S,"pushEvent",tolua_libSLTK_SDL_Sltk_SDL_pushEvent00);
    tolua_function(tolua_S,"showCursor",tolua_libSLTK_SDL_Sltk_SDL_showCursor00);
    tolua_function(tolua_S,"startTextInput",tolua_libSLTK_SDL_Sltk_SDL_startTextInput00);
    tolua_function(tolua_S,"isTextInputActive",tolua_libSLTK_SDL_Sltk_SDL_isTextInputActive00);
    tolua_function(tolua_S,"stopTextInput",tolua_libSLTK_SDL_Sltk_SDL_stopTextInput00);
    tolua_function(tolua_S,"setClipboardText",tolua_libSLTK_SDL_Sltk_SDL_setClipboardText00);
    tolua_function(tolua_S,"getClipboardText",tolua_libSLTK_SDL_Sltk_SDL_getClipboardText00);
    tolua_function(tolua_S,"hasClipboardText",tolua_libSLTK_SDL_Sltk_SDL_hasClipboardText00);
    tolua_function(tolua_S,"freeImage",tolua_libSLTK_SDL_Sltk_SDL_freeImage00);
    tolua_function(tolua_S,"loadImage",tolua_libSLTK_SDL_Sltk_SDL_loadImage00);
    tolua_function(tolua_S,"createImage",tolua_libSLTK_SDL_Sltk_SDL_createImage00);
    tolua_function(tolua_S,"saveImage",tolua_libSLTK_SDL_Sltk_SDL_saveImage00);
    tolua_function(tolua_S,"getImageWidth",tolua_libSLTK_SDL_Sltk_SDL_getImageWidth00);
    tolua_function(tolua_S,"getImageHeight",tolua_libSLTK_SDL_Sltk_SDL_getImageHeight00);
    tolua_function(tolua_S,"getImagePitch",tolua_libSLTK_SDL_Sltk_SDL_getImagePitch00);
    tolua_function(tolua_S,"getImagePixels",tolua_libSLTK_SDL_Sltk_SDL_getImagePixels00);
    tolua_function(tolua_S,"setRenderTarget",tolua_libSLTK_SDL_Sltk_SDL_setRenderTarget00);
    tolua_function(tolua_S,"readPixels",tolua_libSLTK_SDL_Sltk_SDL_readPixels00);
    tolua_function(tolua_S,"getPixel",tolua_libSLTK_SDL_Sltk_SDL_getPixel00);
    tolua_function(tolua_S,"drawPixel",tolua_libSLTK_SDL_Sltk_SDL_drawPixel00);
    tolua_function(tolua_S,"drawLine",tolua_libSLTK_SDL_Sltk_SDL_drawLine00);
    tolua_function(tolua_S,"drawRectangle",tolua_libSLTK_SDL_Sltk_SDL_drawRectangle00);
    tolua_function(tolua_S,"fillRectangle",tolua_libSLTK_SDL_Sltk_SDL_fillRectangle00);
    tolua_constant(tolua_S,"WINDOW_FULLSCREEN",Sltk::SDL::WINDOW_FULLSCREEN);
    tolua_constant(tolua_S,"WINDOW_OPENGL",Sltk::SDL::WINDOW_OPENGL);
    tolua_constant(tolua_S,"WINDOW_SHOWN",Sltk::SDL::WINDOW_SHOWN);
    tolua_constant(tolua_S,"WINDOW_HIDDEN",Sltk::SDL::WINDOW_HIDDEN);
    tolua_constant(tolua_S,"WINDOW_BORDERLESS",Sltk::SDL::WINDOW_BORDERLESS);
    tolua_constant(tolua_S,"WINDOW_RESIZABLE",Sltk::SDL::WINDOW_RESIZABLE);
    tolua_constant(tolua_S,"WINDOW_MINIMIZED",Sltk::SDL::WINDOW_MINIMIZED);
    tolua_constant(tolua_S,"WINDOW_MAXIMIZED",Sltk::SDL::WINDOW_MAXIMIZED);
    tolua_constant(tolua_S,"WINDOW_INPUT_GRABBED",Sltk::SDL::WINDOW_INPUT_GRABBED);
    tolua_constant(tolua_S,"WINDOW_INPUT_FOCUS",Sltk::SDL::WINDOW_INPUT_FOCUS);
    tolua_constant(tolua_S,"WINDOW_MOUSE_FOCUS",Sltk::SDL::WINDOW_MOUSE_FOCUS);
    tolua_constant(tolua_S,"WINDOW_FOREIGN",Sltk::SDL::WINDOW_FOREIGN);
    tolua_constant(tolua_S,"WINDOW_ALLOW_HIGHDPI",Sltk::SDL::WINDOW_ALLOW_HIGHDPI);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Window","Sltk::SDL::Window","Sltk::Object",tolua_collect_Sltk__SDL__Window);
    #else
    tolua_cclass(tolua_S,"Window","Sltk::SDL::Window","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Window");
     tolua_variable(tolua_S,"keyRepeatTime",tolua_get_Sltk__SDL__Window_unsigned_keyRepeatTime,tolua_set_Sltk__SDL__Window_unsigned_keyRepeatTime);
     tolua_array(tolua_S,"key",tolua_get_libSLTK_SDL_Sltk_SDL_Window_key,tolua_set_libSLTK_SDL_Sltk_SDL_Window_key);
     tolua_array(tolua_S,"sendKey",tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendKey,tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendKey);
     tolua_array(tolua_S,"mouse",tolua_get_libSLTK_SDL_Sltk_SDL_Window_mouse,tolua_set_libSLTK_SDL_Sltk_SDL_Window_mouse);
     tolua_array(tolua_S,"sendMouse",tolua_get_libSLTK_SDL_Sltk_SDL_Window_sendMouse,tolua_set_libSLTK_SDL_Sltk_SDL_Window_sendMouse);
     tolua_variable(tolua_S,"mouseWheelX",tolua_get_Sltk__SDL__Window_unsigned_mouseWheelX,tolua_set_Sltk__SDL__Window_unsigned_mouseWheelX);
     tolua_variable(tolua_S,"mouseWheelY",tolua_get_Sltk__SDL__Window_unsigned_mouseWheelY,tolua_set_Sltk__SDL__Window_unsigned_mouseWheelY);
     tolua_variable(tolua_S,"mouseX",tolua_get_Sltk__SDL__Window_mouseX,tolua_set_Sltk__SDL__Window_mouseX);
     tolua_variable(tolua_S,"mouseY",tolua_get_Sltk__SDL__Window_mouseY,tolua_set_Sltk__SDL__Window_mouseY);
     tolua_variable(tolua_S,"activated",tolua_get_Sltk__SDL__Window_unsigned_activated,tolua_set_Sltk__SDL__Window_unsigned_activated);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Window_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Window_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Window_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Window_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Window_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Window_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_SDL_Sltk_SDL_Window_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Window_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_SDL_Sltk_SDL_Window_close00);
     tolua_function(tolua_S,"beginScene",tolua_libSLTK_SDL_Sltk_SDL_Window_beginScene00);
     tolua_function(tolua_S,"endScene",tolua_libSLTK_SDL_Sltk_SDL_Window_endScene00);
     tolua_function(tolua_S,"acquireKeyStates",tolua_libSLTK_SDL_Sltk_SDL_Window_acquireKeyStates00);
     tolua_function(tolua_S,"clearKeyStates",tolua_libSLTK_SDL_Sltk_SDL_Window_clearKeyStates00);
     tolua_function(tolua_S,"acquireMouseStates",tolua_libSLTK_SDL_Sltk_SDL_Window_acquireMouseStates00);
     tolua_function(tolua_S,"clearMouseStates",tolua_libSLTK_SDL_Sltk_SDL_Window_clearMouseStates00);
     tolua_function(tolua_S,"warpMouse",tolua_libSLTK_SDL_Sltk_SDL_Window_warpMouse00);
     tolua_function(tolua_S,"getBackgroundColor",tolua_libSLTK_SDL_Sltk_SDL_Window_getBackgroundColor00);
     tolua_function(tolua_S,"getWidth",tolua_libSLTK_SDL_Sltk_SDL_Window_getWidth00);
     tolua_function(tolua_S,"getHeight",tolua_libSLTK_SDL_Sltk_SDL_Window_getHeight00);
     tolua_function(tolua_S,"getX",tolua_libSLTK_SDL_Sltk_SDL_Window_getX00);
     tolua_function(tolua_S,"getY",tolua_libSLTK_SDL_Sltk_SDL_Window_getY00);
     tolua_function(tolua_S,"getID",tolua_libSLTK_SDL_Sltk_SDL_Window_getID00);
     tolua_function(tolua_S,"setBackgroundColor",tolua_libSLTK_SDL_Sltk_SDL_Window_setBackgroundColor00);
     tolua_function(tolua_S,"setTitle",tolua_libSLTK_SDL_Sltk_SDL_Window_setTitle00);
     tolua_function(tolua_S,"setSize",tolua_libSLTK_SDL_Sltk_SDL_Window_setSize00);
     tolua_function(tolua_S,"setPosition",tolua_libSLTK_SDL_Sltk_SDL_Window_setPosition00);
     tolua_function(tolua_S,"setWindowMode",tolua_libSLTK_SDL_Sltk_SDL_Window_setWindowMode00);
     tolua_function(tolua_S,"setIcon",tolua_libSLTK_SDL_Sltk_SDL_Window_setIcon00);
     tolua_function(tolua_S,"getHandle",tolua_libSLTK_SDL_Sltk_SDL_Window_getHandle00);
     tolua_function(tolua_S,"getRenderer",tolua_libSLTK_SDL_Sltk_SDL_Window_getRenderer00);
     tolua_function(tolua_S,"getContext",tolua_libSLTK_SDL_Sltk_SDL_Window_getContext00);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"getWindowFromID",tolua_libSLTK_SDL_Sltk_SDL_getWindowFromID00);
    tolua_function(tolua_S,"getWindowsCount",tolua_libSLTK_SDL_Sltk_SDL_getWindowsCount00);
    tolua_function(tolua_S,"getDrawingWindow",tolua_libSLTK_SDL_Sltk_SDL_getDrawingWindow00);
    tolua_function(tolua_S,"getDrawingRenderer",tolua_libSLTK_SDL_Sltk_SDL_getDrawingRenderer00);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"FPSManager","Sltk::SDL::FPSManager","Sltk::Object",tolua_collect_Sltk__SDL__FPSManager);
    #else
    tolua_cclass(tolua_S,"FPSManager","Sltk::SDL::FPSManager","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"FPSManager");
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_new00_local);
     tolua_function(tolua_S,"setFPS",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_setFPS00);
     tolua_function(tolua_S,"start",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_start00);
     tolua_function(tolua_S,"beginScene",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_beginScene00);
     tolua_function(tolua_S,"endScene",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_endScene00);
     tolua_function(tolua_S,"getFPS",tolua_libSLTK_SDL_Sltk_SDL_FPSManager_getFPS00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Joystick","Sltk::SDL::Joystick","Sltk::Object",tolua_collect_Sltk__SDL__Joystick);
    #else
    tolua_cclass(tolua_S,"Joystick","Sltk::SDL::Joystick","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Joystick");
     tolua_variable(tolua_S,"xAxis",tolua_get_Sltk__SDL__Joystick_xAxis,tolua_set_Sltk__SDL__Joystick_xAxis);
     tolua_variable(tolua_S,"yAxis",tolua_get_Sltk__SDL__Joystick_yAxis,tolua_set_Sltk__SDL__Joystick_yAxis);
     tolua_array(tolua_S,"buttons",tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_buttons,tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_buttons);
     tolua_array(tolua_S,"crossButtons",tolua_get_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons,tolua_set_libSLTK_SDL_Sltk_SDL_Joystick_crossButtons);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Joystick_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_SDL_Sltk_SDL_Joystick_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Joystick_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_SDL_Sltk_SDL_Joystick_close00);
     tolua_function(tolua_S,"acquireInputStates",tolua_libSLTK_SDL_Sltk_SDL_Joystick_acquireInputStates00);
     tolua_function(tolua_S,"getName",tolua_libSLTK_SDL_Sltk_SDL_Joystick_getName00);
     tolua_function(tolua_S,"getAxisCount",tolua_libSLTK_SDL_Sltk_SDL_Joystick_getAxisCount00);
     tolua_function(tolua_S,"getButtonCount",tolua_libSLTK_SDL_Sltk_SDL_Joystick_getButtonCount00);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"getJoystickCount",tolua_libSLTK_SDL_Sltk_SDL_getJoystickCount00);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Mixer","Sltk::SDL::Mixer","Sltk::Object",tolua_collect_Sltk__SDL__Mixer);
    #else
    tolua_cclass(tolua_S,"Mixer","Sltk::SDL::Mixer","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Mixer");
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Mixer_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_SDL_Sltk_SDL_Mixer_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Mixer_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_SDL_Sltk_SDL_Mixer_close00);
     tolua_function(tolua_S,"play",tolua_libSLTK_SDL_Sltk_SDL_Mixer_play00);
     tolua_function(tolua_S,"fadeIn",tolua_libSLTK_SDL_Sltk_SDL_Mixer_fadeIn00);
     tolua_function(tolua_S,"setVolume",tolua_libSLTK_SDL_Sltk_SDL_Mixer_setVolume00);
     tolua_function(tolua_S,"getVolume",tolua_libSLTK_SDL_Sltk_SDL_Mixer_getVolume00);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"allocateChannels",tolua_libSLTK_SDL_Sltk_SDL_allocateChannels00);
    tolua_function(tolua_S,"setChannelVolume",tolua_libSLTK_SDL_Sltk_SDL_setChannelVolume00);
    tolua_function(tolua_S,"getChannelVolume",tolua_libSLTK_SDL_Sltk_SDL_getChannelVolume00);
    tolua_function(tolua_S,"stopChannel",tolua_libSLTK_SDL_Sltk_SDL_stopChannel00);
    tolua_function(tolua_S,"fadeOutChannel",tolua_libSLTK_SDL_Sltk_SDL_fadeOutChannel00);
    tolua_function(tolua_S,"pauseChannel",tolua_libSLTK_SDL_Sltk_SDL_pauseChannel00);
    tolua_function(tolua_S,"resumeChannel",tolua_libSLTK_SDL_Sltk_SDL_resumeChannel00);
    tolua_function(tolua_S,"expireChannel",tolua_libSLTK_SDL_Sltk_SDL_expireChannel00);
    tolua_function(tolua_S,"isChannelPlaying",tolua_libSLTK_SDL_Sltk_SDL_isChannelPlaying00);
    tolua_function(tolua_S,"isChannelPaused",tolua_libSLTK_SDL_Sltk_SDL_isChannelPaused00);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Font","Sltk::SDL::Font","Sltk::Object",tolua_collect_Sltk__SDL__Font);
    #else
    tolua_cclass(tolua_S,"Font","Sltk::SDL::Font","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Font");
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Font_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Font_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Font_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Font_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Font_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Font_new01_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_SDL_Sltk_SDL_Font_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Font_open00);
     tolua_function(tolua_S,"close",tolua_libSLTK_SDL_Sltk_SDL_Font_close00);
     tolua_function(tolua_S,"setStyle",tolua_libSLTK_SDL_Sltk_SDL_Font_setStyle00);
     tolua_function(tolua_S,"createSurface",tolua_libSLTK_SDL_Sltk_SDL_Font_createSurface00);
     tolua_function(tolua_S,"getWidth",tolua_libSLTK_SDL_Sltk_SDL_Font_getWidth00);
     tolua_function(tolua_S,"getHeight",tolua_libSLTK_SDL_Sltk_SDL_Font_getHeight00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Texture","Sltk::SDL::Texture","Sltk::Object",tolua_collect_Sltk__SDL__Texture);
    #else
    tolua_cclass(tolua_S,"Texture","Sltk::SDL::Texture","Sltk::Object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Texture");
     tolua_variable(tolua_S,"centerX",tolua_get_Sltk__SDL__Texture_centerX,tolua_set_Sltk__SDL__Texture_centerX);
     tolua_variable(tolua_S,"centerY",tolua_get_Sltk__SDL__Texture_centerY,tolua_set_Sltk__SDL__Texture_centerY);
     tolua_variable(tolua_S,"angle",tolua_get_Sltk__SDL__Texture_angle,tolua_set_Sltk__SDL__Texture_angle);
     tolua_variable(tolua_S,"flipMode",tolua_get_Sltk__SDL__Texture_unsigned_flipMode,tolua_set_Sltk__SDL__Texture_unsigned_flipMode);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Texture_new00);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Texture_new00_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Texture_new00_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Texture_new01);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Texture_new01_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Texture_new01_local);
     tolua_function(tolua_S,"new",tolua_libSLTK_SDL_Sltk_SDL_Texture_new02);
     tolua_function(tolua_S,"new_local",tolua_libSLTK_SDL_Sltk_SDL_Texture_new02_local);
     tolua_function(tolua_S,".call",tolua_libSLTK_SDL_Sltk_SDL_Texture_new02_local);
     tolua_function(tolua_S,"delete",tolua_libSLTK_SDL_Sltk_SDL_Texture_delete00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Texture_open00);
     tolua_function(tolua_S,"open",tolua_libSLTK_SDL_Sltk_SDL_Texture_open01);
     tolua_function(tolua_S,"close",tolua_libSLTK_SDL_Sltk_SDL_Texture_close00);
     tolua_function(tolua_S,"setBlendMode",tolua_libSLTK_SDL_Sltk_SDL_Texture_setBlendMode00);
     tolua_function(tolua_S,"setColor",tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor00);
     tolua_function(tolua_S,"setColor",tolua_libSLTK_SDL_Sltk_SDL_Texture_setColor01);
     tolua_function(tolua_S,"setAlpha",tolua_libSLTK_SDL_Sltk_SDL_Texture_setAlpha00);
     tolua_function(tolua_S,"getFormat",tolua_libSLTK_SDL_Sltk_SDL_Texture_getFormat00);
     tolua_function(tolua_S,"getPixels",tolua_libSLTK_SDL_Sltk_SDL_Texture_getPixels00);
     tolua_function(tolua_S,"updatePixels",tolua_libSLTK_SDL_Sltk_SDL_Texture_updatePixels00);
     tolua_function(tolua_S,"draw",tolua_libSLTK_SDL_Sltk_SDL_Texture_draw00);
     tolua_function(tolua_S,"getHandle",tolua_libSLTK_SDL_Sltk_SDL_Texture_getHandle00);
     tolua_function(tolua_S,"getWidth",tolua_libSLTK_SDL_Sltk_SDL_Texture_getWidth00);
     tolua_function(tolua_S,"getHeight",tolua_libSLTK_SDL_Sltk_SDL_Texture_getHeight00);
    tolua_endmodule(tolua_S);
    tolua_module(tolua_S,"GL",0);
    tolua_beginmodule(tolua_S,"GL");
     tolua_function(tolua_S,"set2DView",tolua_libSLTK_SDL_Sltk_SDL_GL_set2DView00);
     tolua_function(tolua_S,"set3DView",tolua_libSLTK_SDL_Sltk_SDL_GL_set3DView00);
     tolua_constant(tolua_S,"POINTS",Sltk::SDL::GL::POINTS);
     tolua_constant(tolua_S,"LINES",Sltk::SDL::GL::LINES);
     tolua_constant(tolua_S,"LINE_LOOP",Sltk::SDL::GL::LINE_LOOP);
     tolua_constant(tolua_S,"LINE_STRIP",Sltk::SDL::GL::LINE_STRIP);
     tolua_constant(tolua_S,"TRIANGLES",Sltk::SDL::GL::TRIANGLES);
     tolua_constant(tolua_S,"TRIANGLE_STRIP",Sltk::SDL::GL::TRIANGLE_STRIP);
     tolua_constant(tolua_S,"TRIANGLE_FAN",Sltk::SDL::GL::TRIANGLE_FAN);
     tolua_constant(tolua_S,"QUADS",Sltk::SDL::GL::QUADS);
     tolua_constant(tolua_S,"QUAD_STRIP",Sltk::SDL::GL::QUAD_STRIP);
     tolua_constant(tolua_S,"POLYGON",Sltk::SDL::GL::POLYGON);
     tolua_function(tolua_S,"drawPrimitive",tolua_libSLTK_SDL_Sltk_SDL_GL_drawPrimitive00);
     tolua_function(tolua_S,"drawTriangle",tolua_libSLTK_SDL_Sltk_SDL_GL_drawTriangle00);
     tolua_function(tolua_S,"fillTriangle",tolua_libSLTK_SDL_Sltk_SDL_GL_fillTriangle00);
     tolua_function(tolua_S,"drawCircle",tolua_libSLTK_SDL_Sltk_SDL_GL_drawCircle00);
     tolua_function(tolua_S,"fillCircle",tolua_libSLTK_SDL_Sltk_SDL_GL_fillCircle00);
     tolua_function(tolua_S,"drawOval",tolua_libSLTK_SDL_Sltk_SDL_GL_drawOval00);
     tolua_function(tolua_S,"fillOval",tolua_libSLTK_SDL_Sltk_SDL_GL_fillOval00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libSLTK_SDL (lua_State* tolua_S) {
 return tolua_libSLTK_SDL_open(tolua_S);
};
#endif

