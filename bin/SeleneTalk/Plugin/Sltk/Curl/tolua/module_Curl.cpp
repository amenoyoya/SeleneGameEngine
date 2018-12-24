/*
** Lua binding: libSLTK_curl
** Generated automatically by tolua++-1.0.92 on 03/14/16 18:46:17.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libSLTK_curl_open (lua_State* tolua_S);

#include "curlopt.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sltk__Curl (lua_State* tolua_S)
{
 Sltk::Curl* self = (Sltk::Curl*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::Curl");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::Binary");
}

/* method: new of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_new00
static int tolua_libSLTK_curl_Sltk_Curl_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Curl* tolua_ret = (Sltk::Curl*)  Mtolua_new((Sltk::Curl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Curl");
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

/* method: new_local of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_new00_local
static int tolua_libSLTK_curl_Sltk_Curl_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Curl* tolua_ret = (Sltk::Curl*)  Mtolua_new((Sltk::Curl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Curl");
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

/* method: delete of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_delete00
static int tolua_libSLTK_curl_Sltk_Curl_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
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

/* method: open of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_open00
static int tolua_libSLTK_curl_Sltk_Curl_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open();
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

/* method: close of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_close00
static int tolua_libSLTK_curl_Sltk_Curl_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
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

/* method: set of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_set00
static int tolua_libSLTK_curl_Sltk_Curl_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
  unsigned long option = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* val = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->set(option,val);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_set01
static int tolua_libSLTK_curl_Sltk_Curl_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
  unsigned long option = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
   long val = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->set(option,val);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_curl_Sltk_Curl_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_reset00
static int tolua_libSLTK_curl_Sltk_Curl_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->reset();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: execute of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_execute00
static int tolua_libSLTK_curl_Sltk_Curl_execute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'execute'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->execute();
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

/* method: getData of class  Sltk::Curl */
#ifndef TOLUA_DISABLE_tolua_libSLTK_curl_Sltk_Curl_getData00
static int tolua_libSLTK_curl_Sltk_Curl_getData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Curl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Curl* self = (Sltk::Curl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getData'", NULL);
#endif
  {
   Sltk::Binary* tolua_ret = (Sltk::Binary*)  self->getData();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Binary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libSLTK_curl_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_constant(tolua_S,"CURLINFO_TEXT",Sltk::CURLINFO_TEXT);
   tolua_constant(tolua_S,"CURLINFO_HEADER_IN",Sltk::CURLINFO_HEADER_IN);
   tolua_constant(tolua_S,"CURLINFO_HEADER_OUT",Sltk::CURLINFO_HEADER_OUT);
   tolua_constant(tolua_S,"CURLINFO_DATA_IN",Sltk::CURLINFO_DATA_IN);
   tolua_constant(tolua_S,"CURLINFO_DATA_OUT",Sltk::CURLINFO_DATA_OUT);
   tolua_constant(tolua_S,"CURLINFO_SSL_DATA_IN",Sltk::CURLINFO_SSL_DATA_IN);
   tolua_constant(tolua_S,"CURLINFO_SSL_DATA_OUT",Sltk::CURLINFO_SSL_DATA_OUT);
   tolua_constant(tolua_S,"CURLINFO_END",Sltk::CURLINFO_END);
   tolua_constant(tolua_S,"CURLOPT_WRITEDATA",Sltk::CURLOPT_WRITEDATA);
   tolua_constant(tolua_S,"CURLOPT_URL",Sltk::CURLOPT_URL);
   tolua_constant(tolua_S,"CURLOPT_PORT",Sltk::CURLOPT_PORT);
   tolua_constant(tolua_S,"CURLOPT_PROXY",Sltk::CURLOPT_PROXY);
   tolua_constant(tolua_S,"CURLOPT_USERPWD",Sltk::CURLOPT_USERPWD);
   tolua_constant(tolua_S,"CURLOPT_PROXYUSERPWD",Sltk::CURLOPT_PROXYUSERPWD);
   tolua_constant(tolua_S,"CURLOPT_RANGE",Sltk::CURLOPT_RANGE);
   tolua_constant(tolua_S,"CURLOPT_READDATA",Sltk::CURLOPT_READDATA);
   tolua_constant(tolua_S,"CURLOPT_ERRORBUFFER",Sltk::CURLOPT_ERRORBUFFER);
   tolua_constant(tolua_S,"CURLOPT_WRITEFUNCTION",Sltk::CURLOPT_WRITEFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_READFUNCTION",Sltk::CURLOPT_READFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_TIMEOUT",Sltk::CURLOPT_TIMEOUT);
   tolua_constant(tolua_S,"CURLOPT_INFILESIZE",Sltk::CURLOPT_INFILESIZE);
   tolua_constant(tolua_S,"CURLOPT_POSTFIELDS",Sltk::CURLOPT_POSTFIELDS);
   tolua_constant(tolua_S,"CURLOPT_REFERER",Sltk::CURLOPT_REFERER);
   tolua_constant(tolua_S,"CURLOPT_FTPPORT",Sltk::CURLOPT_FTPPORT);
   tolua_constant(tolua_S,"CURLOPT_USERAGENT",Sltk::CURLOPT_USERAGENT);
   tolua_constant(tolua_S,"CURLOPT_LOW_SPEED_LIMIT",Sltk::CURLOPT_LOW_SPEED_LIMIT);
   tolua_constant(tolua_S,"CURLOPT_LOW_SPEED_TIME",Sltk::CURLOPT_LOW_SPEED_TIME);
   tolua_constant(tolua_S,"CURLOPT_RESUME_FROM",Sltk::CURLOPT_RESUME_FROM);
   tolua_constant(tolua_S,"CURLOPT_COOKIE",Sltk::CURLOPT_COOKIE);
   tolua_constant(tolua_S,"CURLOPT_HTTPHEADER",Sltk::CURLOPT_HTTPHEADER);
   tolua_constant(tolua_S,"CURLOPT_HTTPPOST",Sltk::CURLOPT_HTTPPOST);
   tolua_constant(tolua_S,"CURLOPT_SSLCERT",Sltk::CURLOPT_SSLCERT);
   tolua_constant(tolua_S,"CURLOPT_KEYPASSWD",Sltk::CURLOPT_KEYPASSWD);
   tolua_constant(tolua_S,"CURLOPT_CRLF",Sltk::CURLOPT_CRLF);
   tolua_constant(tolua_S,"CURLOPT_QUOTE",Sltk::CURLOPT_QUOTE);
   tolua_constant(tolua_S,"CURLOPT_HEADERDATA",Sltk::CURLOPT_HEADERDATA);
   tolua_constant(tolua_S,"CURLOPT_COOKIEFILE",Sltk::CURLOPT_COOKIEFILE);
   tolua_constant(tolua_S,"CURLOPT_SSLVERSION",Sltk::CURLOPT_SSLVERSION);
   tolua_constant(tolua_S,"CURLOPT_TIMECONDITION",Sltk::CURLOPT_TIMECONDITION);
   tolua_constant(tolua_S,"CURLOPT_TIMEVALUE",Sltk::CURLOPT_TIMEVALUE);
   tolua_constant(tolua_S,"CURLOPT_CUSTOMREQUEST",Sltk::CURLOPT_CUSTOMREQUEST);
   tolua_constant(tolua_S,"CURLOPT_STDERR",Sltk::CURLOPT_STDERR);
   tolua_constant(tolua_S,"CURLOPT_POSTQUOTE",Sltk::CURLOPT_POSTQUOTE);
   tolua_constant(tolua_S,"CURLOPT_OBSOLETE40",Sltk::CURLOPT_OBSOLETE40);
   tolua_constant(tolua_S,"CURLOPT_VERBOSE",Sltk::CURLOPT_VERBOSE);
   tolua_constant(tolua_S,"CURLOPT_HEADER",Sltk::CURLOPT_HEADER);
   tolua_constant(tolua_S,"CURLOPT_NOPROGRESS",Sltk::CURLOPT_NOPROGRESS);
   tolua_constant(tolua_S,"CURLOPT_NOBODY",Sltk::CURLOPT_NOBODY);
   tolua_constant(tolua_S,"CURLOPT_FAILONERROR",Sltk::CURLOPT_FAILONERROR);
   tolua_constant(tolua_S,"CURLOPT_UPLOAD",Sltk::CURLOPT_UPLOAD);
   tolua_constant(tolua_S,"CURLOPT_POST",Sltk::CURLOPT_POST);
   tolua_constant(tolua_S,"CURLOPT_DIRLISTONLY",Sltk::CURLOPT_DIRLISTONLY);
   tolua_constant(tolua_S,"CURLOPT_APPEND",Sltk::CURLOPT_APPEND);
   tolua_constant(tolua_S,"CURLOPT_NETRC",Sltk::CURLOPT_NETRC);
   tolua_constant(tolua_S,"CURLOPT_FOLLOWLOCATION",Sltk::CURLOPT_FOLLOWLOCATION);
   tolua_constant(tolua_S,"CURLOPT_TRANSFERTEXT",Sltk::CURLOPT_TRANSFERTEXT);
   tolua_constant(tolua_S,"CURLOPT_PUT",Sltk::CURLOPT_PUT);
   tolua_constant(tolua_S,"CURLOPT_PROGRESSFUNCTION",Sltk::CURLOPT_PROGRESSFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_PROGRESSDATA",Sltk::CURLOPT_PROGRESSDATA);
   tolua_constant(tolua_S,"CURLOPT_AUTOREFERER",Sltk::CURLOPT_AUTOREFERER);
   tolua_constant(tolua_S,"CURLOPT_PROXYPORT",Sltk::CURLOPT_PROXYPORT);
   tolua_constant(tolua_S,"CURLOPT_POSTFIELDSIZE",Sltk::CURLOPT_POSTFIELDSIZE);
   tolua_constant(tolua_S,"CURLOPT_HTTPPROXYTUNNEL",Sltk::CURLOPT_HTTPPROXYTUNNEL);
   tolua_constant(tolua_S,"CURLOPT_INTERFACE",Sltk::CURLOPT_INTERFACE);
   tolua_constant(tolua_S,"CURLOPT_KRBLEVEL",Sltk::CURLOPT_KRBLEVEL);
   tolua_constant(tolua_S,"CURLOPT_SSL_VERIFYPEER",Sltk::CURLOPT_SSL_VERIFYPEER);
   tolua_constant(tolua_S,"CURLOPT_CAINFO",Sltk::CURLOPT_CAINFO);
   tolua_constant(tolua_S,"CURLOPT_MAXREDIRS",Sltk::CURLOPT_MAXREDIRS);
   tolua_constant(tolua_S,"CURLOPT_FILETIME",Sltk::CURLOPT_FILETIME);
   tolua_constant(tolua_S,"CURLOPT_TELNETOPTIONS",Sltk::CURLOPT_TELNETOPTIONS);
   tolua_constant(tolua_S,"CURLOPT_MAXCONNECTS",Sltk::CURLOPT_MAXCONNECTS);
   tolua_constant(tolua_S,"CURLOPT_OBSOLETE72",Sltk::CURLOPT_OBSOLETE72);
   tolua_constant(tolua_S,"CURLOPT_FRESH_CONNECT",Sltk::CURLOPT_FRESH_CONNECT);
   tolua_constant(tolua_S,"CURLOPT_FORBID_REUSE",Sltk::CURLOPT_FORBID_REUSE);
   tolua_constant(tolua_S,"CURLOPT_RANDOM_FILE",Sltk::CURLOPT_RANDOM_FILE);
   tolua_constant(tolua_S,"CURLOPT_EGDSOCKET",Sltk::CURLOPT_EGDSOCKET);
   tolua_constant(tolua_S,"CURLOPT_CONNECTTIMEOUT",Sltk::CURLOPT_CONNECTTIMEOUT);
   tolua_constant(tolua_S,"CURLOPT_HEADERFUNCTION",Sltk::CURLOPT_HEADERFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_HTTPGET",Sltk::CURLOPT_HTTPGET);
   tolua_constant(tolua_S,"CURLOPT_SSL_VERIFYHOST",Sltk::CURLOPT_SSL_VERIFYHOST);
   tolua_constant(tolua_S,"CURLOPT_COOKIEJAR",Sltk::CURLOPT_COOKIEJAR);
   tolua_constant(tolua_S,"CURLOPT_SSL_CIPHER_LIST",Sltk::CURLOPT_SSL_CIPHER_LIST);
   tolua_constant(tolua_S,"CURLOPT_HTTP_VERSION",Sltk::CURLOPT_HTTP_VERSION);
   tolua_constant(tolua_S,"CURLOPT_FTP_USE_EPSV",Sltk::CURLOPT_FTP_USE_EPSV);
   tolua_constant(tolua_S,"CURLOPT_SSLCERTTYPE",Sltk::CURLOPT_SSLCERTTYPE);
   tolua_constant(tolua_S,"CURLOPT_SSLKEY",Sltk::CURLOPT_SSLKEY);
   tolua_constant(tolua_S,"CURLOPT_SSLKEYTYPE",Sltk::CURLOPT_SSLKEYTYPE);
   tolua_constant(tolua_S,"CURLOPT_SSLENGINE",Sltk::CURLOPT_SSLENGINE);
   tolua_constant(tolua_S,"CURLOPT_SSLENGINE_DEFAULT",Sltk::CURLOPT_SSLENGINE_DEFAULT);
   tolua_constant(tolua_S,"CURLOPT_DNS_USE_GLOBAL_CACHE",Sltk::CURLOPT_DNS_USE_GLOBAL_CACHE);
   tolua_constant(tolua_S,"CURLOPT_DNS_CACHE_TIMEOUT",Sltk::CURLOPT_DNS_CACHE_TIMEOUT);
   tolua_constant(tolua_S,"CURLOPT_PREQUOTE",Sltk::CURLOPT_PREQUOTE);
   tolua_constant(tolua_S,"CURLOPT_DEBUGFUNCTION",Sltk::CURLOPT_DEBUGFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_DEBUGDATA",Sltk::CURLOPT_DEBUGDATA);
   tolua_constant(tolua_S,"CURLOPT_COOKIESESSION",Sltk::CURLOPT_COOKIESESSION);
   tolua_constant(tolua_S,"CURLOPT_CAPATH",Sltk::CURLOPT_CAPATH);
   tolua_constant(tolua_S,"CURLOPT_BUFFERSIZE",Sltk::CURLOPT_BUFFERSIZE);
   tolua_constant(tolua_S,"CURLOPT_NOSIGNAL",Sltk::CURLOPT_NOSIGNAL);
   tolua_constant(tolua_S,"CURLOPT_SHARE",Sltk::CURLOPT_SHARE);
   tolua_constant(tolua_S,"CURLOPT_PROXYTYPE",Sltk::CURLOPT_PROXYTYPE);
   tolua_constant(tolua_S,"CURLOPT_ACCEPT_ENCODING",Sltk::CURLOPT_ACCEPT_ENCODING);
   tolua_constant(tolua_S,"CURLOPT_PRIVATE",Sltk::CURLOPT_PRIVATE);
   tolua_constant(tolua_S,"CURLOPT_HTTP200ALIASES",Sltk::CURLOPT_HTTP200ALIASES);
   tolua_constant(tolua_S,"CURLOPT_UNRESTRICTED_AUTH",Sltk::CURLOPT_UNRESTRICTED_AUTH);
   tolua_constant(tolua_S,"CURLOPT_FTP_USE_EPRT",Sltk::CURLOPT_FTP_USE_EPRT);
   tolua_constant(tolua_S,"CURLOPT_HTTPAUTH",Sltk::CURLOPT_HTTPAUTH);
   tolua_constant(tolua_S,"CURLOPT_SSL_CTX_FUNCTION",Sltk::CURLOPT_SSL_CTX_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_SSL_CTX_DATA",Sltk::CURLOPT_SSL_CTX_DATA);
   tolua_constant(tolua_S,"CURLOPT_FTP_CREATE_MISSING_DIRS",Sltk::CURLOPT_FTP_CREATE_MISSING_DIRS);
   tolua_constant(tolua_S,"CURLOPT_PROXYAUTH",Sltk::CURLOPT_PROXYAUTH);
   tolua_constant(tolua_S,"CURLOPT_FTP_RESPONSE_TIMEOUT",Sltk::CURLOPT_FTP_RESPONSE_TIMEOUT);
   tolua_constant(tolua_S,"CURLOPT_IPRESOLVE",Sltk::CURLOPT_IPRESOLVE);
   tolua_constant(tolua_S,"CURLOPT_MAXFILESIZE",Sltk::CURLOPT_MAXFILESIZE);
   tolua_constant(tolua_S,"CURLOPT_INFILESIZE_LARGE",Sltk::CURLOPT_INFILESIZE_LARGE);
   tolua_constant(tolua_S,"CURLOPT_RESUME_FROM_LARGE",Sltk::CURLOPT_RESUME_FROM_LARGE);
   tolua_constant(tolua_S,"CURLOPT_MAXFILESIZE_LARGE",Sltk::CURLOPT_MAXFILESIZE_LARGE);
   tolua_constant(tolua_S,"CURLOPT_NETRC_FILE",Sltk::CURLOPT_NETRC_FILE);
   tolua_constant(tolua_S,"CURLOPT_USE_SSL",Sltk::CURLOPT_USE_SSL);
   tolua_constant(tolua_S,"CURLOPT_POSTFIELDSIZE_LARGE",Sltk::CURLOPT_POSTFIELDSIZE_LARGE);
   tolua_constant(tolua_S,"CURLOPT_TCP_NODELAY",Sltk::CURLOPT_TCP_NODELAY);
   tolua_constant(tolua_S,"CURLOPT_FTPSSLAUTH",Sltk::CURLOPT_FTPSSLAUTH);
   tolua_constant(tolua_S,"CURLOPT_IOCTLFUNCTION",Sltk::CURLOPT_IOCTLFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_IOCTLDATA",Sltk::CURLOPT_IOCTLDATA);
   tolua_constant(tolua_S,"CURLOPT_FTP_ACCOUNT",Sltk::CURLOPT_FTP_ACCOUNT);
   tolua_constant(tolua_S,"CURLOPT_COOKIELIST",Sltk::CURLOPT_COOKIELIST);
   tolua_constant(tolua_S,"CURLOPT_IGNORE_CONTENT_LENGTH",Sltk::CURLOPT_IGNORE_CONTENT_LENGTH);
   tolua_constant(tolua_S,"CURLOPT_FTP_SKIP_PASV_IP",Sltk::CURLOPT_FTP_SKIP_PASV_IP);
   tolua_constant(tolua_S,"CURLOPT_FTP_FILEMETHOD",Sltk::CURLOPT_FTP_FILEMETHOD);
   tolua_constant(tolua_S,"CURLOPT_LOCALPORT",Sltk::CURLOPT_LOCALPORT);
   tolua_constant(tolua_S,"CURLOPT_LOCALPORTRANGE",Sltk::CURLOPT_LOCALPORTRANGE);
   tolua_constant(tolua_S,"CURLOPT_CONNECT_ONLY",Sltk::CURLOPT_CONNECT_ONLY);
   tolua_constant(tolua_S,"CURLOPT_CONV_FROM_NETWORK_FUNCTION",Sltk::CURLOPT_CONV_FROM_NETWORK_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_CONV_TO_NETWORK_FUNCTION",Sltk::CURLOPT_CONV_TO_NETWORK_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_CONV_FROM_UTF8_FUNCTION",Sltk::CURLOPT_CONV_FROM_UTF8_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_MAX_SEND_SPEED_LARGE",Sltk::CURLOPT_MAX_SEND_SPEED_LARGE);
   tolua_constant(tolua_S,"CURLOPT_MAX_RECV_SPEED_LARGE",Sltk::CURLOPT_MAX_RECV_SPEED_LARGE);
   tolua_constant(tolua_S,"CURLOPT_FTP_ALTERNATIVE_TO_USER",Sltk::CURLOPT_FTP_ALTERNATIVE_TO_USER);
   tolua_constant(tolua_S,"CURLOPT_SOCKOPTFUNCTION",Sltk::CURLOPT_SOCKOPTFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_SOCKOPTDATA",Sltk::CURLOPT_SOCKOPTDATA);
   tolua_constant(tolua_S,"CURLOPT_SSL_SESSIONID_CACHE",Sltk::CURLOPT_SSL_SESSIONID_CACHE);
   tolua_constant(tolua_S,"CURLOPT_SSH_AUTH_TYPES",Sltk::CURLOPT_SSH_AUTH_TYPES);
   tolua_constant(tolua_S,"CURLOPT_SSH_PUBLIC_KEYFILE",Sltk::CURLOPT_SSH_PUBLIC_KEYFILE);
   tolua_constant(tolua_S,"CURLOPT_SSH_PRIVATE_KEYFILE",Sltk::CURLOPT_SSH_PRIVATE_KEYFILE);
   tolua_constant(tolua_S,"CURLOPT_FTP_SSL_CCC",Sltk::CURLOPT_FTP_SSL_CCC);
   tolua_constant(tolua_S,"CURLOPT_TIMEOUT_MS",Sltk::CURLOPT_TIMEOUT_MS);
   tolua_constant(tolua_S,"CURLOPT_CONNECTTIMEOUT_MS",Sltk::CURLOPT_CONNECTTIMEOUT_MS);
   tolua_constant(tolua_S,"CURLOPT_HTTP_TRANSFER_DECODING",Sltk::CURLOPT_HTTP_TRANSFER_DECODING);
   tolua_constant(tolua_S,"CURLOPT_HTTP_CONTENT_DECODING",Sltk::CURLOPT_HTTP_CONTENT_DECODING);
   tolua_constant(tolua_S,"CURLOPT_NEW_FILE_PERMS",Sltk::CURLOPT_NEW_FILE_PERMS);
   tolua_constant(tolua_S,"CURLOPT_NEW_DIRECTORY_PERMS",Sltk::CURLOPT_NEW_DIRECTORY_PERMS);
   tolua_constant(tolua_S,"CURLOPT_POSTREDIR",Sltk::CURLOPT_POSTREDIR);
   tolua_constant(tolua_S,"CURLOPT_SSH_HOST_PUBLIC_KEY_MD5",Sltk::CURLOPT_SSH_HOST_PUBLIC_KEY_MD5);
   tolua_constant(tolua_S,"CURLOPT_OPENSOCKETFUNCTION",Sltk::CURLOPT_OPENSOCKETFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_OPENSOCKETDATA",Sltk::CURLOPT_OPENSOCKETDATA);
   tolua_constant(tolua_S,"CURLOPT_COPYPOSTFIELDS",Sltk::CURLOPT_COPYPOSTFIELDS);
   tolua_constant(tolua_S,"CURLOPT_PROXY_TRANSFER_MODE",Sltk::CURLOPT_PROXY_TRANSFER_MODE);
   tolua_constant(tolua_S,"CURLOPT_SEEKFUNCTION",Sltk::CURLOPT_SEEKFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_SEEKDATA",Sltk::CURLOPT_SEEKDATA);
   tolua_constant(tolua_S,"CURLOPT_CRLFILE",Sltk::CURLOPT_CRLFILE);
   tolua_constant(tolua_S,"CURLOPT_ISSUERCERT",Sltk::CURLOPT_ISSUERCERT);
   tolua_constant(tolua_S,"CURLOPT_ADDRESS_SCOPE",Sltk::CURLOPT_ADDRESS_SCOPE);
   tolua_constant(tolua_S,"CURLOPT_CERTINFO",Sltk::CURLOPT_CERTINFO);
   tolua_constant(tolua_S,"CURLOPT_USERNAME",Sltk::CURLOPT_USERNAME);
   tolua_constant(tolua_S,"CURLOPT_PASSWORD",Sltk::CURLOPT_PASSWORD);
   tolua_constant(tolua_S,"CURLOPT_PROXYUSERNAME",Sltk::CURLOPT_PROXYUSERNAME);
   tolua_constant(tolua_S,"CURLOPT_PROXYPASSWORD",Sltk::CURLOPT_PROXYPASSWORD);
   tolua_constant(tolua_S,"CURLOPT_NOPROXY",Sltk::CURLOPT_NOPROXY);
   tolua_constant(tolua_S,"CURLOPT_TFTP_BLKSIZE",Sltk::CURLOPT_TFTP_BLKSIZE);
   tolua_constant(tolua_S,"CURLOPT_SOCKS5_GSSAPI_SERVICE",Sltk::CURLOPT_SOCKS5_GSSAPI_SERVICE);
   tolua_constant(tolua_S,"CURLOPT_SOCKS5_GSSAPI_NEC",Sltk::CURLOPT_SOCKS5_GSSAPI_NEC);
   tolua_constant(tolua_S,"CURLOPT_PROTOCOLS",Sltk::CURLOPT_PROTOCOLS);
   tolua_constant(tolua_S,"CURLOPT_REDIR_PROTOCOLS",Sltk::CURLOPT_REDIR_PROTOCOLS);
   tolua_constant(tolua_S,"CURLOPT_SSH_KNOWNHOSTS",Sltk::CURLOPT_SSH_KNOWNHOSTS);
   tolua_constant(tolua_S,"CURLOPT_SSH_KEYFUNCTION",Sltk::CURLOPT_SSH_KEYFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_SSH_KEYDATA",Sltk::CURLOPT_SSH_KEYDATA);
   tolua_constant(tolua_S,"CURLOPT_MAIL_FROM",Sltk::CURLOPT_MAIL_FROM);
   tolua_constant(tolua_S,"CURLOPT_MAIL_RCPT",Sltk::CURLOPT_MAIL_RCPT);
   tolua_constant(tolua_S,"CURLOPT_FTP_USE_PRET",Sltk::CURLOPT_FTP_USE_PRET);
   tolua_constant(tolua_S,"CURLOPT_RTSP_REQUEST",Sltk::CURLOPT_RTSP_REQUEST);
   tolua_constant(tolua_S,"CURLOPT_RTSP_SESSION_ID",Sltk::CURLOPT_RTSP_SESSION_ID);
   tolua_constant(tolua_S,"CURLOPT_RTSP_STREAM_URI",Sltk::CURLOPT_RTSP_STREAM_URI);
   tolua_constant(tolua_S,"CURLOPT_RTSP_TRANSPORT",Sltk::CURLOPT_RTSP_TRANSPORT);
   tolua_constant(tolua_S,"CURLOPT_RTSP_CLIENT_CSEQ",Sltk::CURLOPT_RTSP_CLIENT_CSEQ);
   tolua_constant(tolua_S,"CURLOPT_RTSP_SERVER_CSEQ",Sltk::CURLOPT_RTSP_SERVER_CSEQ);
   tolua_constant(tolua_S,"CURLOPT_INTERLEAVEDATA",Sltk::CURLOPT_INTERLEAVEDATA);
   tolua_constant(tolua_S,"CURLOPT_INTERLEAVEFUNCTION",Sltk::CURLOPT_INTERLEAVEFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_WILDCARDMATCH",Sltk::CURLOPT_WILDCARDMATCH);
   tolua_constant(tolua_S,"CURLOPT_CHUNK_BGN_FUNCTION",Sltk::CURLOPT_CHUNK_BGN_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_CHUNK_END_FUNCTION",Sltk::CURLOPT_CHUNK_END_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_FNMATCH_FUNCTION",Sltk::CURLOPT_FNMATCH_FUNCTION);
   tolua_constant(tolua_S,"CURLOPT_CHUNK_DATA",Sltk::CURLOPT_CHUNK_DATA);
   tolua_constant(tolua_S,"CURLOPT_FNMATCH_DATA",Sltk::CURLOPT_FNMATCH_DATA);
   tolua_constant(tolua_S,"CURLOPT_RESOLVE",Sltk::CURLOPT_RESOLVE);
   tolua_constant(tolua_S,"CURLOPT_TLSAUTH_USERNAME",Sltk::CURLOPT_TLSAUTH_USERNAME);
   tolua_constant(tolua_S,"CURLOPT_TLSAUTH_PASSWORD",Sltk::CURLOPT_TLSAUTH_PASSWORD);
   tolua_constant(tolua_S,"CURLOPT_TLSAUTH_TYPE",Sltk::CURLOPT_TLSAUTH_TYPE);
   tolua_constant(tolua_S,"CURLOPT_TRANSFER_ENCODING",Sltk::CURLOPT_TRANSFER_ENCODING);
   tolua_constant(tolua_S,"CURLOPT_CLOSESOCKETFUNCTION",Sltk::CURLOPT_CLOSESOCKETFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_CLOSESOCKETDATA",Sltk::CURLOPT_CLOSESOCKETDATA);
   tolua_constant(tolua_S,"CURLOPT_GSSAPI_DELEGATION",Sltk::CURLOPT_GSSAPI_DELEGATION);
   tolua_constant(tolua_S,"CURLOPT_DNS_SERVERS",Sltk::CURLOPT_DNS_SERVERS);
   tolua_constant(tolua_S,"CURLOPT_ACCEPTTIMEOUT_MS",Sltk::CURLOPT_ACCEPTTIMEOUT_MS);
   tolua_constant(tolua_S,"CURLOPT_TCP_KEEPALIVE",Sltk::CURLOPT_TCP_KEEPALIVE);
   tolua_constant(tolua_S,"CURLOPT_TCP_KEEPIDLE",Sltk::CURLOPT_TCP_KEEPIDLE);
   tolua_constant(tolua_S,"CURLOPT_TCP_KEEPINTVL",Sltk::CURLOPT_TCP_KEEPINTVL);
   tolua_constant(tolua_S,"CURLOPT_SSL_OPTIONS",Sltk::CURLOPT_SSL_OPTIONS);
   tolua_constant(tolua_S,"CURLOPT_MAIL_AUTH",Sltk::CURLOPT_MAIL_AUTH);
   tolua_constant(tolua_S,"CURLOPT_SASL_IR",Sltk::CURLOPT_SASL_IR);
   tolua_constant(tolua_S,"CURLOPT_XFERINFOFUNCTION",Sltk::CURLOPT_XFERINFOFUNCTION);
   tolua_constant(tolua_S,"CURLOPT_XOAUTH2_BEARER",Sltk::CURLOPT_XOAUTH2_BEARER);
   tolua_constant(tolua_S,"CURLOPT_DNS_INTERFACE",Sltk::CURLOPT_DNS_INTERFACE);
   tolua_constant(tolua_S,"CURLOPT_DNS_LOCAL_IP4",Sltk::CURLOPT_DNS_LOCAL_IP4);
   tolua_constant(tolua_S,"CURLOPT_DNS_LOCAL_IP6",Sltk::CURLOPT_DNS_LOCAL_IP6);
   tolua_constant(tolua_S,"CURLOPT_LOGIN_OPTIONS",Sltk::CURLOPT_LOGIN_OPTIONS);
   tolua_constant(tolua_S,"CURLOPT_SSL_ENABLE_NPN",Sltk::CURLOPT_SSL_ENABLE_NPN);
   tolua_constant(tolua_S,"CURLOPT_SSL_ENABLE_ALPN",Sltk::CURLOPT_SSL_ENABLE_ALPN);
   tolua_constant(tolua_S,"CURLOPT_EXPECT_100_TIMEOUT_MS",Sltk::CURLOPT_EXPECT_100_TIMEOUT_MS);
   tolua_constant(tolua_S,"CURLOPT_PROXYHEADER",Sltk::CURLOPT_PROXYHEADER);
   tolua_constant(tolua_S,"CURLOPT_HEADEROPT",Sltk::CURLOPT_HEADEROPT);
   tolua_constant(tolua_S,"CURLOPT_PINNEDPUBLICKEY",Sltk::CURLOPT_PINNEDPUBLICKEY);
   tolua_constant(tolua_S,"CURLOPT_UNIX_SOCKET_PATH",Sltk::CURLOPT_UNIX_SOCKET_PATH);
   tolua_constant(tolua_S,"CURLOPT_SSL_VERIFYSTATUS",Sltk::CURLOPT_SSL_VERIFYSTATUS);
   tolua_constant(tolua_S,"CURLOPT_SSL_FALSESTART",Sltk::CURLOPT_SSL_FALSESTART);
   tolua_constant(tolua_S,"CURLOPT_PATH_AS_IS",Sltk::CURLOPT_PATH_AS_IS);
   tolua_constant(tolua_S,"CURLOPT_PROXY_SERVICE_NAME",Sltk::CURLOPT_PROXY_SERVICE_NAME);
   tolua_constant(tolua_S,"CURLOPT_SERVICE_NAME",Sltk::CURLOPT_SERVICE_NAME);
   tolua_constant(tolua_S,"CURLOPT_PIPEWAIT",Sltk::CURLOPT_PIPEWAIT);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Curl","Sltk::Curl","Sltk::Object",tolua_collect_Sltk__Curl);
   #else
   tolua_cclass(tolua_S,"Curl","Sltk::Curl","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Curl");
    tolua_function(tolua_S,"new",tolua_libSLTK_curl_Sltk_Curl_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_curl_Sltk_Curl_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_curl_Sltk_Curl_new00_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_curl_Sltk_Curl_delete00);
    tolua_function(tolua_S,"open",tolua_libSLTK_curl_Sltk_Curl_open00);
    tolua_function(tolua_S,"close",tolua_libSLTK_curl_Sltk_Curl_close00);
    tolua_function(tolua_S,"set",tolua_libSLTK_curl_Sltk_Curl_set00);
    tolua_function(tolua_S,"set",tolua_libSLTK_curl_Sltk_Curl_set01);
    tolua_function(tolua_S,"reset",tolua_libSLTK_curl_Sltk_Curl_reset00);
    tolua_function(tolua_S,"execute",tolua_libSLTK_curl_Sltk_Curl_execute00);
    tolua_function(tolua_S,"getData",tolua_libSLTK_curl_Sltk_Curl_getData00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libSLTK_curl (lua_State* tolua_S) {
 return tolua_libSLTK_curl_open(tolua_S);
};
#endif

