#ifndef _LJ_LEX_WRAP_H
#define _LJ_LEX_WRAP_H

/*** Tokenizer for Lua ***/
LJ_FUNC int lj_lex_setup_lua(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_cleanup_lua(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_next_lua(LexState *ls);
LJ_FUNC LexToken lj_lex_lookahead_lua(LexState *ls);
LJ_FUNC const char *lj_lex_token2str_lua(LexState *ls, LexToken token);
LJ_FUNC void lj_lex_error_lua(LexState *ls, LexToken token, ErrMsg em, va_list args);
LJ_FUNC void lj_lex_init_lua(lua_State *L);

/*** Tokenizer for SeleneTalk ***/
LJ_FUNC int lj_lex_setup_sltk(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_cleanup_sltk(lua_State *L, LexState *ls);
LJ_FUNC void lj_lex_next_sltk(LexState *ls);
LJ_FUNC LexToken lj_lex_lookahead_sltk(LexState *ls);
LJ_FUNC const char *lj_lex_token2str_sltk(LexState *ls, LexToken token);
LJ_FUNC void lj_lex_error_sltk(LexState *ls, LexToken token, ErrMsg em, va_list args);
LJ_FUNC void lj_lex_init_sltk(lua_State *L);

#endif
