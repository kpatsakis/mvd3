int file_read(void *buf,unsigned int len,FILE_T file) if ( len == 0 )  if ( file -> seek )  file -> seek = 0; if ( gz_skip ( file , file -> skip ) == - 1 )  static int gz_skip(FILE_T state,gint64 len) unsigned int n ; while ( len )  if ( state -> have )  n = ( ( ( gint64 ) ( state -> have ) ) > len ? ( ( unsigned int ) len ) : state -> have ); state -> have -= n; state -> next += n; state -> pos += n; len -= n; if ( state -> err )  if ( state -> eof && state -> avail_in == 0 )  if ( fill_out_buffer ( state ) == - 1 )  static int fill_out_buffer(FILE_T state) if ( state -> compression == 0 )  if ( gz_head ( state ) == - 1 )  static int gz_head(FILE_T state) if ( state -> avail_in == 0 )  if ( fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in == 0 )  if ( state -> next_in [ 0 ] == 31 )  state -> avail_in --; state -> next_in ++; if ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in && state -> next_in [ 0 ] == 139 )  state -> out [ 0 ] = 31; state -> have = 1; state -> raw = state -> pos; state -> next = state -> out; if ( state -> avail_in )  memcpy ( ( state -> next + state -> have ) , ( state -> next_in ) , ( state -> avail_in ) ); state -> have += state -> avail_in; state -> avail_in = 0; state -> compression = 1; 