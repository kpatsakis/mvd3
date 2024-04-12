static int get_scsi_requests(QEMUFile *f, void *pv, size_t size) SCSIDevice * s = pv ; SCSIBus * bus = DO_UPCAST ( SCSIBus , qbus , s -> qdev . parent_bus ) ; int8_t sbyte ; while ( ( sbyte = qemu_get_sbyte ( f ) ) > 0 )  uint8_t buf [ SCSI_CMD_BUF_SIZE ] ; uint32_t tag ; uint32_t lun ; SCSIRequest * req ; req = scsi_req_new ( s , tag , lun , buf , NULL ); SCSIRequest *scsi_req_new(SCSIDevice *d, uint32_t tag, uint32_t uint8_t *buf, void *hba_private) SCSIBus * bus = DO_UPCAST ( SCSIBus , qbus , d -> qdev . parent_bus ) ; const SCSIReqOps * ops ; SCSIDeviceClass * sc = SCSI_DEVICE_GET_CLASS ( d ) ; SCSIRequest * req ; SCSICommand cmd = . len = 0 int ret ; if ( ( d -> unit_attention . key == UNIT_ATTENTION || bus -> unit_attention . key == UNIT_ATTENTION ) && ( buf [ 0 ] != INQUIRY && buf [ 0 ] != REPORT_LUNS && buf [ 0 ] != GET_CONFIGURATION && buf [ 0 ] != GET_EVENT_STATUS_NOTIFICATION && ! ( buf [ 0 ] == REQUEST_SENSE && d -> sense_is_ua ) ) )  ops = & reqops_unit_attention; if ( lun != d -> lun || buf [ 0 ] == REPORT_LUNS || ( buf [ 0 ] == REQUEST_SENSE && d -> sense_len ) )  ops = & reqops_target_command; ops = NULL; if ( ops != NULL || ! sc -> parse_cdb )  ret = scsi_req_parse_cdb ( d , & cmd , buf ); int scsi_req_parse_cdb(SCSIDevice *dev, SCSICommand *cmd, uint8_t *buf) int rc ; cmd -> lba = - 1; cmd -> len = scsi_cdb_length ( buf ); int scsi_cdb_length(uint8_t *buf) int cdb_len ; switch ( buf [ 0 ] >> 5 )  cdb_len = 6; cdb_len = 10; cdb_len = 16; cdb_len = 12; cdb_len = - 1; return cdb_len ; switch ( dev -> type )  rc = scsi_req_stream_xfer ( cmd , dev , buf ); static int scsi_req_stream_xfer(SCSICommand *cmd, SCSIDevice *dev, uint8_t *buf) switch ( buf [ 0 ] )  cmd -> xfer = 0; cmd -> xfer = buf [ 4 ] | ( buf [ 3 ] << 8 ) | ( buf [ 2 ] << 16 ); if ( buf [ 1 ] & 0x01 )  cmd -> xfer *= dev -> blocksize; cmd -> xfer = buf [ 14 ] | ( buf [ 13 ] << 8 ) | ( buf [ 12 ] << 16 ); if ( buf [ 1 ] & 0x01 )  cmd -> xfer *= dev -> blocksize; cmd -> xfer = 0; cmd -> xfer = buf [ 13 ] | ( buf [ 12 ] << 8 ); switch ( buf [ 1 ] & 0x1f )  cmd -> xfer = 20; cmd -> xfer = 32; cmd -> xfer = buf [ 8 ] | ( buf [ 7 ] << 8 ); return - 1 ; cmd -> xfer = buf [ 4 ] | ( buf [ 3 ] << 8 ); return scsi_req_xfer ( cmd , dev , buf ) ; static int scsi_req_xfer(SCSICommand *cmd, SCSIDevice *dev, uint8_t *buf) return 0 ; return 0 ; rc = scsi_req_medium_changer_xfer ( cmd , dev , buf ); static int scsi_req_medium_changer_xfer(SCSICommand *cmd, SCSIDevice *dev, uint8_t *buf) switch ( buf [ 0 ] )  cmd -> xfer = 0; cmd -> xfer = buf [ 9 ] | ( buf [ 8 ] << 8 ) | ( buf [ 7 ] << 16 ); return scsi_req_xfer ( cmd , dev , buf ) ; static int scsi_req_xfer(SCSICommand *cmd, SCSIDevice *dev, uint8_t *buf) return 0 ; return 0 ; rc = scsi_req_xfer ( cmd , dev , buf ); static int scsi_req_xfer(SCSICommand *cmd, SCSIDevice *dev, uint8_t *buf) return 0 ; if ( rc != 0 )  return rc ; return 0 ; ret = sc -> parse_cdb ( d , & cmd , buf , hba_private ); if ( ret != 0 )  req = scsi_req_alloc ( & reqops_invalid_opcode , d , tag , lun , hba_private ); SCSIRequest *scsi_req_alloc(const SCSIReqOps *reqops, SCSIDevice uint32_t tag, uint32_t lun, void *hba_private) SCSIRequest * req ; SCSIBus * bus = scsi_bus_from_device ( d ) ; req = g_slice_alloc ( reqops -> size ); req -> refcount = 1; req -> bus = bus; req -> dev = d; req -> tag = tag; req -> lun = lun; req -> hba_private = hba_private; req -> status = - 1; req -> ops = reqops; return req ; if ( cmd . xfer > INT32_MAX )  req = scsi_req_alloc ( & reqops_invalid_field , d , tag , lun , hba_private ); SCSIRequest *scsi_req_alloc(const SCSIReqOps *reqops, SCSIDevice uint32_t tag, uint32_t lun, void *hba_private) SCSIRequest * req ; SCSIBus * bus = scsi_bus_from_device ( d ) ; req = g_slice_alloc ( reqops -> size ); req -> refcount = 1; req -> bus = bus; req -> dev = d; req -> tag = tag; req -> lun = lun; req -> hba_private = hba_private; req -> status = - 1; req -> ops = reqops; return req ; if ( ops )  req = scsi_req_alloc ( ops , d , tag , lun , hba_private ); SCSIRequest *scsi_req_alloc(const SCSIReqOps *reqops, SCSIDevice uint32_t tag, uint32_t lun, void *hba_private) SCSIRequest * req ; SCSIBus * bus = scsi_bus_from_device ( d ) ; req = g_slice_alloc ( reqops -> size ); req -> refcount = 1; req -> bus = bus; req -> dev = d; req -> tag = tag; req -> lun = lun; req -> hba_private = hba_private; req -> status = - 1; req -> ops = reqops; return req ; req = scsi_device_alloc_req ( d , tag , lun , buf , hba_private ); static SCSIRequest *scsi_device_alloc_req(SCSIDevice *s, uint32_t tag, uint32_t uint8_t *buf, void *hba_private) SCSIDeviceClass * sc = SCSI_DEVICE_GET_CLASS ( s ) ; if ( sc -> alloc_req )  return sc -> alloc_req ( s , tag , lun , buf , hba_private ) ; return NULL ; req -> cmd = cmd; req -> resid = req -> cmd . xfer; return req ; req -> retry = ( sbyte == 1 ); if ( bus -> info -> load_request )  req -> hba_private = bus -> info -> load_request ( f , req ); scsi_req_unref ( req ); void scsi_req_unref(SCSIRequest *req) assert ( req -> refcount > 0 ); 