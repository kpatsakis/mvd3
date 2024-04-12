static ssize_t rtl8139_receive(NetClientState *nc, const uint8_t *buf, size_t size) return rtl8139_do_receive ( nc , buf , size , 1 ) ; static ssize_t rtl8139_do_receive(NetClientState *nc, const uint8_t *buf, size_t size_, int do_interrupt) RTL8139State * s = qemu_get_nic_opaque ( nc ) ; int size = size_ ; uint8_t buf1 [ MIN_BUF_SIZE + VLAN_HLEN ] ; static const uint8_t broadcast_macaddr [ 6 ] = { 0xff , 0xff , 0xff , 0xff , 0xff , 0xff } ; if ( ! s -> clock_enabled )  if ( ! rtl8139_receiver_enabled ( s ) )  static int rtl8139_receiver_enabled(RTL8139State *s) return s -> bChipCmdState & CmdRxEnb ; if ( s -> RxConfig & AcceptAllPhys )  if ( ! memcmp ( buf , broadcast_macaddr , 6 ) )  if ( ! ( s -> RxConfig & AcceptBroadcast ) )  if ( buf [ 0 ] & 0x01 )  if ( ! ( s -> RxConfig & AcceptMulticast ) )  int mcast_idx = compute_mcast_idx ( buf ) ; if ( ! ( s -> mult [ mcast_idx >> 3 ] & ( 1 << ( mcast_idx & 7 ) ) ) )  if ( s -> phys [ 0 ] == buf [ 0 ] && s -> phys [ 1 ] == buf [ 1 ] && s -> phys [ 2 ] == buf [ 2 ] && s -> phys [ 3 ] == buf [ 3 ] && s -> phys [ 4 ] == buf [ 4 ] && s -> phys [ 5 ] == buf [ 5 ] )  if ( ! ( s -> RxConfig & AcceptMyPhys ) )  if ( size < MIN_BUF_SIZE + VLAN_HLEN )  memcpy ( buf1 , buf , size ); memset ( buf1 + size , 0 , MIN_BUF_SIZE + VLAN_HLEN - size ); buf = buf1; if ( s -> CpCmd & CPlusRxVLAN && be16_to_cpup ( ( uint16_t * ) & buf [ ETHER_ADDR_LEN * 2 ] ) == ETH_P_8021Q )  dot1q_buf = & buf [ ETHER_ADDR_LEN * 2 ]; rxdw1 |= CP_RX_TAVA | le16_to_cpup ( ( uint16_t * ) & dot1q_buf [ ETHER_TYPE_LEN ] ); DPRINTF ( "C+ Rx mode : extracted vlan tag with tci: " "%u\n" be16_to_cpup ( ( uint16_t * ) & dot1q_buf [ ETHER_TYPE_LEN ] ) ) static inline GCC_FMT_ATTR(1, 2) int DPRINTF(const char *fmt, ...) rxdw1 &= ~CP_RX_TAVA; if ( dot1q_buf )  pci_dma_write ( d , rx_addr , buf , 2 * ETHER_ADDR_LEN ); pci_dma_write ( d , rx_addr + 2 * ETHER_ADDR_LEN , buf + 2 * ETHER_ADDR_LEN + VLAN_HLEN , size - 2 * ETHER_ADDR_LEN ); pci_dma_write ( d , rx_addr , buf , size ); val = cpu_to_le32 ( crc32 ( 0 , buf , size_ ) ); pci_dma_write ( d , rx_addr + size , ( uint8_t * ) & val , 4 ); pci_dma_write ( d , cplus_rx_ring_desc , ( uint8_t * ) & val , 4 ); val = cpu_to_le32 ( rxdw1 ); pci_dma_write ( d , cplus_rx_ring_desc + 4 , ( uint8_t * ) & val , 4 ); rtl8139_write_buffer ( s , buf , size ); static void rtl8139_write_buffer(RTL8139State *s, const void *buf, int size) PCIDevice * d = PCI_DEVICE ( s ) ; if ( s -> RxBufAddr + size > s -> RxBufferSize )  int wrapped = MOD2 ( s -> RxBufAddr + size , s -> RxBufferSize ) ; if ( wrapped && ! ( s -> RxBufferSize < 65536 && rtl8139_RxWrap ( s ) ) )  static int rtl8139_RxWrap(RTL8139State *s) return ( s -> RxConfig & ( 1 << 7 ) ) ; DPRINTF ( ">>> rx packet wrapped in buffer at %d\n" , size - wrapped ); static inline GCC_FMT_ATTR(1, 2) int DPRINTF(const char *fmt, ...) if ( size > wrapped )  pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf , size - wrapped ); s -> RxBufAddr = 0; pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf + ( size - wrapped ) , wrapped ); s -> RxBufAddr = wrapped; pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf , size ); s -> RxBufAddr += size; val = cpu_to_le32 ( crc32 ( 0 , buf , size ) ); rtl8139_write_buffer ( s , ( uint8_t * ) & val , 4 ); static void rtl8139_write_buffer(RTL8139State *s, const void *buf, int size) PCIDevice * d = PCI_DEVICE ( s ) ; if ( s -> RxBufAddr + size > s -> RxBufferSize )  int wrapped = MOD2 ( s -> RxBufAddr + size , s -> RxBufferSize ) ; if ( wrapped && ! ( s -> RxBufferSize < 65536 && rtl8139_RxWrap ( s ) ) )  DPRINTF ( ">>> rx packet wrapped in buffer at %d\n" , size - wrapped ); if ( size > wrapped )  pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf , size - wrapped ); s -> RxBufAddr = 0; pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf + ( size - wrapped ) , wrapped ); s -> RxBufAddr = wrapped; pci_dma_write ( d , s -> RxBuf + s -> RxBufAddr , buf , size ); s -> RxBufAddr += size; 