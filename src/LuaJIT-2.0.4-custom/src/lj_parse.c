/*
** Lua parser (source code -> bytecode).
** Copyright (C) 2005-2014 Mike Pall. See Copyright Notice in luajit.h
**
** Major portions taken verbatim or adapted from the Lua interpreter.
** Copyright (C) 1994-2008 Lua.org, PUC-Rio. See Copyright Notice in lua.h
*/
/* customized by yoya. */

#define lj_parse_c
#define LUA_CORE

#include "lj_obj.h"
#include "lj_gc.h"
#include "lj_err.h"
#include "lj_debug.h"
#include "lj_str.h"
#include "lj_tab.h"
#include "lj_func.h"
#include "lj_state.h"
#include "lj_bc.h"
#if LJ_HASFFI
#include "lj_ctype.h"
#endif
#include "lj_lex.h"
#include "lj_parse.h"
#include "lj_vm.h"
#include "lj_vmevent.h"
#include "_parse.h"

/* Anchor string constant to avoid GC. */
GCstr *lj_parse_keepstr(LexState *ls, const char *str, size_t len)
{
	if(lj_obj_sltkmode == 0) return lj_parse_keepstr_lua(ls, str, len);
	else return lj_parse_keepstr_sltk(ls, str, len);
}

#if LJ_HASFFI
/* Anchor cdata to avoid GC. */
void lj_parse_keepcdata(LexState *ls, TValue *tv, GCcdata *cd)
{
	if(lj_obj_sltkmode == 0) lj_parse_keepcdata_lua(ls, tv, cd);
	else lj_parse_keepcdata_sltk(ls, tv, cd);
}
#endif

/* Entry point of bytecode parser. */
GCproto *lj_parse(LexState *ls)
{
	if(lj_obj_sltkmode == 0) return lj_parse_lua(ls);
	else return lj_parse_sltk(ls);
}
