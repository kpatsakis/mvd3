svn_error_t *svn_dirent_condense_targets(const char **pcommon,apr_array_header_t **pcondensed_targets,const apr_array_header_t *targets,svn_boolean_t remove_redundancies,apr_pool_t *result_pool,apr_pool_t *scratch_pool) int i ; svn_boolean_t * removed ; apr_array_header_t * abs_targets ; if ( targets -> nelts <= 0 )  svn_error_t * svn_err__temp = svn_dirent_get_absolute ( pcommon , ( ( const char * * ) ( targets -> elts ) ) [ 0 ] , scratch_pool ) ; svn_error_t *svn_dirent_get_absolute(const char **pabsolute,const char *relative,apr_pool_t *pool) char * buffer ; apr_status_t apr_err ; const char * path_apr ; if ( ! ( ! svn_path_is_url ( relative ) ) )  svn_error_t * svn_err__temp = svn_error__malfunction ( ! 0 , "dirent_uri.c" , 1571 , "! svn_path_is_url(relative)" ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  svn_error_t * svn_err__temp = svn_path_cstring_from_utf8 ( & path_apr , relative , pool ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  apr_err = apr_filepath_merge ( & buffer , ( ( void * ) 0 ) , path_apr , 0x04 , pool ); if ( apr_err )  if ( svn_dirent_is_absolute ( relative ) && svn_dirent_is_canonical ( relative , pool ) && ! svn_path_is_backpath_present ( relative ) )  svn_boolean_t svn_dirent_is_canonical(const char *dirent,apr_pool_t *scratch_pool) const char * ptr = dirent ; if ( ( * ptr ) == 47 )  ptr ++; return relpath_is_canonical ( ptr ) ; static svn_boolean_t relpath_is_canonical(const char *relpath) const char * ptr = relpath ; const char * seg = relpath ; if ( ( * relpath ) == '\0' )  return ! 0 ; if ( ( * ptr ) == 47 )  return 0 ; while ( 1 )  apr_size_t seglen = ( ptr - seg ) ; if ( seglen == 1 && ( * seg ) == 46 )  return 0 ; if ( ( * ptr ) == 47 && ( * ( ptr + 1 ) ) == 47 )  return 0 ; if ( ! ( * ptr ) && ( * ( ptr - 1 ) ) == 47 )  return 0 ; if ( ! ( * ptr ) )  if ( ( * ptr ) == 47 )  ptr ++; seg = ptr; while ( * ptr && ( * ptr ) != 47 )  ptr ++; return ! 0 ; svn_boolean_t svn_dirent_is_absolute(const char *dirent) if ( ! dirent )  return 0 ; if ( dirent [ 0 ] == 47 )  return ! 0 ; return 0 ; return 0 ; return svn_error_createf ( SVN_ERR_BAD_FILENAME , svn_error_create ( apr_err , ( ( void * ) 0 ) , ( ( void * ) 0 ) ) , ( dgettext ( "subversion" , "Couldn't determine absolute path of '%s'" ) ) , svn_dirent_local_style ( relative , pool ) ) ; const char *svn_dirent_local_style(const char *dirent,apr_pool_t *pool) if ( dirent [ 0 ] == '\0' )  return "." ; return dirent ; svn_error_t * svn_err__temp = svn_path_cstring_to_utf8 ( pabsolute , buffer , pool ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  return 0 ; if ( svn_err__temp )  while ( 0 )  if ( targets -> nelts == 1 )  removed = ( memset ( apr_palloc ( scratch_pool , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) , 0 , ( targets -> nelts ) * sizeof ( svn_boolean_t ) ) ); abs_targets = apr_array_make ( scratch_pool , targets -> nelts , ( sizeof ( const char * ) ) ); for (i = 1; i < targets -> nelts; ++i) const char * rel = ( ( const char * * ) ( targets -> elts ) ) [ i ] ; const char * absolute ; svn_error_t * svn_err__temp = svn_dirent_get_absolute ( & absolute , rel , scratch_pool ) ; svn_error_t *svn_dirent_get_absolute(const char **pabsolute,const char *relative,apr_pool_t *pool) char * buffer ; apr_status_t apr_err ; const char * path_apr ; if ( ! ( ! svn_path_is_url ( relative ) ) )  svn_error_t * svn_err__temp = svn_error__malfunction ( ! 0 , "dirent_uri.c" , 1571 , "! svn_path_is_url(relative)" ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  while ( 0 )  svn_error_t * svn_err__temp = svn_path_cstring_from_utf8 ( & path_apr , relative , pool ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  apr_err = apr_filepath_merge ( & buffer , ( ( void * ) 0 ) , path_apr , 0x04 , pool ); if ( apr_err )  if ( svn_dirent_is_absolute ( relative ) && svn_dirent_is_canonical ( relative , pool ) && ! svn_path_is_backpath_present ( relative ) )  return 0 ; return svn_error_createf ( SVN_ERR_BAD_FILENAME , svn_error_create ( apr_err , ( ( void * ) 0 ) , ( ( void * ) 0 ) ) , ( dgettext ( "subversion" , "Couldn't determine absolute path of '%s'" ) ) , svn_dirent_local_style ( relative , pool ) ) ; svn_error_t * svn_err__temp = svn_path_cstring_to_utf8 ( pabsolute , buffer , pool ) ; if ( svn_err__temp )  return svn_err__temp ; while ( 0 )  return 0 ; if ( svn_err__temp )  while ( 0 )  * pcommon = ( svn_dirent_get_longest_ancestor ( * pcommon , absolute , scratch_pool ) ); char *svn_dirent_get_longest_ancestor(const char *dirent1,const char *dirent2,apr_pool_t *pool) return apr_pstrndup ( pool , dirent1 , get_longest_ancestor_length ( type_dirent , dirent1 , dirent2 , pool ) ) ; static apr_size_t get_longest_ancestor_length(path_type_t types,const char *path1,const char *path2,apr_pool_t *pool) apr_size_t path1_len ; apr_size_t path2_len ; apr_size_t i = 0 ; apr_size_t last_dirsep = 0 ; path1_len = strlen ( path1 ); path2_len = strlen ( path2 ); if ( path1 [ 0 ] == '\0' || path2 [ 0 ] == '\0' )  return 0 ; while ( path1 [ i ] == path2 [ i ] )  if ( path1 [ i ] == 47 )  last_dirsep = i; i ++; if ( i == path1_len || i == path2_len )  if ( i == 1 && path1 [ 0 ] == 47 && path2 [ 0 ] == 47 )  return 1 ; if ( types == type_dirent && i == 0 )  return 0 ; if ( i == path1_len && path2 [ i ] == 47 || i == path2_len && path1 [ i ] == 47 || i == path1_len && i == path2_len )  return i ; if ( last_dirsep == 0 && path1 [ 0 ] == 47 && path2 [ 0 ] == 47 )  return 1 ; return last_dirsep ; * pcommon = ( apr_pstrdup ( result_pool , * pcommon ) ); if ( pcondensed_targets != ( ( void * ) 0 ) )  if ( remove_redundancies )  for (i = 0; i < abs_targets -> nelts; ++i) int j ; if ( removed [ i ] )  for (j = i + 1; j < abs_targets -> nelts; ++j) const char * abs_targets_i ; const char * abs_targets_j ; const char * ancestor ; if ( removed [ j ] )  abs_targets_i = ( ( const char * * ) ( abs_targets -> elts ) ) [ i ]; abs_targets_j = ( ( const char * * ) ( abs_targets -> elts ) ) [ j ]; ancestor = ( svn_dirent_get_longest_ancestor ( abs_targets_i , abs_targets_j , scratch_pool ) ); char *svn_dirent_get_longest_ancestor(const char *dirent1,const char *dirent2,apr_pool_t *pool) return apr_pstrndup ( pool , dirent1 , get_longest_ancestor_length ( type_dirent , dirent1 , dirent2 , pool ) ) ; if ( ( * ancestor ) == '\0' )  if ( strcmp ( ancestor , abs_targets_i ) == 0 )  removed [ j ] = ! 0; if ( strcmp ( ancestor , abs_targets_j ) == 0 )  removed [ i ] = ! 0; for (i = 0; i < abs_targets -> nelts; ++i) const char * abs_targets_i = ( ( const char * * ) ( abs_targets -> elts ) ) [ i ] ; if ( strcmp ( abs_targets_i , * pcommon ) == 0 && ! removed [ i ] )  removed [ i ] = ! 0; 