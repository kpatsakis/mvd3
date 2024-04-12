static int32_t scsi_target_send_command(SCSIRequest *req, uint8_t *buf) SCSITargetReq * r = DO_UPCAST ( SCSITargetReq , req , req ) ; switch ( buf [ 0 ] )  if ( ! scsi_target_emulate_report_luns ( r ) )  static bool scsi_target_emulate_report_luns(SCSITargetReq *r) if ( r -> req . cmd . xfer < 16 )  return false ; if ( r -> req . cmd . buf [ 2 ] > 2 )  return false ; return true ; if ( ! scsi_target_emulate_inquiry ( r ) )  static bool scsi_target_emulate_inquiry(SCSITargetReq *r) if ( r -> req . cmd . buf [ 1 ] & 0x2 )  return false ; if ( r -> req . cmd . buf [ 1 ] & 0x1 )  uint8_t page_code = r -> req . cmd . buf [ 2 ] ; switch ( page_code )  return false ; return true ; if ( r -> req . cmd . buf [ 2 ] != 0 )  return false ; return true ; r -> len = scsi_device_get_sense ( r -> req . dev , r -> buf , MIN ( req -> cmd . xfer , r -> buf_len ) , ( req -> cmd . buf [ 1 ] & 1 ) == 0 ); int scsi_device_get_sense(SCSIDevice *dev, uint8_t *buf, int len, bool fixed) return scsi_build_sense ( dev -> sense , dev -> sense_len , buf , len , fixed ) ; int scsi_build_sense(uint8_t *in_buf, int uint8_t *buf, int len, bool fixed) bool fixed_in ; if ( ! fixed && len < 8 )  return 0 ; if ( in_len == 0 )  fixed_in = ( in_buf [ 0 ] & 2 ) == 0; if ( fixed == fixed_in )  return MIN ( len , in_len ) ; if ( fixed )  return MIN ( len , SCSI_SENSE_LEN ) ; return 8 ; if ( r -> req . dev -> sense_is_ua )  r -> req . dev -> sense_len = 0; r -> req . dev -> sense_is_ua = false; if ( ! r -> len )  scsi_req_complete ( req , GOOD ); void scsi_req_complete(SCSIRequest *req, int status) req -> status = status; assert ( req -> sense_len <= sizeof ( req -> sense ) ); 