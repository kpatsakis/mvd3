static void ep_init_chunk() ep_packet_mem . free_list = ( ( void * ) 0 ); ep_packet_mem . used_list = ( ( void * ) 0 ); ep_packet_mem . trees = ( ( void * ) 0 ); ep_packet_mem . debug_use_chunks = getenv ( "WIRESHARK_DEBUG_EP_NO_CHUNKS" ) == ( ( void * ) 0 ); ep_packet_mem . debug_use_canary = ep_packet_mem . debug_use_chunks && getenv ( "WIRESHARK_DEBUG_EP_NO_CANARY" ) == ( ( void * ) 0 ); ep_packet_mem . debug_verify_pointers = getenv ( "WIRESHARK_EP_VERIFY_POINTERS" ) != ( ( void * ) 0 ); emem_init_chunk ( & ep_packet_mem ); static void emem_init_chunk(emem_header_t *mem) if ( mem -> debug_use_canary )  emem_canary_init ( mem -> canary ); static void emem_canary_init(guint8 *canary) canary [ i ] = ( ( guint8 ) ( g_rand_int_range ( rand_state , 1 , 0x100 ) ) ); if ( mem -> debug_use_chunks )  mem -> memory_alloc = emem_alloc_chunk; mem -> memory_alloc = emem_alloc_glib; 