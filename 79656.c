void svn_stringbuf_set(svn_stringbuf_t *str,const char *value) apr_size_t amt = strlen ( value ) ; svn_stringbuf_ensure ( str , amt ); void svn_stringbuf_ensure(svn_stringbuf_t *str,apr_size_t minimum_size) membuf_ensure ( & mem , & str -> blocksize , minimum_size , str -> pool ); inline static void membuf_ensure(void **data,apr_size_t *size,apr_size_t minimum_size,apr_pool_t *pool) if ( minimum_size > * size )  apr_size_t new_size = * size ; if ( new_size == 0 )  new_size = minimum_size; while ( new_size < minimum_size )  const apr_size_t prev_size = new_size ; new_size *= 2; if ( prev_size > new_size )  new_size = minimum_size; membuf_create ( data , size , new_size , pool ); inline static void membuf_create(void **data,apr_size_t *size,apr_size_t minimum_size,apr_pool_t *pool) minimum_size = minimum_size + ( 8 - 1 ) & ( ~ ( 8 - 1 ) ); * data = ( ! minimum_size ? ( ( void * ) 0 ) : apr_palloc ( pool , minimum_size ) ); * size = minimum_size; if ( mem && mem != ( str -> data ) )  if ( str -> data )  memcpy ( mem , ( str -> data ) , str -> len + 1 ); str -> data = mem; memcpy ( ( str -> data ) , value , amt + 1 ); str -> len = amt; 