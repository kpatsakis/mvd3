void svn_stringbuf_replace(svn_stringbuf_t *str,apr_size_t pos,apr_size_t old_count,const char *bytes,apr_size_t new_count) if ( bytes + new_count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  const char * temp = ( apr_pstrndup ( str -> pool , bytes , new_count ) ) ; svn_stringbuf_replace ( str , pos , old_count , temp , new_count ); void svn_stringbuf_replace(svn_stringbuf_t *str,apr_size_t pos,apr_size_t old_count,const char *bytes,apr_size_t new_count) if ( bytes + new_count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  const char * temp = ( apr_pstrndup ( str -> pool , bytes , new_count ) ) ; svn_stringbuf_replace ( str , pos , old_count , temp , new_count ); void svn_stringbuf_replace(svn_stringbuf_t *str,apr_size_t pos,apr_size_t old_count,const char *bytes,apr_size_t new_count) if ( bytes + new_count > ( str -> data ) && bytes < ( str -> data + str -> blocksize ) )  if ( pos > str -> len )  pos = str -> len; if ( pos + old_count > str -> len )  old_count = str -> len - pos; if ( old_count < new_count )  apr_size_t delta = new_count - old_count ; svn_stringbuf_ensure ( str , str -> len + delta ); void svn_stringbuf_ensure(svn_stringbuf_t *str,apr_size_t minimum_size) void * mem = ( void * ) 0 ; if ( mem && mem != ( str -> data ) )  if ( str -> data )  memcpy ( mem , ( str -> data ) , str -> len + 1 ); str -> data = mem; 