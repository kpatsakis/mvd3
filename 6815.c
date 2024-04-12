static gboolean vwr_read(wtap *wth, int *err, gchar **err_info, gint64 *data_offset) vwr_t * vwr = ( vwr_t * ) wth -> priv ; guint8 rec [ B_SIZE ] ; int rec_size = 0 , IS_TX ; guint8 * data_ptr ; if ( ! vwr_read_rec_header ( vwr , wth -> fh , & rec_size , & IS_TX , err , err_info ) )  static gboolean vwr_read_rec_header(vwr_t *vwr, FILE_T fh, int *rec_size, int *IS_TX, int *err, gchar **err_info) int bytes_read , file_off ; int f_len , v_type ; guint8 header [ 16 ] ; while ( 1 )  if ( ( bytes_read = file_read ( header , 16 , fh ) ) != 16 )  return ( FALSE ) ; if ( ( f_len = decode_msg ( vwr , header , & v_type , IS_TX ) ) != 0 )  static int decode_msg(vwr_t *vwr, guint8 *rec, int *v_type, int *IS_TX) guint8 cmd ; guint32 wd2 , wd3 ; int v_size = 0 ; cmd = rec [ 0 ]; wd2 = pntohl ( & rec [ 8 ] ); wd3 = pntohl ( & rec [ 12 ] ); switch ( cmd )  v_size = ( int ) ( wd2 & 0xffff ); v_size = ( int ) ( wd2 & 0xffff ); v_size = ( int ) ( wd3 & 0xffff ); return ( v_size ) ; if ( f_len > B_SIZE )  return ( FALSE ) ; if ( v_type != VT_FRAME )  if ( file_seek ( fh , f_len , SEEK_CUR , err ) < 0 )  return ( FALSE ) ; return ( TRUE ) ; if ( file_read ( rec , rec_size , wth -> fh ) != rec_size )  data_ptr = buffer_start_ptr ( wth -> frame_buffer ); switch ( vwr -> FPGA_VERSION )  vwr_read_rec_data_ethernet ( wth , data_ptr , rec , rec_size , IS_TX ); static void vwr_read_rec_data_ethernet(wtap *wth, guint8 *data_ptr, guint8 *rec, int rec_size, int IS_TX) vwr_t * vwr = ( vwr_t * ) wth -> priv ; int bytes_written = 0 ; register int i register guint8 * s_ptr , * m_ptr ; gint16 msdu_length , actual_octets ; m_ptr = & ( rec [ 0 ] ); s_ptr = & ( rec [ rec_size - vwr -> STATS_LEN ] ); msdu_length = pntohs ( & s_ptr [ vwr -> OCTET_OFF ] ); actual_octets = msdu_length; if ( msdu_length > ( rec_size - ( int ) vwr -> STATS_LEN ) )  msdu_length = ( rec_size - ( int ) vwr -> STATS_LEN ); bytes_written += 2; bytes_written += 2; bytes_written += 2; memset ( & data_ptr [ bytes_written ] , 0 , 2 ); bytes_written += 2; bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 4; bytes_written += 8; bytes_written += 8; bytes_written += 4; memset ( & data_ptr [ bytes_written ] , 0 , 4 ); bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 2; memset ( & data_ptr [ bytes_written ] , 0 , 2 ); bytes_written += 2; bytes_written += 4; bytes_written += 4; memset ( & data_ptr [ bytes_written ] , 0 , 4 ); bytes_written += 4; if ( rec_size < ( ( int ) actual_octets + ( int ) vwr -> STATS_LEN ) )  memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length ); memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length - 4 ); 