static gboolean vwr_read(wtap *wth, int *err, gchar **err_info, gint64 *data_offset) vwr_t * vwr = ( vwr_t * ) wth -> priv ; guint8 rec [ B_SIZE ] ; int rec_size = 0 , IS_TX ; guint8 * data_ptr ; if ( ! vwr_read_rec_header ( vwr , wth -> fh , & rec_size , & IS_TX , err , err_info ) )  if ( file_read ( rec , rec_size , wth -> fh ) != rec_size )  data_ptr = buffer_start_ptr ( wth -> frame_buffer ); switch ( vwr -> FPGA_VERSION )  vwr_read_rec_data_ethernet ( wth , data_ptr , rec , rec_size , IS_TX ); static void vwr_read_rec_data_ethernet(wtap *wth, guint8 *data_ptr, guint8 *rec, int rec_size, int IS_TX) int bytes_written = 0 ; bytes_written += 2; bytes_written += 2; bytes_written += 2; memset ( & data_ptr [ bytes_written ] , 0 , 2 ); bytes_written += 2; bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 4; bytes_written += 8; bytes_written += 8; bytes_written += 4; memset ( & data_ptr [ bytes_written ] , 0 , 4 ); memset ( & data_ptr [ bytes_written ] , 0 , 2 ); memset ( & data_ptr [ bytes_written ] , 0 , 4 ); memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length ); memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length - 4 ); 