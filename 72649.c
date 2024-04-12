static void pcnet_ioport_writel(void *opaque, uint32_t addr, uint32_t val) PCNetState * s = opaque ; if ( BCR_DWIO ( s ) )  switch ( addr & 0x0f )  pcnet_csr_writew ( s , s -> rap , val & 0xffff ); static void pcnet_csr_writew(PCNetState *s, uint32_t rap, uint32_t new_value) uint16_t val = new_value ; switch ( rap )  s -> csr [ 0 ] &= ~ ( val & 0x7f00 ); s -> csr [ 0 ] = ( s -> csr [ 0 ] & ~0x0040 ) | ( val & 0x0048 ); if ( CSR_TDMD ( s ) )  pcnet_transmit ( s ); static void pcnet_transmit(PCNetState *s) int count = CSR_XMTRL ( s ) - 1 ; int add_crc = 0 ; s -> xmit_pos = - 1; if ( ! CSR_TXON ( s ) )  s -> tx_busy = 1; if ( pcnet_tdte_poll ( s ) )  struct pcnet_TMD tmd ; if ( GET_FIELD ( tmd . status , TMDS , STP ) )  s -> xmit_pos = 0; if ( BCR_SWSTYLE ( s ) != 1 )  add_crc = GET_FIELD ( tmd . status , TMDS , ADDFCS ); if ( ! GET_FIELD ( tmd . status , TMDS , ENP ) )  int bcnt = 4096 - GET_FIELD ( tmd . length , TMDL , BCNT ) ; s -> xmit_pos += bcnt; if ( s -> xmit_pos >= 0 )  int bcnt = 4096 - GET_FIELD ( tmd . length , TMDL , BCNT ) ; s -> xmit_pos += bcnt; if ( CSR_LOOP ( s ) )  if ( BCR_SWSTYLE ( s ) == 1 )  add_crc = ! GET_FIELD ( tmd . status , TMDS , NOFCS ); s -> looptest = add_crc ? PCNET_LOOPTEST_CRC : PCNET_LOOPTEST_NOCRC; pcnet_receive ( s , s -> buffer , s -> xmit_pos ); s -> looptest = 0; s -> csr [ 0 ] &= ~0x0008; s -> csr [ 4 ] |= 0x0004; s -> xmit_pos = - 1; if ( ! CSR_TOKINTD ( s ) || ( CSR_LTINTEN ( s ) && GET_FIELD ( tmd . status , TMDS , LTINT ) ) )  s -> csr [ 0 ] |= 0x0200; if ( count -- )  if ( s -> xmit_pos >= 0 )  s -> csr [ 0 ] |= 0x0200; if ( ! CSR_DXSUFLO ( s ) )  if ( count -- )  static void pcnet_receive(void *opaque, const uint8_t *buf, int size) PCNetState * s = opaque ; uint8_t buf1 [ 60 ] ; if ( CSR_DRX ( s ) || CSR_STOP ( s ) || CSR_SPND ( s ) || ! size )  if ( size < MIN_BUF_SIZE )  memcpy ( buf1 , buf , size ); memset ( buf1 + size , 0 , MIN_BUF_SIZE - size ); buf = buf1; if ( CSR_PROM ( s ) || ( is_padr = padr_match ( s , buf , size ) ) || ( is_bcast = padr_bcast ( s , buf , size ) ) || ( is_ladr = ladr_match ( s , buf , size ) ) )  memcpy ( src , buf , size ); src [ size ] = 0; src [ size + 1 ] = 0; src [ size + 2 ] = 0; src [ size + 3 ] = 0; size += 4; PRINT_PKTHDR ( buf ); s -> phys_mem_write ( s -> dma_opaque , rbadr , src , count , CSR_BSWP ( s ) ); src += count; SET_FIELD ( & rmd . msg_length , RMDM , MCNT , size ); SET_FIELD ( & rmd . status , RMDS , PAM , ! CSR_PROM ( s ) && is_padr ); SET_FIELD ( & rmd . status , RMDS , LFAM , ! CSR_PROM ( s ) && is_ladr ); SET_FIELD ( & rmd . status , RMDS , BAM , ! CSR_PROM ( s ) && is_bcast ); 