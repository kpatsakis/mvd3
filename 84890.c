static iseries_read (wtap * wth, int *err, gchar ** err_info, gint64 *data_offset) gint64 offset ; offset = iseries_seek_next_packet ( wth , err , err_info ); static iseries_seek_next_packet (wtap * wth, int *err, gchar **err_info) iseries_t * iseries = ( iseries_t * ) wth -> priv ; char buf [ ISERIES_LINE_LENGTH ] , type [ 5 ] ; int line , num_items_scanned ; long buflen ; for (line = 0; line < ISERIES_MAX_TRACE_LEN; line++) if ( file_gets ( buf , ISERIES_LINE_LENGTH , wth -> fh ) == NULL )  if ( iseries -> format == ISERIES_FORMAT_UNICODE )  buflen = ( long ) strlen ( buf ); num_items_scanned = sscanf ( buf + 78 , "%*[ \n\t]ETHV2%*[ .:\n\t]TYPE%*[ .:\n\t]%4s" , type ); if ( num_items_scanned == 1 )  if ( file_seek ( wth -> fh , cur_off - buflen , SEEK_SET , err ) == - 1 )  return cur_off - buflen ; 