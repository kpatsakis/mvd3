void svn_dirent_split(const char **dirpath,const char **base_name,const char *dirent,apr_pool_t *pool) if ( base_name )  * base_name = svn_dirent_basename ( dirent , pool ); const char *svn_dirent_basename(const char *dirent,apr_pool_t *pool) apr_size_t len = strlen ( dirent ) ; if ( svn_dirent_is_root ( dirent , len ) )  svn_boolean_t svn_dirent_is_root(const char *dirent,apr_size_t len) if ( len == 1 && dirent [ 0 ] == 47 )  start = len; while ( start > 0 && dirent [ start - 1 ] != 47 )  return ( apr_pstrmemdup ( pool , dirent + start , len - start ) ) ; return dirent + start ; 