static void rtl8139_io_writew(void *opaque, uint8_t addr, uint32_t val) switch ( addr )  rtl8139_io_writeb ( opaque , addr , val & 0xff ); static void rtl8139_io_writeb(void *opaque, uint8_t addr, uint32_t val) RTL8139State * s = opaque ; switch ( addr )  if ( val == 'R' )  if ( val == 'H' )  s -> clock_enabled = 0; s -> TxThresh = val; if ( val & ( 1 << 6 ) )  rtl8139_cplus_transmit ( s ); static void rtl8139_cplus_transmit(RTL8139State *s) while ( rtl8139_cplus_transmit_one ( s ) )  static int rtl8139_cplus_transmit_one(RTL8139State *s) if ( ! rtl8139_transmitter_enabled ( s ) )  if ( ! rtl8139_cp_transmitter_enabled ( s ) )  uint32_t val , txdw0 , txdw1 , txbufLO , txbufHI ; txdw0 = le32_to_cpu ( val ); if ( ! ( txdw0 & CP_TX_OWN ) )  if ( txdw0 & CP_TX_FS )  s -> cplus_txbuffer_offset = 0; int txsize = txdw0 & CP_TX_BUFFER_SIZE_MASK ; if ( ! s -> cplus_txbuffer )  s -> cplus_txbuffer_len = CP_TX_BUFFER_SIZE; s -> cplus_txbuffer = g_malloc ( s -> cplus_txbuffer_len ); s -> cplus_txbuffer_offset = 0; if ( s -> cplus_txbuffer_offset + txsize >= s -> cplus_txbuffer_len )  txsize = s -> cplus_txbuffer_len - s -> cplus_txbuffer_offset; s -> cplus_txbuffer_offset += txsize; if ( txdw0 & CP_TX_EOR )  s -> currCPlusTxDesc = 0; if ( s -> currCPlusTxDesc >= 64 )  s -> currCPlusTxDesc = 0; txdw0 &= ~CP_RX_OWN; txdw0 &= ~CP_TX_STATUS_UNF; txdw0 &= ~CP_TX_STATUS_TES; txdw0 &= ~CP_TX_STATUS_OWC; txdw0 &= ~CP_TX_STATUS_LNKF; txdw0 &= ~CP_TX_STATUS_EXC; if ( txdw0 & CP_TX_LS )  uint8_t * saved_buffer = s -> cplus_txbuffer ; if ( txdw0 & ( CP_TX_IPCS | CP_TX_UDPCS | CP_TX_TCPCS | CP_TX_LGSEN ) )  ip_header * ip = NULL ; int hlen = 0 ; uint8_t ip_protocol = 0 ; uint16_t ip_data_len = 0 ; uint8_t * eth_payload_data = NULL ; int proto = be16_to_cpu ( * ( uint16_t * ) ( saved_buffer + 12 ) ) ; if ( proto == ETH_P_IP )  eth_payload_data = saved_buffer + ETH_HLEN; ip = ( ip_header * ) eth_payload_data; if ( IP_HEADER_VERSION ( ip ) != IP_HEADER_VERSION_4 )  ip = NULL; hlen = IP_HEADER_LENGTH ( ip ); ip_protocol = ip -> ip_p; ip_data_len = be16_to_cpu ( ip -> ip_len ) - hlen; if ( ip )  if ( ( txdw0 & CP_TX_LGSEN ) && ip_protocol == IP_PROTO_TCP )  tcp_header * p_tcp_hdr = ( tcp_header * ) ( eth_payload_data + hlen ) ; int tcp_hlen = TCP_HEADER_DATA_OFFSET ( p_tcp_hdr ) ; int tcp_data_len = ip_data_len - tcp_hlen ; int tcp_chunk_size = ETH_MTU - hlen - tcp_hlen ; for (tcp_send_offset = 0; tcp_send_offset < tcp_data_len; tcp_send_offset += tcp_chunk_size) uint16_t chunk_size = tcp_chunk_size ; if ( tcp_send_offset + tcp_chunk_size >= tcp_data_len )  chunk_size = tcp_data_len - tcp_send_offset; if ( tcp_send_offset )  memcpy ( ( uint8_t * ) p_tcp_hdr + tcp_hlen , ( uint8_t * ) p_tcp_hdr + tcp_hlen + tcp_send_offset , chunk_size ); 