#ifndef _LJ_PARSE_WRAP_H
#define _LJ_PARSE_WRAP_H

/*** Parser for Lua ***/
LJ_FUNC GCproto *lj_parse_lua(LexState *ls);
LJ_FUNC GCstr *lj_parse_keepstr_lua(LexState *ls, const char *str, size_t l);
#if LJ_HASFFI
LJ_FUNC void lj_parse_keepcdata_lua(LexState *ls, TValue *tv, GCcdata *cd);
#endif

/*** Parser for SeleneTalk ***/
LJ_FUNC GCproto *lj_parse_sltk(LexState *ls);
LJ_FUNC GCstr *lj_parse_keepstr_sltk(LexState *ls, const char *str, size_t l);
#if LJ_HASFFI
LJ_FUNC void lj_parse_keepcdata_sltk(LexState *ls, TValue *tv, GCcdata *cd);
#endif

#endif
