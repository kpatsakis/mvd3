int CVE_2012_1184_VULN_ast_parse_digest(const char *digest, struct ast_http_digest *d, int request, int pedantic) int i ; char * c , key [ 512 ] , val [ 512 ] ; struct ast_str * str = ast_str_create ( 16 ) ; if ( ast_strlen_zero ( digest ) || ! d || ! str )  c = ast_skip_blanks ( ast_str_buffer ( str ) ); if ( strncasecmp ( c , "Digest " , strlen ( "Digest " ) ) )  c += strlen ( "Digest " ); while ( * c && * ( c = ast_skip_blanks ( c ) ) )  i = 0; while ( * c && * c != '=' && * c != ',' && ! isspace ( * c ) )  key [ i ++ ] = * c ++; key [ i ] = '\0'; c = ast_skip_blanks ( c ); if ( * c == '=' )  c = ast_skip_blanks ( ++ c ); i = 0; if ( * c == '\"' )  c ++; while ( * c && * c != '\"' )  if ( * c == '\\' && c [ 1 ] != '\0' )  c ++; val [ i ++ ] = * c ++; while ( * c && * c != ',' && ! isspace ( * c ) )  val [ i ++ ] = * c ++; val [ i ] = '\0'; while ( * c && * c != ',' )  c ++; if ( * c )  c ++; if ( ! strcasecmp ( key , "username" ) )  if ( ! strcasecmp ( key , "realm" ) )  if ( ! strcasecmp ( key , "nonce" ) )  if ( ! strcasecmp ( key , "uri" ) )  if ( ! strcasecmp ( key , "domain" ) )  if ( ! strcasecmp ( key , "response" ) )  if ( ! strcasecmp ( key , "algorithm" ) )  if ( strcasecmp ( val , "MD5" ) )  if ( ! strcasecmp ( key , "cnonce" ) )  if ( ! strcasecmp ( key , "opaque" ) )  if ( ! strcasecmp ( key , "qop" ) && ! strcasecmp ( val , "auth" ) )  if ( ! strcasecmp ( key , "nc" ) )  if ( sscanf ( val , "%30lx" , & u ) != 1 )  