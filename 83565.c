static pvscsi_on_cmd_setup_rings(PVSCSIState *s) PVSCSICmdDescSetupRings * rc = ( PVSCSICmdDescSetupRings * ) s -> curr_cmd_data ; pvscsi_ring_init_data ( & s -> rings , rc ); static pvscsi_ring_init_data(PVSCSIRingInfo *m, PVSCSICmdDescSetupRings *ri) uint32_t txr_len_log2 , rxr_len_log2 ; uint32_t req_ring_size , cmp_ring_size ; req_ring_size = ri -> reqRingNumPages * PVSCSI_MAX_NUM_REQ_ENTRIES_PER_PAGE; txr_len_log2 = pvscsi_log2 ( req_ring_size - 1 ); static pvscsi_log2(uint32_t input) assert ( input > 0 ); 