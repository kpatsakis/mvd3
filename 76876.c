static void pmac_ide_writeb (void target_phys_addr_t addr, uint32_t val) MACIOIDEState * d = opaque ; addr = ( addr & 0xFFF ) >> 4; switch ( addr )  ide_ioport_write ( d -> ide_if , addr , val ); static void ide_ioport_write(void *opaque, uint32_t addr, uint32_t val) IDEState * ide_if = opaque ; IDEState * s ; int unit , n ; addr &= 7; if ( addr != 7 && ( ide_if -> cur_drive -> status & ( BUSY_STAT | DRQ_STAT ) ) )  switch ( addr )  ide_if [ 0 ] . hob_feature = ide_if [ 0 ] . feature; ide_if [ 1 ] . hob_feature = ide_if [ 1 ] . feature; ide_if [ 0 ] . feature = val; ide_if [ 1 ] . feature = val; ide_if [ 0 ] . hob_nsector = ide_if [ 0 ] . nsector; ide_if [ 1 ] . hob_nsector = ide_if [ 1 ] . nsector; ide_if [ 0 ] . nsector = val; ide_if [ 1 ] . nsector = val; ide_if [ 0 ] . hob_sector = ide_if [ 0 ] . sector; ide_if [ 1 ] . hob_sector = ide_if [ 1 ] . sector; ide_if [ 0 ] . sector = val; ide_if [ 1 ] . sector = val; ide_if [ 0 ] . hob_lcyl = ide_if [ 0 ] . lcyl; ide_if [ 1 ] . hob_lcyl = ide_if [ 1 ] . lcyl; ide_if [ 0 ] . lcyl = val; ide_if [ 1 ] . lcyl = val; ide_if [ 0 ] . hob_hcyl = ide_if [ 0 ] . hcyl; ide_if [ 1 ] . hob_hcyl = ide_if [ 1 ] . hcyl; ide_if [ 0 ] . hcyl = val; ide_if [ 1 ] . hcyl = val; ide_if [ 0 ] . select = ( val & ~0x10 ) | 0xa0; ide_if [ 1 ] . select = ( val | 0x10 ) | 0xa0; unit = ( val >> 4 ) & 1; s = ide_if + unit; ide_if -> cur_drive = s; s = ide_if -> cur_drive; if ( ! s -> bs )  if ( ( s -> status & ( BUSY_STAT | DRQ_STAT ) ) && val != WIN_DEVICE_RESET )  switch ( val )  s -> status = BUSY_STAT; s -> status = READY_STAT; if ( s -> is_cdrom )  s -> status = READY_STAT | SEEK_STAT; if ( s -> is_cdrom )  ide_atapi_identify ( s ); static void ide_atapi_identify(IDEState *s) if ( s -> identify_set )  memset ( s -> io_buffer , 0 , 512 ); p = ( uint16_t * ) s -> io_buffer; put_le16 ( p + 0 , ( 2 << 14 ) | ( 5 << 8 ) | ( 1 << 7 ) | ( 2 << 5 ) | ( 0 << 0 ) ); padstr ( ( char * ) ( p + 10 ) , s -> drive_serial_str , 20 ); put_le16 ( p + 20 , 3 ); put_le16 ( p + 21 , 512 ); put_le16 ( p + 22 , 4 ); padstr ( ( char * ) ( p + 23 ) , QEMU_VERSION , 8 ); padstr ( ( char * ) ( p + 27 ) , "QEMU DVD-ROM" , 40 ); put_le16 ( p + 48 , 1 ); put_le16 ( p + 49 , 1 << 9 | 1 << 8 ); put_le16 ( p + 53 , 7 ); put_le16 ( p + 62 , 7 ); put_le16 ( p + 63 , 7 ); put_le16 ( p + 64 , 0x3f ); put_le16 ( p + 65 , 0xb4 ); put_le16 ( p + 66 , 0xb4 ); put_le16 ( p + 67 , 0x12c ); put_le16 ( p + 68 , 0xb4 ); put_le16 ( p + 71 , 30 ); put_le16 ( p + 72 , 30 ); put_le16 ( p + 80 , 0x1e ); put_le16 ( p + 88 , 0x3f | ( 1 << 13 ) ); memcpy ( s -> identify_data , p , sizeof ( s -> identify_data ) ); s -> identify_set = 1; 