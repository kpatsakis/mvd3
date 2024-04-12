static CVE_2011_1495_PATCHED__ctl_do_mpt_command(struct MPT2SAS_ADAPTER struct mpt2_ioctl_command karg, void __user *mf, enum block_state state) u32 ioc_state ; u16 smid ; u16 wait_state_count ; if ( state == NON_BLOCKING && ! mutex_trylock ( & ioc -> ctl_cmds . mutex ) )  if ( mutex_lock_interruptible ( & ioc -> ctl_cmds . mutex ) )  if ( ioc -> ctl_cmds . status != MPT2_CMD_NOT_USED )  wait_state_count = 0; ioc_state = mpt2sas_base_get_iocstate ( ioc , 1 ); while ( ioc_state != MPI2_IOC_STATE_OPERATIONAL )  if ( wait_state_count ++ == 10 )  ioc_state = mpt2sas_base_get_iocstate ( ioc , 1 ); mpi_request = kzalloc ( ioc -> request_sz , GFP_KERNEL ); if ( ! mpi_request )  if ( karg . data_sge_offset * 4 > ioc -> request_sz || karg . data_sge_offset > ( UINT_MAX / 4 ) )  if ( copy_from_user ( mpi_request , mf , karg . data_sge_offset * 4 ) )  if ( mpi_request -> Function == MPI2_FUNCTION_SCSI_TASK_MGMT )  smid = mpt2sas_base_get_smid_hpr ( ioc , ioc -> ctl_cb_idx ); if ( ! smid )  smid = mpt2sas_base_get_smid_scsiio ( ioc , ioc -> ctl_cb_idx , NULL ); if ( ! smid )  ioc -> ctl_cmds . status = MPT2_CMD_PENDING; memset ( ioc -> ctl_cmds . reply , 0 , ioc -> reply_sz ); ioc -> ctl_cmds . smid = smid; if ( ! le16_to_cpu ( mpi_request -> FunctionDependent1 ) || le16_to_cpu ( mpi_request -> FunctionDependent1 ) > ioc -> facts . MaxDevHandle )  mpt2sas_base_free_smid ( ioc , smid ); data_out = pci_alloc_consistent ( ioc -> pdev , data_out_sz , & data_out_dma ); if ( ! data_out )  mpt2sas_base_free_smid ( ioc , smid ); if ( copy_from_user ( data_out , karg . data_out_buf_ptr , data_out_sz ) )  mpt2sas_base_free_smid ( ioc , smid ); data_in = pci_alloc_consistent ( ioc -> pdev , data_in_sz , & data_in_dma ); if ( ! data_in )  mpt2sas_base_free_smid ( ioc , smid ); mpt2sas_base_build_zero_len_sge ( ioc , psge ); ioc -> base_add_sg_single ( psge , sgl_flags | data_out_sz , data_out_dma ); psge += ioc -> sge_size; ioc -> base_add_sg_single ( psge , sgl_flags | data_in_sz , data_in_dma ); ioc -> base_add_sg_single ( psge , sgl_flags | data_out_sz , data_out_dma ); ioc -> base_add_sg_single ( psge , sgl_flags | data_in_sz , data_in_dma ); _ctl_display_some_debug ( ioc , smid , "ctl_request" , NULL ); scsiio_request -> SenseBufferLowAddress = mpt2sas_base_get_sense_buffer_dma ( ioc , smid ); memset ( ioc -> ctl_cmds . sense , 0 , SCSI_SENSE_BUFFERSIZE ); mpt2sas_base_put_smid_scsi_io ( ioc , smid , le16_to_cpu ( mpi_request -> FunctionDependent1 ) ); mpt2sas_base_put_smid_default ( ioc , smid ); dtmprintk ( ioc , printk ( MPT2SAS_INFO_FMT "TASK_MGMT: "handle(0x%04x), task_type(0x%02x)\n" , ioc -> name le16_to_cpu ( tm_request -> DevHandle ) , tm_request -> TaskType ) ) if ( _ctl_set_task_mid ( ioc , & karg , tm_request ) )  mpt2sas_base_free_smid ( ioc , smid ); mpt2sas_scsih_set_tm_flag ( ioc , le16_to_cpu ( tm_request -> DevHandle ) ); mpt2sas_base_put_smid_hi_priority ( ioc , smid ); data = data_out; if ( data [ 1 ] == 0x91 && ( data [ 10 ] == 1 || data [ 10 ] == 2 ) )  ioc -> ioc_link_reset_in_progress = 1; ioc -> ignore_loginfos = 1; mpt2sas_base_put_smid_default ( ioc , smid ); init_completion ( & ioc -> ctl_cmds . done ); timeleft = wait_for_completion_timeout ( & ioc -> ctl_cmds . done , timeout * HZ ); if ( ( mpi_request -> Function == MPI2_FUNCTION_SMP_PASSTHROUGH || mpi_request -> Function == MPI2_FUNCTION_SAS_IO_UNIT_CONTROL ) && ioc -> ioc_link_reset_in_progress )  if ( ! ( ioc -> ctl_cmds . status & MPT2_CMD_COMPLETE ) )  if ( ! ( ioc -> ctl_cmds . status & MPT2_CMD_RESET ) )  mpi_reply = ioc -> ctl_cmds . reply; ioc_status = le16_to_cpu ( mpi_reply -> IOCStatus ) & MPI2_IOCSTATUS_MASK; if ( mpi_reply -> Function == MPI2_FUNCTION_SCSI_TASK_MGMT && ( ioc -> logging_level & MPT_DEBUG_TM ) )  Mpi2SCSITaskManagementReply_t * tm_reply = ( Mpi2SCSITaskManagementReply_t * ) mpi_reply ; if ( copy_to_user ( karg . data_in_buf_ptr , data_in , data_in_sz ) )  sz = min_t ( u32 , karg . max_reply_bytes , ioc -> reply_sz ); if ( copy_to_user ( karg . reply_frame_buf_ptr , ioc -> ctl_cmds . reply , sz ) )  if ( copy_to_user ( karg . sense_data_ptr , ioc -> ctl_cmds . sense , sz ) )  ioc -> tm_cmds . status = MPT2_CMD_NOT_USED; mpt2sas_base_hard_reset_handler ( ioc , CAN_SLEEP , FORCE_BIG_HAMMER ); if ( data_in )  pci_free_consistent ( ioc -> pdev , data_in_sz , data_in , data_in_dma ); if ( data_out )  pci_free_consistent ( ioc -> pdev , data_out_sz , data_out , data_out_dma ); ioc -> ctl_cmds . status = MPT2_CMD_NOT_USED; mutex_unlock ( & ioc -> ctl_cmds . mutex ); 