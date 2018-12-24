#pragma once

// tolua_begin
namespace Sltk{
	/* Curl::debugFunction type */
	enum CurlInfo{
		CURLINFO_TEXT = 0,
		CURLINFO_HEADER_IN,    /* 1 */
		CURLINFO_HEADER_OUT,   /* 2 */
		CURLINFO_DATA_IN,      /* 3 */
		CURLINFO_DATA_OUT,     /* 4 */
		CURLINFO_SSL_DATA_IN,  /* 5 */
		CURLINFO_SSL_DATA_OUT, /* 6 */
		CURLINFO_END
	};
	
	/* Curl::set設定オプション */
	enum CurlOption{
		/* This is the FILE * or void * the regular output should be written to. */
		CURLOPT_WRITEDATA = ::CURLOPT_WRITEDATA,

		/* The full URL to get/put */
		CURLOPT_URL = ::CURLOPT_URL,

		/* Port number to connect to, if other than default. */
		CURLOPT_PORT = ::CURLOPT_PORT,

		/* Name of proxy to use. */
		CURLOPT_PROXY = ::CURLOPT_PROXY,

		/* "user:password;options" to use when fetching. */
		CURLOPT_USERPWD = ::CURLOPT_USERPWD,

		/* "user:password" to use with proxy. */
		CURLOPT_PROXYUSERPWD = ::CURLOPT_PROXYUSERPWD,

		/* Range to get, specified as an ASCII string. */
		CURLOPT_RANGE = ::CURLOPT_RANGE,

		/* not used */

		/* Specified file stream to upload from (use as input): */
		CURLOPT_READDATA = ::CURLOPT_READDATA,

		/* Buffer to receive error messages in, must be at least CURLOPT_ERROR_SIZE
		* bytes big. If this is not used, error messages go to stderr instead: */
		CURLOPT_ERRORBUFFER = ::CURLOPT_ERRORBUFFER,

		/* Function that will be called to store the output (instead of fwrite). The
		* parameters will use fwrite() syntax, make sure to follow them. */
		CURLOPT_WRITEFUNCTION = ::CURLOPT_WRITEFUNCTION,

		/* Function that will be called to read the input (instead of fread). The
		* parameters will use fread() syntax, make sure to follow them. */
		CURLOPT_READFUNCTION = ::CURLOPT_READFUNCTION,

		/* Time-out the read operation after this amount of seconds */
		CURLOPT_TIMEOUT = ::CURLOPT_TIMEOUT,

		/* If the ::CURLOPT_INFILE is used, this can be used to inform libcurl about
		* how large the file being sent really is. That allows better error
		* checking and better verifies that the upload was successful. -1 means
		* unknown size.
		*
		* For large file support, there is also a _LARGE version of the key
		* which takes an off_t type, allowing platforms with larger off_t
		* sizes to handle larger files.  See below for INFILESIZE_LARGE.
		*/
		CURLOPT_INFILESIZE = ::CURLOPT_INFILESIZE,

		/* POST static input fields. */
		CURLOPT_POSTFIELDS = ::CURLOPT_POSTFIELDS,

		/* Set the referrer page (needed by some CGIs) */
		CURLOPT_REFERER = ::CURLOPT_REFERER,

		/* Set the FTP PORT string (interface name, named or numerical IP address)
		Use i.e '-' to use default address. */
		CURLOPT_FTPPORT = ::CURLOPT_FTPPORT,

		/* Set the User-Agent string (examined by some CGIs) */
		CURLOPT_USERAGENT = ::CURLOPT_USERAGENT,

		/* If the download receives less than "low speed limit" bytes/second
		* during "low speed time" seconds, the operations is aborted.
		* You could i.e if you have a pretty high speed connection, abort if
		* it is less than 2000 bytes/sec during 20 seconds.
		*/

		/* Set the "low speed limit" */
		CURLOPT_LOW_SPEED_LIMIT = ::CURLOPT_LOW_SPEED_LIMIT,

		/* Set the "low speed time" */
		CURLOPT_LOW_SPEED_TIME = ::CURLOPT_LOW_SPEED_TIME,

		/* Set the continuation offset.
		*
		* Note there is also a _LARGE version of this key which uses
		* off_t types, allowing for large file offsets on platforms which
		* use larger-than-32-bit off_t's.  Look below for RESUME_FROM_LARGE.
		*/
		CURLOPT_RESUME_FROM = ::CURLOPT_RESUME_FROM,

		/* Set cookie in request: */
		CURLOPT_COOKIE = ::CURLOPT_COOKIE,

		/* This points to a linked list of headers, struct curl_slist kind. This
		list is also used for RTSP (in spite of its name) */
		CURLOPT_HTTPHEADER = ::CURLOPT_HTTPHEADER,

		/* This points to a linked list of post entries, struct curl_httppost */
		CURLOPT_HTTPPOST = ::CURLOPT_HTTPPOST,

		/* name of the file keeping your private SSL-certificate */
		CURLOPT_SSLCERT = ::CURLOPT_SSLCERT,

		/* password for the SSL or SSH private key */
		CURLOPT_KEYPASSWD = ::CURLOPT_KEYPASSWD,

		/* send TYPE parameter? */
		CURLOPT_CRLF = ::CURLOPT_CRLF,

		/* send linked-list of QUOTE commands */
		CURLOPT_QUOTE = ::CURLOPT_QUOTE,

		/* send FILE * or void * to store headers to, if you use a callback it
		is simply passed to the callback unmodified */
		CURLOPT_HEADERDATA = ::CURLOPT_HEADERDATA,

		/* point to a file to read the initial cookies from, also enables
		"cookie awareness" */
		CURLOPT_COOKIEFILE = ::CURLOPT_COOKIEFILE,

		/* What version to specifically try to use.
		See CURLOPT_SSLVERSION defines below. */
		CURLOPT_SSLVERSION = ::CURLOPT_SSLVERSION,

		/* What kind of HTTP time condition to use, see defines */
		CURLOPT_TIMECONDITION = ::CURLOPT_TIMECONDITION,

		/* Time to use with the above condition. Specified in number of seconds
		since 1 Jan 1970 */
		CURLOPT_TIMEVALUE = ::CURLOPT_TIMEVALUE,

		/* 35 = OBSOLETE */

		/* Custom request, for customizing the get command like
		HTTP: DELETE, TRACE and others
		FTP: to use a different list command
		*/
		CURLOPT_CUSTOMREQUEST = ::CURLOPT_CUSTOMREQUEST,

		/* HTTP request, for odd commands like DELETE, TRACE and others */
		CURLOPT_STDERR = ::CURLOPT_STDERR,

		/* 38 is not used */

		/* send linked-list of post-transfer QUOTE commands */
		CURLOPT_POSTQUOTE = ::CURLOPT_POSTQUOTE,

		CURLOPT_OBSOLETE40 = ::CURLOPT_OBSOLETE40,

		CURLOPT_VERBOSE = ::CURLOPT_VERBOSE,
		CURLOPT_HEADER = ::CURLOPT_HEADER,
		CURLOPT_NOPROGRESS = ::CURLOPT_NOPROGRESS,
		CURLOPT_NOBODY = ::CURLOPT_NOBODY,
		CURLOPT_FAILONERROR = ::CURLOPT_FAILONERROR,
		CURLOPT_UPLOAD = ::CURLOPT_UPLOAD,
		CURLOPT_POST = ::CURLOPT_POST,
		CURLOPT_DIRLISTONLY = ::CURLOPT_DIRLISTONLY,

		CURLOPT_APPEND = ::CURLOPT_APPEND,

		/* Specify whether to read the user+password from the .netrc or the URL.
		* This must be one of the CURLOPT_NETRC_* enums below. */
		CURLOPT_NETRC = ::CURLOPT_NETRC,

		CURLOPT_FOLLOWLOCATION = ::CURLOPT_FOLLOWLOCATION,

		CURLOPT_TRANSFERTEXT = ::CURLOPT_TRANSFERTEXT,
		CURLOPT_PUT = ::CURLOPT_PUT,

		/* 55 = OBSOLETE */

		/* DEPRECATED
		* Function that will be called instead of the internal progress display
		* function. This function should be defined as the curl_progress_callback
		* prototype defines. */
		CURLOPT_PROGRESSFUNCTION = ::CURLOPT_PROGRESSFUNCTION,

		/* Data passed to the ::CURLOPT_PROGRESSFUNCTION and ::CURLOPT_XFERINFOFUNCTION
		callbacks */
		CURLOPT_PROGRESSDATA = ::CURLOPT_PROGRESSDATA,

		/* We want the referrer field set automatically when following locations */
		CURLOPT_AUTOREFERER = ::CURLOPT_AUTOREFERER,

		/* Port of the proxy, can be set in the proxy string as well with:
		"[host]:[port]" */
		CURLOPT_PROXYPORT = ::CURLOPT_PROXYPORT,

		/* size of the POST input data, if strlen() is not good to use */
		CURLOPT_POSTFIELDSIZE = ::CURLOPT_POSTFIELDSIZE,

		/* tunnel non-http operations through a HTTP proxy */
		CURLOPT_HTTPPROXYTUNNEL = ::CURLOPT_HTTPPROXYTUNNEL,

		/* Set the interface string to use as outgoing network interface */
		CURLOPT_INTERFACE = ::CURLOPT_INTERFACE,

		/* Set the krb4/5 security level, this also enables krb4/5 awareness.  This
		* is a string, 'clear', 'safe', 'confidential' or 'private'.  If the string
		* is set but doesn't match one of these, 'private' will be used.  */
		CURLOPT_KRBLEVEL = ::CURLOPT_KRBLEVEL,

		/* Set if we should verify the peer in ssl handshake, set 1 to verify. */
		CURLOPT_SSL_VERIFYPEER = ::CURLOPT_SSL_VERIFYPEER,

		/* The CApath or CAfile used to validate the peer certificate
		this option is used only if SSL_VERIFYPEER is true */
		CURLOPT_CAINFO = ::CURLOPT_CAINFO,

		/* 66 = OBSOLETE */
		/* 67 = OBSOLETE */

		/* Maximum number of http redirects to follow */
		CURLOPT_MAXREDIRS = ::CURLOPT_MAXREDIRS,

		/* Pass a long set to 1 to get the date of the requested document (if
		possible)! Pass a zero to shut it off. */
		CURLOPT_FILETIME = ::CURLOPT_FILETIME,

		/* This points to a linked list of telnet options */
		CURLOPT_TELNETOPTIONS = ::CURLOPT_TELNETOPTIONS,

		/* Max amount of cached alive connections */
		CURLOPT_MAXCONNECTS = ::CURLOPT_MAXCONNECTS,

		CURLOPT_OBSOLETE72 = ::CURLOPT_OBSOLETE72,

		/* 73 = OBSOLETE */

		/* Set to explicitly use a new connection for the upcoming transfer.
		Do not use this unless you're absolutely sure of this, as it makes the
		operation slower and is less friendly for the network. */
		CURLOPT_FRESH_CONNECT = ::CURLOPT_FRESH_CONNECT,

		/* Set to explicitly forbid the upcoming transfer's connection to be re-used
		when done. Do not use this unless you're absolutely sure of this, as it
		makes the operation slower and is less friendly for the network. */
		CURLOPT_FORBID_REUSE = ::CURLOPT_FORBID_REUSE,

		/* Set to a file name that contains random data for libcurl to use to
		seed the random engine when doing SSL connects. */
		CURLOPT_RANDOM_FILE = ::CURLOPT_RANDOM_FILE,

		/* Set to the Entropy Gathering Daemon socket pathname */
		CURLOPT_EGDSOCKET = ::CURLOPT_EGDSOCKET,

		/* Time-out connect operations after this amount of seconds, if connects are
		OK within this time, then fine... This only aborts the connect phase. */
		CURLOPT_CONNECTTIMEOUT = ::CURLOPT_CONNECTTIMEOUT,

		/* Function that will be called to store headers (instead of fwrite). The
		* parameters will use fwrite() syntax, make sure to follow them. */
		CURLOPT_HEADERFUNCTION = ::CURLOPT_HEADERFUNCTION,

		/* Set this to force the HTTP request to get back to GET. Only really usable
		if POST, PUT or a custom request have been used first.
		*/
		CURLOPT_HTTPGET = ::CURLOPT_HTTPGET,

		/* Set if we should verify the Common name from the peer certificate in ssl
		* handshake, set 1 to check existence, 2 to ensure that it matches the
		* provided hostname. */
		CURLOPT_SSL_VERIFYHOST = ::CURLOPT_SSL_VERIFYHOST,

		/* Specify which file name to write all known cookies in after completed
		operation. Set file name to "-" (dash) to make it go to stdout. */
		CURLOPT_COOKIEJAR = ::CURLOPT_COOKIEJAR,

		/* Specify which SSL ciphers to use */
		CURLOPT_SSL_CIPHER_LIST = ::CURLOPT_SSL_CIPHER_LIST,

		/* Specify which HTTP version to use! This must be set to one of the
		CURLOPT_HTTP_VERSION* enums set below. */
		CURLOPT_HTTP_VERSION = ::CURLOPT_HTTP_VERSION,

		/* Specifically switch on or off the FTP engine's use of the EPSV command. By
		default, that one will always be attempted before the more traditional
		PASV command. */
		CURLOPT_FTP_USE_EPSV = ::CURLOPT_FTP_USE_EPSV,

		/* type of the file keeping your SSL-certificate ("DER", "PEM", "ENG") */
		CURLOPT_SSLCERTTYPE = ::CURLOPT_SSLCERTTYPE,

		/* name of the file keeping your private SSL-key */
		CURLOPT_SSLKEY = ::CURLOPT_SSLKEY,

		/* type of the file keeping your private SSL-key ("DER", "PEM", "ENG") */
		CURLOPT_SSLKEYTYPE = ::CURLOPT_SSLKEYTYPE,

		/* crypto engine for the SSL-sub system */
		CURLOPT_SSLENGINE = ::CURLOPT_SSLENGINE,

		/* set the crypto engine for the SSL-sub system as default
		the param has no meaning...
		*/
		CURLOPT_SSLENGINE_DEFAULT = ::CURLOPT_SSLENGINE_DEFAULT,

		/* Non-zero value means to use the global dns cache */
		CURLOPT_DNS_USE_GLOBAL_CACHE = ::CURLOPT_DNS_USE_GLOBAL_CACHE,

		/* DNS cache timeout */
		CURLOPT_DNS_CACHE_TIMEOUT = ::CURLOPT_DNS_CACHE_TIMEOUT,

		/* send linked-list of pre-transfer QUOTE commands */
		CURLOPT_PREQUOTE = ::CURLOPT_PREQUOTE,

		/* set the debug function */
		CURLOPT_DEBUGFUNCTION = ::CURLOPT_DEBUGFUNCTION,

		/* set the data for the debug function */
		CURLOPT_DEBUGDATA = ::CURLOPT_DEBUGDATA,

		/* mark this as start of a cookie session */
		CURLOPT_COOKIESESSION = ::CURLOPT_COOKIESESSION,

		/* The CApath directory used to validate the peer certificate
		this option is used only if SSL_VERIFYPEER is true */
		CURLOPT_CAPATH = ::CURLOPT_CAPATH,

		/* Instruct libcurl to use a smaller receive buffer */
		CURLOPT_BUFFERSIZE = ::CURLOPT_BUFFERSIZE,

		/* Instruct libcurl to not use any signal/alarm handlers, even when using
		timeouts. This option is useful for multi-threaded applications.
		See libcurl-the-guide for more background information. */
		CURLOPT_NOSIGNAL = ::CURLOPT_NOSIGNAL,

		/* Provide a CURLShare for mutexing non-ts data */
		CURLOPT_SHARE = ::CURLOPT_SHARE,

		/* indicates type of proxy. accepted values are CURLPROXY_HTTP (default),
		CURLPROXY_SOCKS4, CURLPROXY_SOCKS4A and CURLPROXY_SOCKS5. */
		CURLOPT_PROXYTYPE = ::CURLOPT_PROXYTYPE,

		/* Set the Accept-Encoding string. Use this to tell a server you would like
		the response to be compressed. Before 7.21.6, this was known as
		::CURLOPT_ENCODING */
		CURLOPT_ACCEPT_ENCODING = ::CURLOPT_ACCEPT_ENCODING,

		/* Set pointer to private data */
		CURLOPT_PRIVATE = ::CURLOPT_PRIVATE,

		/* Set aliases for HTTP 200 in the HTTP Response header */
		CURLOPT_HTTP200ALIASES = ::CURLOPT_HTTP200ALIASES,

		/* Continue to send authentication (user+password) when following locations,
		even when hostname changed. This can potentially send off the name
		and password to whatever host the server decides. */
		CURLOPT_UNRESTRICTED_AUTH = ::CURLOPT_UNRESTRICTED_AUTH,

		/* Specifically switch on or off the FTP engine's use of the EPRT command (
		it also disables the LPRT attempt). By default, those ones will always be
		attempted before the good old traditional PORT command. */
		CURLOPT_FTP_USE_EPRT = ::CURLOPT_FTP_USE_EPRT,

		/* Set this to a bitmask value to enable the particular authentications
		methods you like. Use this in combination with ::CURLOPT_USERPWD.
		Note that setting multiple bits may cause extra network round-trips. */
		CURLOPT_HTTPAUTH = ::CURLOPT_HTTPAUTH,

		/* Set the ssl context callback function, currently only for OpenSSL ssl_ctx
		in second argument. The function must be matching the
		curl_ssl_ctx_callback proto. */
		CURLOPT_SSL_CTX_FUNCTION = ::CURLOPT_SSL_CTX_FUNCTION,

		/* Set the userdata for the ssl context callback function's third
		argument */
		CURLOPT_SSL_CTX_DATA = ::CURLOPT_SSL_CTX_DATA,

		/* FTP Option that causes missing dirs to be created on the remote server.
		In 7.19.4 we introduced the convenience enums for this option using the
		CURLFTP_CREATE_DIR prefix.
		*/
		CURLOPT_FTP_CREATE_MISSING_DIRS = ::CURLOPT_FTP_CREATE_MISSING_DIRS,

		/* Set this to a bitmask value to enable the particular authentications
		methods you like. Use this in combination with ::CURLOPT_PROXYUSERPWD.
		Note that setting multiple bits may cause extra network round-trips. */
		CURLOPT_PROXYAUTH = ::CURLOPT_PROXYAUTH,

		/* FTP option that changes the timeout, in seconds, associated with
		getting a response.  This is different from transfer timeout time and
		essentially places a demand on the FTP server to acknowledge commands
		in a timely manner. */
		CURLOPT_FTP_RESPONSE_TIMEOUT = ::CURLOPT_FTP_RESPONSE_TIMEOUT,

		/* Set this option to one of the CURLOPT_IPRESOLVE_* defines (see below) to
		tell libcurl to resolve names to those IP versions only. This only has
		affect on systems with support for more than one, i.e IPv4 _and_ IPv6. */
		CURLOPT_IPRESOLVE = ::CURLOPT_IPRESOLVE,

		/* Set this option to limit the size of a file that will be downloaded from
		an HTTP or FTP server.

		Note there is also _LARGE version which adds large file support for
		platforms which have larger off_t sizes.  See MAXFILESIZE_LARGE below. */
		CURLOPT_MAXFILESIZE = ::CURLOPT_MAXFILESIZE,

		/* See the comment for INFILESIZE above, but in short, specifies
		* the size of the file being uploaded.  -1 means unknown.
		*/
		CURLOPT_INFILESIZE_LARGE = ::CURLOPT_INFILESIZE_LARGE,

		/* Sets the continuation offset.  There is also a LONG version of this;
		* look above for RESUME_FROM.
		*/
		CURLOPT_RESUME_FROM_LARGE = ::CURLOPT_RESUME_FROM_LARGE,

		/* Sets the maximum size of data that will be downloaded from
		* an HTTP or FTP server.  See MAXFILESIZE above for the LONG version.
		*/
		CURLOPT_MAXFILESIZE_LARGE = ::CURLOPT_MAXFILESIZE_LARGE,

		/* Set this option to the file name of your .netrc file you want libcurl
		to parse (using the ::CURLOPT_NETRC option). If not set, libcurl will do
		a poor attempt to find the user's home directory and check for a .netrc
		file in there. */
		CURLOPT_NETRC_FILE = ::CURLOPT_NETRC_FILE,

		/* Enable SSL/TLS for FTP, pick one of:
		CURLUSESSL_TRY     - try using SSL, proceed anyway otherwise
		CURLUSESSL_CONTROL - SSL for the control connection or fail
		CURLUSESSL_ALL     - SSL for all communication or fail
		*/
		CURLOPT_USE_SSL = ::CURLOPT_USE_SSL,

		/* The _LARGE version of the standard POSTFIELDSIZE option */
		CURLOPT_POSTFIELDSIZE_LARGE = ::CURLOPT_POSTFIELDSIZE_LARGE,

		/* Enable/disable the TCP Nagle algorithm */
		CURLOPT_TCP_NODELAY = ::CURLOPT_TCP_NODELAY,

		/* 122 OBSOLETE, used in 7.12.3. Gone in 7.13.0 */
		/* 123 OBSOLETE. Gone in 7.16.0 */
		/* 124 OBSOLETE, used in 7.12.3. Gone in 7.13.0 */
		/* 125 OBSOLETE, used in 7.12.3. Gone in 7.13.0 */
		/* 126 OBSOLETE, used in 7.12.3. Gone in 7.13.0 */
		/* 127 OBSOLETE. Gone in 7.16.0 */
		/* 128 OBSOLETE. Gone in 7.16.0 */

		/* When FTP over SSL/TLS is selected (with ::CURLOPT_USE_SSL), this option
		can be used to change libcurl's default action which is to first try
		"AUTH SSL" and then "AUTH TLS" in this order, and proceed when a OK
		response has been received.

		Available parameters are:
		CURLFTPAUTH_DEFAULT - let libcurl decide
		CURLFTPAUTH_SSL     - try "AUTH SSL" first, then TLS
		CURLFTPAUTH_TLS     - try "AUTH TLS" first, then SSL
		*/
		CURLOPT_FTPSSLAUTH = ::CURLOPT_FTPSSLAUTH,

		CURLOPT_IOCTLFUNCTION = ::CURLOPT_IOCTLFUNCTION,
		CURLOPT_IOCTLDATA = ::CURLOPT_IOCTLDATA,

		/* 132 OBSOLETE. Gone in 7.16.0 */
		/* 133 OBSOLETE. Gone in 7.16.0 */

		/* zero terminated string for pass on to the FTP server when asked for
		"account" info */
		CURLOPT_FTP_ACCOUNT = ::CURLOPT_FTP_ACCOUNT,

		/* feed cookies into cookie engine */
		CURLOPT_COOKIELIST = ::CURLOPT_COOKIELIST,

		/* ignore Content-Length */
		CURLOPT_IGNORE_CONTENT_LENGTH = ::CURLOPT_IGNORE_CONTENT_LENGTH,

		/* Set to non-zero to skip the IP address received in a 227 PASV FTP server
		response. Typically used for FTP-SSL purposes but is not restricted to
		that. libcurl will then instead use the same IP address it used for the
		control connection. */
		CURLOPT_FTP_SKIP_PASV_IP = ::CURLOPT_FTP_SKIP_PASV_IP,

		/* Select "file method" to use when doing FTP, see the curl_ftpmethod
		above. */
		CURLOPT_FTP_FILEMETHOD = ::CURLOPT_FTP_FILEMETHOD,

		/* Local port number to bind the socket to */
		CURLOPT_LOCALPORT = ::CURLOPT_LOCALPORT,

		/* Number of ports to try, including the first one set with LOCALPORT.
		Thus, setting it to 1 will make no additional attempts but the first.
		*/
		CURLOPT_LOCALPORTRANGE = ::CURLOPT_LOCALPORTRANGE,

		/* no transfer, set up connection and let application use the socket by
		extracting it with CURLINFO_LASTSOCKET */
		CURLOPT_CONNECT_ONLY = ::CURLOPT_CONNECT_ONLY,

		/* Function that will be called to convert from the
		network encoding (instead of using the iconv calls in libcurl) */
		CURLOPT_CONV_FROM_NETWORK_FUNCTION = ::CURLOPT_CONV_FROM_NETWORK_FUNCTION,

		/* Function that will be called to convert to the
		network encoding (instead of using the iconv calls in libcurl) */
		CURLOPT_CONV_TO_NETWORK_FUNCTION = ::CURLOPT_CONV_TO_NETWORK_FUNCTION,

		/* Function that will be called to convert from UTF8
		(instead of using the iconv calls in libcurl)
		Note that this is used only for SSL certificate processing */
		CURLOPT_CONV_FROM_UTF8_FUNCTION = ::CURLOPT_CONV_FROM_UTF8_FUNCTION,

		/* if the connection proceeds too quickly then need to slow it down */
		/* limit-rate: maximum number of bytes per second to send or receive */
		CURLOPT_MAX_SEND_SPEED_LARGE = ::CURLOPT_MAX_SEND_SPEED_LARGE,
		CURLOPT_MAX_RECV_SPEED_LARGE = ::CURLOPT_MAX_RECV_SPEED_LARGE,

		/* Pointer to command string to send if USER/PASS fails. */
		CURLOPT_FTP_ALTERNATIVE_TO_USER = ::CURLOPT_FTP_ALTERNATIVE_TO_USER,

		/* callback function for setting socket options */
		CURLOPT_SOCKOPTFUNCTION = ::CURLOPT_SOCKOPTFUNCTION,
		CURLOPT_SOCKOPTDATA = ::CURLOPT_SOCKOPTDATA,

		/* set to 0 to disable session ID re-use for this transfer, default is
		enabled (== 1) */
		CURLOPT_SSL_SESSIONID_CACHE = ::CURLOPT_SSL_SESSIONID_CACHE,

		/* allowed SSH authentication methods */
		CURLOPT_SSH_AUTH_TYPES = ::CURLOPT_SSH_AUTH_TYPES,

		/* Used by scp/sftp to do public/private key authentication */
		CURLOPT_SSH_PUBLIC_KEYFILE = ::CURLOPT_SSH_PUBLIC_KEYFILE,
		CURLOPT_SSH_PRIVATE_KEYFILE = ::CURLOPT_SSH_PRIVATE_KEYFILE,

		/* Send CCC (Clear Command Channel) after authentication */
		CURLOPT_FTP_SSL_CCC = ::CURLOPT_FTP_SSL_CCC,

		/* Same as TIMEOUT and CONNECTTIMEOUT, but with ms resolution */
		CURLOPT_TIMEOUT_MS = ::CURLOPT_TIMEOUT_MS,
		CURLOPT_CONNECTTIMEOUT_MS = ::CURLOPT_CONNECTTIMEOUT_MS,

		/* set to zero to disable the libcurl's decoding and thus pass the raw body
		data to the application even when it is encoded/compressed */
		CURLOPT_HTTP_TRANSFER_DECODING = ::CURLOPT_HTTP_TRANSFER_DECODING,
		CURLOPT_HTTP_CONTENT_DECODING = ::CURLOPT_HTTP_CONTENT_DECODING,

		/* Permission used when creating new files and directories on the remote
		server for protocols that support it, SFTP/SCP/FILE */
		CURLOPT_NEW_FILE_PERMS = ::CURLOPT_NEW_FILE_PERMS,
		CURLOPT_NEW_DIRECTORY_PERMS = ::CURLOPT_NEW_DIRECTORY_PERMS,

		/* Set the behaviour of POST when redirecting. Values must be set to one
		of CURLOPT_REDIR* defines below. This used to be called ::CURLOPT_POST301 */
		CURLOPT_POSTREDIR = ::CURLOPT_POSTREDIR,

		/* used by scp/sftp to verify the host's public key */
		CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 = ::CURLOPT_SSH_HOST_PUBLIC_KEY_MD5,

		/* Callback function for opening socket (instead of socket(2)). Optionally,
		callback is able change the address or refuse to connect returning
		CURLOPT_SOCKET_BAD.  The callback should have type
		curl_opensocket_callback */
		CURLOPT_OPENSOCKETFUNCTION = ::CURLOPT_OPENSOCKETFUNCTION,
		CURLOPT_OPENSOCKETDATA = ::CURLOPT_OPENSOCKETDATA,

		/* POST volatile input fields. */
		CURLOPT_COPYPOSTFIELDS = ::CURLOPT_COPYPOSTFIELDS,

		/* set transfer mode (;type=<a|i>) when doing FTP via an HTTP proxy */
		CURLOPT_PROXY_TRANSFER_MODE = ::CURLOPT_PROXY_TRANSFER_MODE,

		/* Callback function for seeking in the input stream */
		CURLOPT_SEEKFUNCTION = ::CURLOPT_SEEKFUNCTION,
		CURLOPT_SEEKDATA = ::CURLOPT_SEEKDATA,

		/* CRL file */
		CURLOPT_CRLFILE = ::CURLOPT_CRLFILE,

		/* Issuer certificate */
		CURLOPT_ISSUERCERT = ::CURLOPT_ISSUERCERT,

		/* (IPv6) Address scope */
		CURLOPT_ADDRESS_SCOPE = ::CURLOPT_ADDRESS_SCOPE,

		/* Collect certificate chain info and allow it to get retrievable with
		CURLINFO_CERTINFO after the transfer is complete. */
		CURLOPT_CERTINFO = ::CURLOPT_CERTINFO,

		/* "name" and "pwd" to use when fetching. */
		CURLOPT_USERNAME = ::CURLOPT_USERNAME,
		CURLOPT_PASSWORD = ::CURLOPT_PASSWORD,

		/* "name" and "pwd" to use with Proxy when fetching. */
		CURLOPT_PROXYUSERNAME = ::CURLOPT_PROXYUSERNAME,
		CURLOPT_PROXYPASSWORD = ::CURLOPT_PROXYPASSWORD,

		/* Comma separated list of hostnames defining no-proxy zones. These should
		match both hostnames directly, and hostnames within a domain. For
		example, local.com will match local.com and www.local.com, but NOT
		notlocal.com or www.notlocal.com. For compatibility with other
		implementations of this, .local.com will be considered to be the same as
		local.com. A single * is the only valid wildcard, and effectively
		disables the use of proxy. */
		CURLOPT_NOPROXY = ::CURLOPT_NOPROXY,

		/* block size for TFTP transfers */
		CURLOPT_TFTP_BLKSIZE = ::CURLOPT_TFTP_BLKSIZE,

		/* Socks Service */
		CURLOPT_SOCKS5_GSSAPI_SERVICE = ::CURLOPT_SOCKS5_GSSAPI_SERVICE,

		/* Socks Service */
		CURLOPT_SOCKS5_GSSAPI_NEC = ::CURLOPT_SOCKS5_GSSAPI_NEC,

		/* set the bitmask for the protocols that are allowed to be used for the
		transfer, which thus helps the app which takes URLs from users or other
		external inputs and want to restrict what protocol(s) to deal
		with. Defaults to CURLPROTO_ALL. */
		CURLOPT_PROTOCOLS = ::CURLOPT_PROTOCOLS,

		/* set the bitmask for the protocols that libcurl is allowed to follow to,
		as a subset of the ::CURLOPT_PROTOCOLS ones. That means the protocol needs
		to be set in both bitmasks to be allowed to get redirected to. Defaults
		to all protocols except FILE and SCP. */
		CURLOPT_REDIR_PROTOCOLS = ::CURLOPT_REDIR_PROTOCOLS,

		/* set the SSH knownhost file name to use */
		CURLOPT_SSH_KNOWNHOSTS = ::CURLOPT_SSH_KNOWNHOSTS,

		/* set the SSH host key callback, must point to a curl_sshkeycallback
		function */
		CURLOPT_SSH_KEYFUNCTION = ::CURLOPT_SSH_KEYFUNCTION,

		/* set the SSH host key callback custom pointer */
		CURLOPT_SSH_KEYDATA = ::CURLOPT_SSH_KEYDATA,

		/* set the SMTP mail originator */
		CURLOPT_MAIL_FROM = ::CURLOPT_MAIL_FROM,

		/* set the SMTP mail receiver(s) */
		CURLOPT_MAIL_RCPT = ::CURLOPT_MAIL_RCPT,

		/* FTP: send PRET before PASV */
		CURLOPT_FTP_USE_PRET = ::CURLOPT_FTP_USE_PRET,

		/* RTSP request method (OPTIONS, SETUP, PLAY, etc...) */
		CURLOPT_RTSP_REQUEST = ::CURLOPT_RTSP_REQUEST,

		/* The RTSP session identifier */
		CURLOPT_RTSP_SESSION_ID = ::CURLOPT_RTSP_SESSION_ID,

		/* The RTSP stream URI */
		CURLOPT_RTSP_STREAM_URI = ::CURLOPT_RTSP_STREAM_URI,

		/* The Transport: header to use in RTSP requests */
		CURLOPT_RTSP_TRANSPORT = ::CURLOPT_RTSP_TRANSPORT,

		/* Manually initialize the client RTSP CSeq for this handle */
		CURLOPT_RTSP_CLIENT_CSEQ = ::CURLOPT_RTSP_CLIENT_CSEQ,

		/* Manually initialize the server RTSP CSeq for this handle */
		CURLOPT_RTSP_SERVER_CSEQ = ::CURLOPT_RTSP_SERVER_CSEQ,

		/* The stream to pass to INTERLEAVEFUNCTION. */
		CURLOPT_INTERLEAVEDATA = ::CURLOPT_INTERLEAVEDATA,

		/* Let the application define a custom write method for RTP data */
		CURLOPT_INTERLEAVEFUNCTION = ::CURLOPT_INTERLEAVEFUNCTION,

		/* Turn on wildcard matching */
		CURLOPT_WILDCARDMATCH = ::CURLOPT_WILDCARDMATCH,

		/* Directory matching callback called before downloading of an
		individual file (chunk) started */
		CURLOPT_CHUNK_BGN_FUNCTION = ::CURLOPT_CHUNK_BGN_FUNCTION,

		/* Directory matching callback called after the file (chunk)
		was downloaded, or skipped */
		CURLOPT_CHUNK_END_FUNCTION = ::CURLOPT_CHUNK_END_FUNCTION,

		/* Change match (fnmatch-like) callback for wildcard matching */
		CURLOPT_FNMATCH_FUNCTION = ::CURLOPT_FNMATCH_FUNCTION,

		/* Let the application define custom chunk data pointer */
		CURLOPT_CHUNK_DATA = ::CURLOPT_CHUNK_DATA,

		/* FNMATCH_FUNCTION user pointer */
		CURLOPT_FNMATCH_DATA = ::CURLOPT_FNMATCH_DATA,

		/* send linked-list of name:port:address sets */
		CURLOPT_RESOLVE = ::CURLOPT_RESOLVE,

		/* Set a username for authenticated TLS */
		CURLOPT_TLSAUTH_USERNAME = ::CURLOPT_TLSAUTH_USERNAME,

		/* Set a password for authenticated TLS */
		CURLOPT_TLSAUTH_PASSWORD = ::CURLOPT_TLSAUTH_PASSWORD,

		/* Set authentication type for authenticated TLS */
		CURLOPT_TLSAUTH_TYPE = ::CURLOPT_TLSAUTH_TYPE,

		/* Set to 1 to enable the "TE:" header in HTTP requests to ask for
		compressed transfer-encoded responses. Set to 0 to disable the use of TE:
		in outgoing requests. The current default is 0, but it might change in a
		future libcurl release.

		libcurl will ask for the compressed methods it knows of, and if that
		isn't any, it will not ask for transfer-encoding at all even if this
		option is set to 1.

		*/
		CURLOPT_TRANSFER_ENCODING = ::CURLOPT_TRANSFER_ENCODING,

		/* Callback function for closing socket (instead of close(2)). The callback
		should have type curl_closesocket_callback */
		CURLOPT_CLOSESOCKETFUNCTION = ::CURLOPT_CLOSESOCKETFUNCTION,
		CURLOPT_CLOSESOCKETDATA = ::CURLOPT_CLOSESOCKETDATA,

		/* allow GSSAPI credential delegation */
		CURLOPT_GSSAPI_DELEGATION = ::CURLOPT_GSSAPI_DELEGATION,

		/* Set the name servers to use for DNS resolution */
		CURLOPT_DNS_SERVERS = ::CURLOPT_DNS_SERVERS,

		/* Time-out accept operations (currently for FTP only) after this amount
		of miliseconds. */
		CURLOPT_ACCEPTTIMEOUT_MS = ::CURLOPT_ACCEPTTIMEOUT_MS,

		/* Set TCP keepalive */
		CURLOPT_TCP_KEEPALIVE = ::CURLOPT_TCP_KEEPALIVE,

		/* non-universal keepalive knobs (Linux, AIX, HP-UX, more) */
		CURLOPT_TCP_KEEPIDLE = ::CURLOPT_TCP_KEEPIDLE,
		CURLOPT_TCP_KEEPINTVL = ::CURLOPT_TCP_KEEPINTVL,

		/* Enable/disable specific SSL features with a bitmask, see CURLSSLOPT_* */
		CURLOPT_SSL_OPTIONS = ::CURLOPT_SSL_OPTIONS,

		/* Set the SMTP auth originator */
		CURLOPT_MAIL_AUTH = ::CURLOPT_MAIL_AUTH,

		/* Enable/disable SASL initial response */
		CURLOPT_SASL_IR = ::CURLOPT_SASL_IR,

		/* Function that will be called instead of the internal progress display
		* function. This function should be defined as the curl_xferinfo_callback
		* prototype defines. (Deprecates ::CURLOPT_PROGRESSFUNCTION) */
		CURLOPT_XFERINFOFUNCTION = ::CURLOPT_XFERINFOFUNCTION,

		/* The XOAUTH2 bearer token */
		CURLOPT_XOAUTH2_BEARER = ::CURLOPT_XOAUTH2_BEARER,

		/* Set the interface string to use as outgoing network
		* interface for DNS requests.
		* Only supported by the c-ares DNS backend */
		CURLOPT_DNS_INTERFACE = ::CURLOPT_DNS_INTERFACE,

		/* Set the local IPv4 address to use for outgoing DNS requests.
		* Only supported by the c-ares DNS backend */
		CURLOPT_DNS_LOCAL_IP4 = ::CURLOPT_DNS_LOCAL_IP4,

		/* Set the local IPv4 address to use for outgoing DNS requests.
		* Only supported by the c-ares DNS backend */
		CURLOPT_DNS_LOCAL_IP6 = ::CURLOPT_DNS_LOCAL_IP6,

		/* Set authentication options directly */
		CURLOPT_LOGIN_OPTIONS = ::CURLOPT_LOGIN_OPTIONS,

		/* Enable/disable TLS NPN extension (http2 over ssl might fail without) */
		CURLOPT_SSL_ENABLE_NPN = ::CURLOPT_SSL_ENABLE_NPN,

		/* Enable/disable TLS ALPN extension (http2 over ssl might fail without) */
		CURLOPT_SSL_ENABLE_ALPN = ::CURLOPT_SSL_ENABLE_ALPN,

		/* Time to wait for a response to a HTTP request containing an
		* Expect: 100-continue header before sending the data anyway. */
		CURLOPT_EXPECT_100_TIMEOUT_MS = ::CURLOPT_EXPECT_100_TIMEOUT_MS,

		/* This points to a linked list of headers used for proxy requests only,
		struct curl_slist kind */
		CURLOPT_PROXYHEADER = ::CURLOPT_PROXYHEADER,

		/* Pass in a bitmask of "header options" */
		CURLOPT_HEADEROPT = ::CURLOPT_HEADEROPT,

		/* The public key in DER form used to validate the peer public key
		this option is used only if SSL_VERIFYPEER is true */
		CURLOPT_PINNEDPUBLICKEY = ::CURLOPT_PINNEDPUBLICKEY,

		/* Path to Unix domain socket */
		CURLOPT_UNIX_SOCKET_PATH = ::CURLOPT_UNIX_SOCKET_PATH,

		/* Set if we should verify the certificate status. */
		CURLOPT_SSL_VERIFYSTATUS = ::CURLOPT_SSL_VERIFYSTATUS,

		/* Set if we should enable TLS false start. */
		CURLOPT_SSL_FALSESTART = ::CURLOPT_SSL_FALSESTART,

		/* Do not squash dot-dot sequences */
		CURLOPT_PATH_AS_IS = ::CURLOPT_PATH_AS_IS,

		/* Proxy Service Name */
		CURLOPT_PROXY_SERVICE_NAME = ::CURLOPT_PROXY_SERVICE_NAME,

		/* Service Name */
		CURLOPT_SERVICE_NAME = ::CURLOPT_SERVICE_NAME,

		/* Wait/don't wait for pipe/mutex to clarify */
		CURLOPT_PIPEWAIT = ::CURLOPT_PIPEWAIT,
	};
}
// tolua_end
