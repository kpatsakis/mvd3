void svn_relpath_split(const char **dirpath,const char **base_name,const char *relpath,apr_pool_t *pool) if ( dirpath )  * dirpath = ( svn_relpath_dirname ( relpath , pool ) ); char *svn_relpath_dirname(const char *relpath,apr_pool_t *pool) apr_size_t len = strlen ( relpath ) ; return apr_pstrmemdup ( pool , relpath , relpath_previous_segment ( relpath , len ) ) ; static apr_size_t relpath_previous_segment(const char *relpath,apr_size_t len) if ( len == 0 )  while ( len > 0 && relpath [ len ] != 47 )  return len ; 