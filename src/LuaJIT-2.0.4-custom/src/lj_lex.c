/*
** Lexical analyzer.
** Copyright (C) 2005-2015 Mike Pall. See Copyright Notice in luajit.h
**
** Major portions taken verbatim or adapted from the Lua interpreter.
** Copyright (C) 1994-2008 Lua.org, PUC-Rio. See Copyright Notice in lua.h
*/
/* customized by yoya. */

#define lj_lex_c
#define LUA_CORE

#include "lj_obj.h"
#include "lj_gc.h"
#include "lj_err.h"
#include "lj_str.h"
#if LJ_HASFFI
#include "lj_tab.h"
#include "lj_ctype.h"
#include "lj_cdata.h"
#include "lualib.h"
#endif
#include "lj_state.h"
#include "lj_lex.h"
#include "lj_parse.h"
#include "lj_char.h"
#include "lj_strscan.h"
#include "_lex.h"

/* -- Lexer API ----------------------------------------------------------- */

/* Setup lexer state. */
int lj_lex_setup(lua_State *L, LexState *ls)
{
	if(lj_obj_sltkmode == 0) return lj_lex_setup_lua(L, ls);
	else return lj_lex_setup_sltk(L, ls);
}

/* Cleanup lexer state. */
void lj_lex_cleanup(lua_State *L, LexState *ls)
{
	if(lj_obj_sltkmode == 0) lj_lex_cleanup_lua(L, ls);
	else lj_lex_cleanup_sltk(L, ls);
}

void lj_lex_next(LexState *ls)
{
	if(lj_obj_sltkmode == 0) lj_lex_next_lua(ls);
	else lj_lex_next_sltk(ls);
}

LexToken lj_lex_lookahead(LexState *ls)
{
	if(lj_obj_sltkmode == 0) return lj_lex_lookahead_lua(ls);
	else return lj_lex_lookahead_sltk(ls);
}

const char *lj_lex_token2str(LexState *ls, LexToken token)
{
	if(lj_obj_sltkmode == 0) return lj_lex_token2str_lua(ls, token);
	else return lj_lex_token2str_sltk(ls, token);
}

void lj_lex_error(LexState *ls, LexToken token, ErrMsg em, ...)
{
	va_list argp;
	va_start(argp, em);
	if(lj_obj_sltkmode == 0) lj_lex_error_lua(ls, token, em, argp);
	else lj_lex_error_sltk(ls, token, em, argp);
	va_end(argp);
}

void lj_lex_init(lua_State *L)
{
	if(lj_obj_sltkmode == 0) lj_lex_init_lua(L);
	else lj_lex_init_sltk(L);
}
