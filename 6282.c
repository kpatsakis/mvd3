static e1000_receive(NetClientState *nc, const uint8_t *buf, size_t size) E1000State * s = qemu_get_nic_opaque ( nc ) ; uint8_t min_buf [ MIN_BUF_SIZE ] ; if ( ! ( s -> mac_reg [ STATUS ] & E1000_STATUS_LU ) )  if ( ! ( s -> mac_reg [ RCTL ] & E1000_RCTL_EN ) )  if ( size < sizeof ( min_buf ) )  memcpy ( min_buf , buf , size ); memset ( & min_buf [ size ] , 0 , sizeof ( min_buf ) - size ); buf = min_buf; if ( ! receive_filter ( s , buf , size ) )  static receive_filter(E1000State *s, const uint8_t *buf, int size) uint32_t f , rctl = s -> mac_reg [ RCTL ] , ra [ 2 ] , * rp ; if ( is_vlan_packet ( s , buf ) && vlan_rx_filter_enabled ( s ) )  static inline vlan_rx_filter_enabled(E1000State *s) return ( ( s -> mac_reg [ RCTL ] & E1000_RCTL_VFE ) != 0 ) ; static inline is_vlan_packet(E1000State *s, const uint8_t *buf) return ( be16_to_cpup ( ( uint16_t * ) ( buf + 12 ) ) == le16_to_cpup ( ( uint16_t * ) ( s -> mac_reg + VET ) ) ) ; uint16_t vid = be16_to_cpup ( ( uint16_t * ) ( buf + 14 ) ) ; uint32_t vfta = le32_to_cpup ( ( uint32_t * ) ( s -> mac_reg + VFTA ) + ( ( vid >> 5 ) & 0x7f ) ) ; if ( ( vfta & ( 1 << ( vid & 0x1f ) ) ) == 0 )  if ( rctl & E1000_RCTL_UPE )  if ( ( buf [ 0 ] & 1 ) && ( rctl & E1000_RCTL_MPE ) )  if ( ( rctl & E1000_RCTL_BAM ) && ! memcmp ( buf , bcast , sizeof bcast ) )  for (rp = s->mac_reg + RA; rp < s->mac_reg + RA + 32; rp += 2) if ( ! ( rp [ 1 ] & E1000_RAH_AV ) )  ra [ 0 ] = cpu_to_le32 ( rp [ 0 ] ); ra [ 1 ] = cpu_to_le32 ( rp [ 1 ] ); if ( ! memcmp ( buf , ( uint8_t * ) ra , 6 ) )  DBGOUT ( RXFILTER , "unicast match[%d]: %02x:%02x:%02x:%02x:%02x:%02x\n" , ( int ) ( rp - s -> mac_reg - RA ) / 2 , buf [ 0 ] , buf [ 1 ] , buf [ 2 ] , buf [ 3 ] , buf [ 4 ] , buf [ 5 ] ); DBGOUT ( RXFILTER , "unicast mismatch: %02x:%02x:%02x:%02x:%02x:%02x\n" , buf [ 0 ] , buf [ 1 ] , buf [ 2 ] , buf [ 3 ] , buf [ 4 ] , buf [ 5 ] ); f = mta_shift [ ( rctl >> E1000_RCTL_MO_SHIFT ) & 3 ]; f = ( ( ( buf [ 5 ] << 8 ) | buf [ 4 ] ) >> f ) & 0xfff; if ( s -> mac_reg [ MTA + ( f >> 5 ) ] & ( 1 << ( f & 0x1f ) ) )  DBGOUT ( RXFILTER , "dropping, inexact filter mismatch: %02x:%02x:%02x:%02x:%02x:%02x MO %d MTA[%d] %x\n" , buf [ 0 ] , buf [ 1 ] , buf [ 2 ] , buf [ 3 ] , buf [ 4 ] , buf [ 5 ] , ( rctl >> E1000_RCTL_MO_SHIFT ) & 3 , f >> 5 , s -> mac_reg [ MTA + ( f >> 5 ) ] ); if ( vlan_enabled ( s ) && is_vlan_packet ( s , buf ) )  static inline is_vlan_packet(E1000State *s, const uint8_t *buf) return ( be16_to_cpup ( ( uint16_t * ) ( buf + 12 ) ) == le16_to_cpup ( ( uint16_t * ) ( s -> mac_reg + VET ) ) ) ; static inline vlan_enabled(E1000State *s) return ( ( s -> mac_reg [ CTRL ] & E1000_CTRL_VME ) != 0 ) ; vlan_special = cpu_to_le16 ( be16_to_cpup ( ( uint16_t * ) ( buf + 14 ) ) ); memmove ( ( uint8_t * ) buf + 4 , buf , 12 ); desc . special = vlan_special; desc . status |= ( vlan_status | E1000_RXD_STAT_DD ); if ( desc . buffer_addr )  pci_dma_write ( d , le64_to_cpu ( desc . buffer_addr ) , buf + desc_offset + vlan_offset , copy_size ); desc . length = cpu_to_le16 ( desc_size ); desc . status |= E1000_RXD_STAT_EOP | E1000_RXD_STAT_IXSM; desc . status &= ~E1000_RXD_STAT_EOP; pci_dma_write ( d , base , & desc , sizeof ( desc ) ); 