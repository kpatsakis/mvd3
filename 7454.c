static int CVE_2013_6380_VULN_aac_send_raw_srb(struct aac_dev* dev, void __user * arg) struct fib * srbfib ; void * sg_list [ 32 ] ; if ( dev -> in_reset )  if ( ! capable ( CAP_SYS_ADMIN ) )  if ( ! ( srbfib = aac_fib_alloc ( dev ) ) )  memset ( sg_list , 0 , sizeof ( sg_list ) ); if ( user_srbcmd -> sg . count > ARRAY_SIZE ( sg_list ) )  if ( upsg -> sg [ i ] . count > ( ( dev -> adapter_info . options & AAC_OPT_NEW_COMM ) ? ( dev -> scsi_host_ptr -> max_sectors << 9 ) : 65536 ) )  p = kmalloc ( upsg -> sg [ i ] . count , GFP_KERNEL | __GFP_DMA ); if ( ! p )  addr = ( u64 ) upsg -> sg [ i ] . addr [ 0 ]; addr += ( ( u64 ) upsg -> sg [ i ] . addr [ 1 ] ) << 32; sg_user [ i ] = ( void __user * ) ( uintptr_t ) addr; sg_list [ i ] = p; sg_indx = i; if ( copy_from_user ( p , sg_user [ i ] , upsg -> sg [ i ] . count ) )  addr = pci_map_single ( dev -> pdev , p , upsg -> sg [ i ] . count , data_dir ); psg -> sg [ i ] . addr [ 0 ] = cpu_to_le32 ( addr & 0xffffffff ); psg -> sg [ i ] . addr [ 1 ] = cpu_to_le32 ( addr >> 32 ); byte_count += upsg -> sg [ i ] . count; psg -> sg [ i ] . count = cpu_to_le32 ( upsg -> sg [ i ] . count ); srbcmd -> count = cpu_to_le32 ( byte_count ); psg -> count = cpu_to_le32 ( sg_indx + 1 ); for(i = 0 ; i <= sg_indx; i++) byte_count = le32_to_cpu ( ( dev -> adapter_info . options & AAC_OPT_SGMAP_HOST64 ) ? ( ( struct sgmap64 * ) & srbcmd -> sg ) -> sg [ i ] . count : srbcmd -> sg . sg [ i ] . count ); if ( copy_to_user ( sg_user [ i ] , sg_list [ i ] , byte_count ) )  for(i=0; i <= sg_indx; i++) kfree ( sg_list [ i ] ); 