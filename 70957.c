static pvscsi_io_write(void *opaque, hwaddr uint64_t val, unsigned size) PVSCSIState * s = opaque ; switch ( addr )  pvscsi_on_command ( s , val ); static pvscsi_on_command(PVSCSIState *s, uint64_t cmd_id) if ( ( cmd_id > PVSCSI_CMD_FIRST ) && ( cmd_id < PVSCSI_CMD_LAST ) )  s -> curr_cmd = PVSCSI_CMD_FIRST; s -> curr_cmd_data_cntr = 0; s -> reg_command_status = PVSCSI_COMMAND_NOT_ENOUGH_DATA; pvscsi_do_command_processing ( s ); static pvscsi_do_command_processing(PVSCSIState *s) assert ( s -> curr_cmd < PVSCSI_CMD_LAST ); 