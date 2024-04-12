static int CVE_2011_1147_VULN_udptl_rx_packet(struct ast_udptl *s, uint8_t *buf, int len) int stat ; int ptr ; int ifp_len ; int repaired [ 16 ] ; ptr = 0; if ( ptr + 2 > len )  ptr += 2; if ( ( stat = decode_open_type ( buf , len , & ptr , & ifp , & ifp_len ) ) != 0 )  if ( ptr + 1 > len )  if ( ( buf [ ptr ++ ] & 0x80 ) == 0 )  if ( ifp_len > LOCAL_FAX_MAX_DATAGRAM )  memset ( repaired , 0 , sizeof ( repaired ) ); repaired [ x ] = TRUE; s -> rx [ x ] . fec_span = span; s -> rx [ x ] . fec_entries = entries; if ( ( stat = decode_open_type ( buf , len , & ptr , & data , & s -> rx [ x ] . fec_len [ i ] ) ) != 0 )  if ( s -> rx [ x ] . fec_len [ i ] > LOCAL_FAX_MAX_DATAGRAM )  memcpy ( s -> rx [ x ] . fec [ i ] , data , s -> rx [ x ] . fec_len [ i ] ); for (j = 0; j < s->rx[x].fec_len[i]; j++) for (l = x; l != ((x - (16 - span*entries)) & UDPTL_BUF_MASK); l = (l - 1) & UDPTL_BUF_MASK) if ( s -> rx [ l ] . fec_len [ 0 ] <= 0 )  for (m = 0; m < s->rx[l].fec_entries; m++) limit = ( l + m ) & UDPTL_BUF_MASK; for (which = -1, k = (limit - s->rx[l].fec_span * s->rx[l].fec_entries) & UDPTL_BUF_MASK; k != limit; k = (k + s->rx[l].fec_entries) & UDPTL_BUF_MASK) if ( s -> rx [ k ] . buf_len <= 0 )  which = ( which == - 1 ) ? k : - 2; if ( which >= 0 )  for (j = 0; j < s->rx[l].fec_len[m]; j++) s -> rx [ which ] . buf [ j ] = s -> rx [ l ] . fec [ m ] [ j ]; for (k = (limit - s->rx[l].fec_span * s->rx[l].fec_entries) & UDPTL_BUF_MASK; k != limit; k = (k + s->rx[l].fec_entries) & UDPTL_BUF_MASK) s -> rx [ which ] . buf [ j ] ^= ( s -> rx [ k ] . buf_len > j ) ? s -> rx [ k ] . buf [ j ] : 0; s -> rx [ which ] . buf_len = s -> rx [ l ] . fec_len [ m ]; repaired [ which ] = TRUE; for (l = (x + 1) & UDPTL_BUF_MASK, j = seq_no - UDPTL_BUF_MASK; l != x; l = (l + 1) & UDPTL_BUF_MASK, j++) if ( repaired [ l ] )  s -> f [ ifp_no ] . frametype = AST_FRAME_MODEM; s -> f [ ifp_no ] . subclass = AST_MODEM_T38; s -> f [ ifp_no ] . mallocd = 0; s -> f [ ifp_no ] . seqno = j; s -> f [ ifp_no ] . datalen = s -> rx [ l ] . buf_len; s -> f [ ifp_no ] . data = s -> rx [ l ] . buf; s -> f [ ifp_no ] . offset = 0; s -> f [ ifp_no ] . src = "UDPTL"; if ( ifp_no > 0 )  AST_LIST_NEXT ( & s -> f [ ifp_no - 1 ] , frame_list ) = & s -> f [ ifp_no ]; AST_LIST_NEXT ( & s -> f [ ifp_no ] , frame_list ) = NULL; ifp_no ++; if ( seq_no >= s -> rx_seq_no )  s -> f [ ifp_no ] . frametype = AST_FRAME_MODEM; s -> f [ ifp_no ] . subclass = AST_MODEM_T38; s -> f [ ifp_no ] . mallocd = 0; s -> f [ ifp_no ] . seqno = seq_no; s -> f [ ifp_no ] . datalen = ifp_len; s -> f [ ifp_no ] . data = ( uint8_t * ) ifp; s -> f [ ifp_no ] . offset = 0; s -> f [ ifp_no ] . src = "UDPTL"; if ( ifp_no > 0 )  AST_LIST_NEXT ( & s -> f [ ifp_no - 1 ] , frame_list ) = & s -> f [ ifp_no ]; AST_LIST_NEXT ( & s -> f [ ifp_no ] , frame_list ) = NULL; ifp_no ++; s -> rx_seq_no = seq_no + 1; return ifp_no ; 