apr_array_header_t *svn_cstring_split(const char *input,const char *sep_chars,svn_boolean_t chop_whitespace,apr_pool_t *pool) apr_array_header_t * a = apr_array_make ( pool , 5 , ( sizeof ( input ) ) ) ; svn_cstring_split_append ( a , input , sep_chars , chop_whitespace , pool ); void svn_cstring_split_append(apr_array_header_t *array,const char *input,const char *sep_chars,svn_boolean_t chop_whitespace,apr_pool_t *pool) char * pats ; char * p ; pats = apr_pstrdup ( pool , input ); p = svn_cstring_tokenize ( sep_chars , & pats ); char *svn_cstring_tokenize(const char *sep,char **str) char * token ; char csep ; if ( sep == ( ( void * ) 0 ) || str == ( ( void * ) 0 ) || * str == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; csep = * sep; if ( csep == '\0' || sep [ 1 ] != '\0' )  return apr_strtok ( ( ( void * ) 0 ) , sep , str ) ; token = * str; if ( ! ( * token ) )  return ( ( void * ) 0 ) ; return token ; while ( p )  if ( chop_whitespace )  while ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * p ) ] & 0x0002 ) )  p ++; char * e = p + ( strlen ( p ) - 1 ) ; while ( e >= p && 0 != ( svn_ctype_table [ ( unsigned char ) ( * e ) ] & 0x0002 ) )  e --; * ( ++ e ) = '\0'; p = svn_cstring_tokenize ( sep_chars , & pats ); char *svn_cstring_tokenize(const char *sep,char **str) if ( sep == ( ( void * ) 0 ) || str == ( ( void * ) 0 ) || * str == ( ( void * ) 0 ) )  csep = * sep; if ( csep == '\0' || sep [ 1 ] != '\0' )  return apr_strtok ( ( ( void * ) 0 ) , sep , str ) ; token = * str; while ( ( * token ) == csep )  if ( ! ( * token ) )  next = ( strchr ( token , csep ) ); if ( next == ( ( void * ) 0 ) )  * str = token + strlen ( token ); * ( ( char * ) next ) = '\0'; * str = ( ( char * ) next ) + 1; return token ; 