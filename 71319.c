svn_error_t *svn_uri_condense_targets(const char **pcommon,apr_array_header_t **pcondensed_targets,const apr_array_header_t *targets,svn_boolean_t remove_redundancies,apr_pool_t *result_pool,apr_pool_t *scratch_pool) int i ; apr_array_header_t * uri_targets ; svn_boolean_t * removed ; if ( targets -> nelts <= 0 )  * pcommon = svn_uri_canonicalize ( ( ( const char * * ) ( targets -> elts ) ) [ 0 ] , scratch_pool ); const char *svn_uri_canonicalize(const char *uri,apr_pool_t *pool) return canonicalize ( type_uri , uri , pool ) ; static const char *canonicalize(path_type_t type,const char *path,apr_pool_t *pool) char * canon ; char * dst ; const char * src ; apr_size_t seglen ; apr_size_t schemelen = 0 ; apr_size_t canon_segments = 0 ; svn_boolean_t url = 0 ; char * schema_data = ( ( void * ) 0 ) ; if ( path [ 0 ] == '\0' )  return "" ; dst = canon = ( memset ( apr_palloc ( pool , strlen ( path ) + 1 ) , 0 , strlen ( path ) + 1 ) ); src = path; if ( type == type_uri )  while ( * src && ( * src ) != 47 && ( * src ) != ':' )  src ++; if ( ( * src ) == ':' && ( * ( src + 1 ) ) == 47 && ( * ( src + 2 ) ) == 47 )  const char * seg ; url = ! 0; src = path; while ( ( * src ) != ':' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); static char canonicalize_to_lower(char c) if ( c < 65 || c > 'Z' )  return c ; return ( char ) ( c - 65 + 'a' ) ; schemelen ++; * ( dst ++ ) = ':'; * ( dst ++ ) = 47; * ( dst ++ ) = 47; src += 3; schemelen += 3; seg = src; while ( * src && ( * src ) != 47 && ( * src ) != 64 )  src ++; if ( ( * src ) == 64 )  seglen = ( src - seg + 1 ); memcpy ( dst , seg , seglen ); dst += seglen; src ++; src = seg; if ( ( * src ) == '[' )  * ( dst ++ ) = * ( src ++ ); while ( ( * src ) == ':' || ( * src ) >= 48 && ( * src ) <= '9' || ( * src ) >= 'a' && ( * src ) <= 'f' || ( * src ) >= 65 && ( * src ) <= 'F' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); static char canonicalize_to_lower(char c) if ( c < 65 || c > 'Z' )  return c ; return ( char ) ( c - 65 + 'a' ) ; if ( ( * src ) == ']' )  * ( dst ++ ) = * ( src ++ ); while ( * src && ( * src ) != 47 && ( * src ) != ':' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); static char canonicalize_to_lower(char c) if ( c < 65 || c > 'Z' )  return c ; return ( char ) ( c - 65 + 'a' ) ; if ( ( * src ) == ':' )  if ( src [ 1 ] == 56 && src [ 2 ] == 48 && ( src [ 3 ] == 47 || ! src [ 3 ] ) && ! strncmp ( canon , "http:" , 5 ) )  src += 3; if ( src [ 1 ] == 52 && src [ 2 ] == 52 && src [ 3 ] == 51 && ( src [ 4 ] == 47 || ! src [ 4 ] ) && ! strncmp ( canon , "https:" , 6 ) )  src += 4; if ( src [ 1 ] == 51 && src [ 2 ] == '6' && src [ 3 ] == '9' && src [ 4 ] == 48 && ( src [ 5 ] == 47 || ! src [ 5 ] ) && ! strncmp ( canon , "svn:" , 4 ) )  src += 5; if ( src [ 1 ] == 47 || ! src [ 1 ] )  src += 1; while ( * src && ( * src ) != 47 )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); static char canonicalize_to_lower(char c) if ( c < 65 || c > 'Z' )  return c ; return ( char ) ( c - 65 + 'a' ) ; * dst = * src; if ( * src )  src ++; dst ++; schema_data = dst; canon_segments = 1; if ( ! url && type != type_relpath )  src = path; if ( ( * src ) == 47 )  * ( dst ++ ) = * ( src ++ ); while ( * src )  const char * next = src ; apr_size_t slash_len = 0 ; if ( next [ 0 ] == 47 )  slash_len = 1; if ( type == type_uri && next [ 0 ] == 37 )  slash_len = 3; seglen = ( next - src ); if ( seglen == 0 || seglen == 1 && src [ 0 ] == 46 || type == type_uri && seglen == 3 && src [ 0 ] == 37 && src [ 1 ] == 50 && ( canonicalize_to_upper ( src [ 2 ] ) ) == 'E' )  static char canonicalize_to_upper(char c) if ( c < 'a' || c > 'z' )  return c ; return ( char ) ( c - 'a' + 65 ) ; memcpy ( dst , src , seglen ); dst += seglen; if ( slash_len )  * ( dst ++ ) = 47; canon_segments ++; src = next + slash_len; if ( canon_segments > 0 && ( * ( dst - 1 ) ) == 47 && ! ( url && path [ schemelen ] == '\0' ) )  dst --; * dst = '\0'; if ( schema_data )  int need_extra = 0 ; src = schema_data; while ( * src )  switch ( * src )  if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 1 ) ) ] & ( 0x0004 | 0x0040 ) ) ) || ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 2 ) ) ] & ( 0x0004 | 0x0040 ) ) ) )  need_extra += 2; src += 2; if ( ! svn_uri__char_validity [ ( unsigned char ) ( * src ) ] )  need_extra += 2; src ++; if ( need_extra > 0 )  apr_size_t pre_schema_size = ( apr_size_t ) ( schema_data - canon ) ; dst = ( apr_palloc ( pool , ( ( apr_size_t ) ( src - canon ) ) + need_extra + 1 ) ); memcpy ( dst , canon , pre_schema_size ); canon = dst; return canon ; if ( targets -> nelts == 1 )  removed = ( memset ( apr_palloc ( scratch_pool , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) , 0 , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) ); uri_targets = apr_array_make ( scratch_pool , targets -> nelts , ( sizeof ( const char * ) ) ); for (i = 1; i < targets -> nelts; ++i) const char * uri = svn_uri_canonicalize ( ( ( const char * * ) ( targets -> elts ) ) [ i ] , scratch_pool ) ; const char *svn_uri_canonicalize(const char *uri,apr_pool_t *pool) return canonicalize ( type_uri , uri , pool ) ; if ( ( * ( * pcommon ) ) != '\0' )  * pcommon = ( svn_uri_get_longest_ancestor ( * pcommon , uri , scratch_pool ) ); char *svn_uri_get_longest_ancestor(const char *uri1,const char *uri2,apr_pool_t *pool) apr_size_t uri_ancestor_len ; apr_size_t i = 0 ; while ( 1 )  if ( uri1 [ i ] != uri2 [ i ] )  return ( apr_pmemdup ( pool , "" , sizeof ( "" ) ) ) ; if ( uri1 [ i ] == ':' )  i ++; i += 3; uri_ancestor_len = get_longest_ancestor_length ( type_uri , uri1 + i , uri2 + i , pool ); static apr_size_t get_longest_ancestor_length(path_type_t types,const char *path1,const char *path2,apr_pool_t *pool) apr_size_t path1_len ; apr_size_t path2_len ; apr_size_t i = 0 ; apr_size_t last_dirsep = 0 ; path1_len = strlen ( path1 ); path2_len = strlen ( path2 ); if ( path1 [ 0 ] == '\0' || path2 [ 0 ] == '\0' )  return 0 ; while ( path1 [ i ] == path2 [ i ] )  if ( path1 [ i ] == 47 )  last_dirsep = i; i ++; if ( i == path1_len || i == path2_len )  if ( i == 1 && path1 [ 0 ] == 47 && path2 [ 0 ] == 47 )  return 1 ; if ( types == type_dirent && i == 0 )  return 0 ; if ( i == path1_len && path2 [ i ] == 47 || i == path2_len && path1 [ i ] == 47 || i == path1_len && i == path2_len )  return i ; if ( last_dirsep == 0 && path1 [ 0 ] == 47 && path2 [ 0 ] == 47 )  return 1 ; return last_dirsep ; if ( uri_ancestor_len == 0 || uri_ancestor_len == 1 && ( uri1 + i ) [ 0 ] == 47 )  return ( apr_pmemdup ( pool , "" , sizeof ( "" ) ) ) ; return apr_pstrndup ( pool , uri1 , uri_ancestor_len + i ) ; * pcommon = ( apr_pstrdup ( result_pool , * pcommon ) ); if ( pcondensed_targets != ( ( void * ) 0 ) )  if ( remove_redundancies )  for (i = 0; i < uri_targets -> nelts; ++i) int j ; if ( removed [ i ] )  for (j = i + 1; j < uri_targets -> nelts; ++j) const char * uri_i ; const char * uri_j ; const char * ancestor ; if ( removed [ j ] )  uri_i = ( ( const char * * ) ( uri_targets -> elts ) ) [ i ]; uri_j = ( ( const char * * ) ( uri_targets -> elts ) ) [ j ]; ancestor = ( svn_uri_get_longest_ancestor ( uri_i , uri_j , scratch_pool ) ); char *svn_uri_get_longest_ancestor(const char *uri1,const char *uri2,apr_pool_t *pool) apr_size_t uri_ancestor_len ; apr_size_t i = 0 ; while ( 1 )  if ( uri1 [ i ] != uri2 [ i ] )  return ( apr_pmemdup ( pool , "" , sizeof ( "" ) ) ) ; if ( uri1 [ i ] == ':' )  i ++; i += 3; uri_ancestor_len = get_longest_ancestor_length ( type_uri , uri1 + i , uri2 + i , pool ); if ( uri_ancestor_len == 0 || uri_ancestor_len == 1 && ( uri1 + i ) [ 0 ] == 47 )  return ( apr_pmemdup ( pool , "" , sizeof ( "" ) ) ) ; return apr_pstrndup ( pool , uri1 , uri_ancestor_len + i ) ; if ( ( * ancestor ) == '\0' )  if ( strcmp ( ancestor , uri_i ) == 0 )  removed [ j ] = ! 0; if ( strcmp ( ancestor , uri_j ) == 0 )  removed [ i ] = ! 0; for (i = 0; i < uri_targets -> nelts; ++i) const char * uri_targets_i = ( ( const char * * ) ( uri_targets -> elts ) ) [ i ] ; if ( strcmp ( uri_targets_i , * pcommon ) == 0 && ! removed [ i ] )  removed [ i ] = ! 0; 