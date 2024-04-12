static sg_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos) int mxsize , cmd_size , k ; int input_size , blocking ; unsigned char opcode ; Sg_device * sdp ; Sg_fd * sfp ; Sg_request * srp ; struct sg_header old_hdr ; unsigned char cmnd [ SG_MAX_CDB_SIZE ] ; if ( ( ! ( sfp = ( Sg_fd * ) filp -> private_data ) ) || ( ! ( sdp = sfp -> parentdp ) ) )  if ( atomic_read ( & sdp -> detaching ) )  if ( ! ( ( filp -> f_flags & O_NONBLOCK ) || scsi_block_when_processing_errors ( sdp -> device ) ) )  if ( ! access_ok ( VERIFY_READ , buf , count ) )  if ( count < SZ_SG_HEADER )  if ( __copy_from_user ( & old_hdr , buf , SZ_SG_HEADER ) )  blocking = ! ( filp -> f_flags & O_NONBLOCK ); if ( old_hdr . reply_len < 0 )  if ( count < ( SZ_SG_HEADER + 6 ) )  if ( ! ( srp = sg_add_request ( sfp ) ) )  static Sg_request sg_add_request(Sg_fd * sfp) int k ; Sg_request * resp ; Sg_request * rp = sfp -> req_arr ; resp = sfp -> headrp; if ( ! resp )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; resp = rp; if ( 0 == sfp -> cmd_q )  resp = NULL; if ( k < SG_MAX_QUEUE )  memset ( rp , 0 , sizeof ( Sg_request ) ); rp -> parentfp = sfp; while ( resp -> nextrp )  resp = resp -> nextrp; resp -> nextrp = rp; resp = rp; resp = NULL; if ( resp )  resp -> nextrp = NULL; resp -> header . duration = jiffies_to_msecs ( jiffies ); return resp ; buf += SZ_SG_HEADER; if ( sfp -> next_cmd_len > 0 )  cmd_size = sfp -> next_cmd_len; sfp -> next_cmd_len = 0; cmd_size = COMMAND_SIZE ( opcode ); if ( ( opcode >= 0xc0 ) && old_hdr . twelve_byte )  cmd_size = 12; input_size = count - cmd_size; input_size -= SZ_SG_HEADER; if ( input_size < 0 )  if ( __copy_from_user ( cmnd , buf , cmd_size ) )  k = sg_common_write ( sfp , srp , cmnd , sfp -> timeout , blocking ); static sg_common_write(Sg_fd * sfp, Sg_request * unsigned char *cmnd, int timeout, int blocking) int k , at_head ; Sg_device * sdp = sfp -> parentdp ; srp -> data . cmd_opcode = cmnd [ 0 ]; k = sg_start_req ( srp , cmnd ); static sg_start_req(Sg_request *srp, unsigned char *cmd) int res ; struct request * rq ; Sg_fd * sfp = srp -> parentfp ; sg_io_hdr_t * hp = & srp -> header ; int dxfer_len = ( int ) hp -> dxfer_len ; int dxfer_dir = hp -> dxfer_direction ; unsigned int iov_count = hp -> iovec_count ; Sg_scatter_hold * req_schp = & srp -> data ; Sg_scatter_hold * rsv_schp = & sfp -> reserve ; struct request_queue * q = sfp -> parentdp -> device -> request_queue ; struct rq_map_data * md , map_data ; int rw = hp -> dxfer_direction == SG_DXFER_TO_DEV ? WRITE : READ ; unsigned char * long_cmdp = NULL ; if ( hp -> cmd_len > BLK_MAX_CDB )  long_cmdp = kzalloc ( hp -> cmd_len , GFP_KERNEL ); if ( ! long_cmdp )  return - ENOMEM ; rq = blk_get_request ( q , rw , GFP_KERNEL ); if ( IS_ERR ( rq ) )  return PTR_ERR ( rq ) ; if ( hp -> cmd_len > BLK_MAX_CDB )  rq -> cmd = long_cmdp; memcpy ( rq -> cmd , cmd , hp -> cmd_len ); rq -> cmd_len = hp -> cmd_len; srp -> rq = rq; rq -> end_io_data = srp; rq -> sense = srp -> sense_b; rq -> retries = SG_DEFAULT_RETRIES; if ( ( dxfer_len <= 0 ) || ( dxfer_dir == SG_DXFER_NONE ) )  return 0 ; if ( sg_allow_dio && hp -> flags & SG_FLAG_DIRECT_IO && dxfer_dir != SG_DXFER_UNKNOWN && ! iov_count && ! sfp -> parentdp -> device -> host -> unchecked_isa_dma && blk_rq_aligned ( q , ( unsigned long ) hp -> dxferp , dxfer_len ) )  md = NULL; md = & map_data; if ( md )  if ( ! sg_res_in_use ( sfp ) && dxfer_len <= rsv_schp -> bufflen )  static sg_res_in_use(Sg_fd * sfp) const Sg_request * srp ; for (srp = sfp->headrp; srp; srp = srp->nextrp) if ( srp -> res_used )  return srp ? 1 : 0 ; res = sg_build_indirect ( req_schp , sfp , dxfer_len ); static sg_build_indirect(Sg_scatter_hold * schp, Sg_fd * sfp, int buff_size) int sg_tablesize = sfp -> parentdp -> sg_tablesize ; int blk_size = buff_size , order ; gfp_t gfp_mask = GFP_ATOMIC | __GFP_COMP | __GFP_NOWARN ; if ( blk_size < 0 )  return - EFAULT ; blk_size = ALIGN ( blk_size , SG_SECTOR_SZ ); mx_sc_elems = sg_build_sgat ( schp , sfp , sg_tablesize ); if ( mx_sc_elems < 0 )  return mx_sc_elems ; num = scatter_elem_sz; if ( sfp -> low_dma )  gfp_mask |= GFP_DMA; if ( ! capable ( CAP_SYS_ADMIN ) || ! capable ( CAP_SYS_RAWIO ) )  gfp_mask |= __GFP_ZERO; order = get_order ( num ); ret_sz = 1 << ( PAGE_SHIFT + order ); for (k = 0, rem_sz = blk_size; rem_sz > 0 && k < k++, rem_sz -= ret_sz) schp -> pages [ k ] = alloc_pages ( gfp_mask , order ); if ( ! schp -> pages [ k ] )  if ( rem_sz > 0 )  return - ENOMEM ; return 0 ; if ( -- order >= 0 )  return - ENOMEM ; if ( res )  return res ; if ( dxfer_dir == SG_DXFER_TO_FROM_DEV )  md -> from_user = 0; if ( iov_count )  res = import_iovec ( rw , hp -> dxferp , iov_count , 0 , & iov , & i ); if ( res < 0 )  return res ; res = blk_rq_map_user_iov ( q , rq , md , & i , GFP_ATOMIC ); res = blk_rq_map_user ( q , rq , md , hp -> dxferp , hp -> dxfer_len , GFP_ATOMIC ); return res ; if ( k )  if ( atomic_read ( & sdp -> detaching ) )  sg_finish_rem_req ( srp ); static sg_finish_rem_req(Sg_request *srp) Sg_fd * sfp = srp -> parentfp ; Sg_scatter_hold * req_schp = & srp -> data ; if ( srp -> res_used )  sg_remove_scat ( sfp , req_schp ); static sg_remove_scat(Sg_fd * sfp, Sg_scatter_hold * schp) memset ( schp , 0 , sizeof ( * schp ) ); 