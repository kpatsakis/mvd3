static int CVE_2011_1147_PATCHED_udptl_rx_packet(struct ast_udptl *s, uint8_t *buf, int len) int stat ; int i ; int j ; int x ; int ptr ; int seq_no ; const uint8_t * data ; int ifp_len ; int repaired [ 16 ] ; int span ; int entries ; ptr = 0; if ( ptr + 2 > len )  seq_no = ( buf [ 0 ] << 8 ) | buf [ 1 ]; ptr += 2; if ( ( stat = decode_open_type ( buf , len , & ptr , & ifp , & ifp_len ) ) != 0 )  if ( ptr + 1 > len )  if ( ( buf [ ptr ++ ] & 0x80 ) == 0 )  if ( ifp_len > LOCAL_FAX_MAX_DATAGRAM )  for ( ; seq_no > s->rx_seq_no; s->rx_seq_no++) x = s -> rx_seq_no & UDPTL_BUF_MASK; s -> rx [ x ] . buf_len = - 1; s -> rx [ x ] . fec_len [ 0 ] = 0; s -> rx [ x ] . fec_span = 0; s -> rx [ x ] . fec_entries = 0; x = seq_no & UDPTL_BUF_MASK; memset ( repaired , 0 , sizeof ( repaired ) ); s -> rx [ x ] . buf_len = ifp_len; repaired [ x ] = TRUE; if ( ptr + 2 > len )  if ( buf [ ptr ++ ] != 1 )  span = buf [ ptr ++ ]; s -> rx [ x ] . fec_span = span; if ( ptr + 1 > len )  entries = buf [ ptr ++ ]; if ( entries > MAX_FEC_ENTRIES )  s -> rx [ x ] . fec_entries = entries; for (i = 0; i < entries; i++) if ( ( stat = decode_open_type ( buf , len , & ptr , & data , & s -> rx [ x ] . fec_len [ i ] ) ) != 0 )  if ( s -> rx [ x ] . fec_len [ i ] > LOCAL_FAX_MAX_DATAGRAM )  fprintf ( stderr , "FEC: " ); for (j = 0; j < s->rx[x].fec_len[i]; j++) fprintf ( stderr , "%02X " , data [ j ] ); fprintf ( stderr , "\n" ); 