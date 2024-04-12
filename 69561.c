static void arcmsr_hbaB_postqueue_isr(struct AdapterControlBlock *acb) uint32_t index ; uint32_t flag_ccb ; struct MessageUnit_B * reg = acb -> pmuB ; struct ARCMSR_CDB * pARCMSR_CDB ; struct CommandControlBlock * pCCB ; bool error ; index = reg -> doneq_index; while ( ( flag_ccb = reg -> done_qbuffer [ index ] ) != 0 )  reg -> done_qbuffer [ index ] = 0; pARCMSR_CDB = ( struct ARCMSR_CDB * ) ( acb -> vir2phy_offset + ( flag_ccb << 5 ) ); pCCB = container_of ( pARCMSR_CDB , struct CommandControlBlock , arcmsr_cdb ) error = ( flag_ccb & ARCMSR_CCBREPLY_FLAG_ERROR_MODE0 ) ? true : false; arcmsr_drain_donequeue ( acb , pCCB , error ); index ++; index %= ARCMSR_MAX_HBB_POSTQUEUE; reg -> doneq_index = index; static void arcmsr_drain_donequeue(struct AdapterControlBlock *acb, struct CommandControlBlock *pCCB, bool error) if ( ( pCCB -> acb != acb ) || ( pCCB -> startdone != ARCMSR_CCB_START ) )  if ( pCCB -> startdone == ARCMSR_CCB_ABORTED )  printk ( KERN_NOTICE "arcmsr%d: isr get an illegal ccb command \\n\t\t\t\tdone acb = '0x%p'" arcmsr_report_ccb_state ( acb , pCCB , error ); static void arcmsr_report_ccb_state(struct AdapterControlBlock struct CommandControlBlock *ccb, bool error) if ( ! error )  switch ( ccb -> arcmsr_cdb . DeviceStatus )  ccb -> pcmd -> result = DID_BAD_TARGET << 16; arcmsr_report_sense_info ( ccb ); static void arcmsr_report_sense_info(struct CommandControlBlock *ccb) struct scsi_cmnd * pcmd = ccb -> pcmd ; struct SENSE_DATA * sensebuffer = ( struct SENSE_DATA * ) pcmd -> sense_buffer ; if ( sensebuffer )  int sense_data_length = sizeof ( struct SENSE_DATA ) < SCSI_SENSE_BUFFERSIZE ? sizeof ( struct SENSE_DATA ) : SCSI_SENSE_BUFFERSIZE ; memset ( sensebuffer , 0 , SCSI_SENSE_BUFFERSIZE ); memcpy ( sensebuffer , ccb -> arcmsr_cdb . SenseData , sense_data_length ); sensebuffer -> ErrorCode = SCSI_SENSE_CURRENT_ERRORS; sensebuffer -> Valid = 1; 