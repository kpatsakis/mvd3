char *file_gets(char *buf,int len,FILE_T file) unsigned int left ; unsigned int n ; unsigned char * eol ; if ( buf == ( ( void * ) 0 ) || len < 1 )  if ( file -> err )  if ( file -> seek )  file -> seek = 0; if ( gz_skip ( file , file -> skip ) == - 1 )  static int gz_skip(FILE_T state,gint64 len) unsigned int n ; while ( len )  if ( state -> have )  n = ( ( ( gint64 ) ( state -> have ) ) > len ? ( ( unsigned int ) len ) : state -> have ); state -> have -= n; state -> next += n; state -> pos += n; len -= n; if ( state -> err )  return - 1 ; if ( state -> eof && state -> avail_in == 0 )  if ( fill_out_buffer ( state ) == - 1 )  static int fill_out_buffer(FILE_T state) if ( state -> compression == 0 )  if ( gz_head ( state ) == - 1 )  static int gz_head(FILE_T state) if ( state -> avail_in == 0 )  if ( fill_in_buffer ( state ) == - 1 )  static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  static int raw_read(FILE_T state,unsigned char *buf,unsigned int count,unsigned int *have) int ret ; * have = 0; ret = ( read ( state -> fd , ( buf + * have ) , ( count - * have ) ) ); if ( ret <= 0 )  * have += ret; state -> raw_pos += ret; while ( * have < count )  if ( ret < 0 )  return - 1 ; return 0 ; return - 1 ; return 0 ; return - 1 ; if ( state -> avail_in == 0 )  return 0 ; if ( state -> next_in [ 0 ] == 31 )  state -> avail_in --; state -> next_in ++; if ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 )  static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( state -> avail_in && state -> next_in [ 0 ] == 139 )  guint8 cm ; guint8 flags ; guint16 len ; guint16 hcrc ; state -> avail_in --; state -> next_in ++; if ( gz_next1 ( state , & cm ) == - 1 )  static int gz_next1(FILE_T state,guint8 *ret) int ch ; ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( cm != 8 )  state -> err = - 21; state -> err_info = "unknown compression method"; return - 1 ; if ( gz_next1 ( state , & flags ) == - 1 )  static int gz_next1(FILE_T state,guint8 *ret) int ch ; ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( flags & 0xe0 )  state -> err = - 21; state -> err_info = "reserved flag bits set"; return - 1 ; if ( gz_skipn ( state , 4 ) == - 1 )  static int gz_skipn(FILE_T state,size_t n) while ( n != 0 )  if ( ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) == - 1 )  static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; return - 1 ; n --; return 0 ; return - 1 ; if ( gz_skipn ( state , 1 ) == - 1 )  static int gz_skipn(FILE_T state,size_t n) while ( n != 0 )  if ( ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) == - 1 )  return - 1 ; n --; return 0 ; return - 1 ; if ( gz_skipn ( state , 1 ) == - 1 )  static int gz_skipn(FILE_T state,size_t n) while ( n != 0 )  if ( ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) == - 1 )  return - 1 ; n --; return 0 ; return - 1 ; if ( flags & 4 )  if ( gz_next2 ( state , & len ) == - 1 )  static int gz_next2(FILE_T state,guint16 *ret) guint16 val ; int ch ; val = ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ); static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( gz_skipn ( state , len ) == - 1 )  static int gz_skipn(FILE_T state,size_t n) while ( n != 0 )  if ( ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) == - 1 )  return - 1 ; n --; return 0 ; return - 1 ; if ( flags & 8 )  if ( gz_skipzstr ( state ) == - 1 )  static int gz_skipzstr(FILE_T state) int ch ; while ( ( ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) > 0 )  static int fill_in_buffer(FILE_T state) if ( state -> err )  return - 1 ; if ( state -> eof == 0 )  if ( raw_read ( state , state -> in , state -> size , ( ( unsigned int * ) ( & state -> avail_in ) ) ) == - 1 )  return - 1 ; return 0 ; if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( flags & 16 )  if ( gz_skipzstr ( state ) == - 1 )  static int gz_skipzstr(FILE_T state) int ch ; while ( ( ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ) > 0 )  if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; if ( flags & 2 )  if ( gz_next2 ( state , & hcrc ) == - 1 )  static int gz_next2(FILE_T state,guint16 *ret) guint16 val ; int ch ; val = ( ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ) ); ch = ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 ? - 1 : ( ( state -> avail_in == 0 ? - 1 : ( ( state -> avail_in -- , * ( state -> next_in ++ ) ) ) ) ) ); if ( ch == - 1 )  return - 1 ; return 0 ; return - 1 ; return 0 ; return 0 ; return - 1 ; if ( state -> have )  return 0 ; if ( state -> compression == 1 )  if ( raw_read ( state , state -> out , state -> size , & state -> have ) == - 1 )  static int raw_read(FILE_T state,unsigned char *buf,unsigned int count,unsigned int *have) int ret ; * have = 0; ret = ( read ( state -> fd , ( buf + * have ) , ( count - * have ) ) ); if ( ret <= 0 )  * have += ret; state -> raw_pos += ret; while ( * have < count )  if ( ret < 0 )  return - 1 ; return 0 ; return - 1 ; return 0 ; return - 1 ; return 0 ; left = ( ( unsigned int ) len ) - 1; if ( left )  if ( file -> have == 0 )  if ( file -> err )  if ( fill_out_buffer ( file ) == - 1 )  static int fill_out_buffer(FILE_T state) if ( state -> compression == 0 )  if ( gz_head ( state ) == - 1 )  return - 1 ; if ( state -> have )  return 0 ; if ( state -> compression == 1 )  if ( raw_read ( state , state -> out , state -> size , & state -> have ) == - 1 )  return - 1 ; return 0 ; if ( file -> have == 0 )  if ( buf == str )  n = ( file -> have > left ? left : file -> have ); eol = ( ( unsigned char * ) ( memchr ( ( file -> next ) , 10 , n ) ) ); if ( eol != ( ( void * ) 0 ) )  n = ( ( unsigned int ) ( eol - file -> next ) ) + 1; memcpy ( buf , ( file -> next ) , n ); file -> have -= n; file -> next += n; file -> pos += n; left -= n; buf += n; while ( left && eol == ( ( void * ) 0 ) )  buf [ 0 ] = 0; 