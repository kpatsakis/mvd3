static int32_t scsi_invalid_command(SCSIRequest *req, uint8_t *buf) scsi_req_complete ( req , CHECK_CONDITION ); void scsi_req_complete(SCSIRequest *req, int status) req -> status = status; if ( status == GOOD )  req -> sense_len = 0; if ( req -> sense_len )  req -> dev -> sense_len = 0; req -> dev -> sense_is_ua = false; scsi_req_dequeue ( req ); static void scsi_req_dequeue(SCSIRequest *req) req -> retry = false; if ( req -> enqueued )  req -> enqueued = false; scsi_req_unref ( req ); void scsi_req_unref(SCSIRequest *req) assert ( req -> refcount > 0 ); 