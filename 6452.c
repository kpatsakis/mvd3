conversation_t *find_or_create_conversation(packet_info *pinfo) if ( ( conv = find_conversation ( pinfo -> fd -> num , ( & pinfo -> src ) , ( & pinfo -> dst ) , pinfo -> ptype , pinfo -> srcport , pinfo -> destport , 0 ) ) == ( ( void * ) 0 ) )  conversation_t *find_conversation(const guint32 frame_num,const address *addr_a,const address *addr_b,const port_type ptype,const guint32 port_a,const guint32 port_b,const guint options) conversation_t * conversation ; if ( ! ( options & ( 0x01 | 0x02 ) ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_exact , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( options & 0x02 ) )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_a , addr_b , ptype , port_a , port_b ); if ( conversation == ( ( void * ) 0 ) && ( addr_a -> type ) == AT_FC )  conversation = conversation_lookup_hashtable ( conversation_hashtable_no_addr2 , frame_num , addr_b , addr_a , ptype , port_a , port_b ); if ( conversation != ( ( void * ) 0 ) )  if ( ! ( conversation -> options & 0x01 ) && ptype != PT_UDP )  if ( ! ( conversation -> options & 0x08 ) )  conversation_set_addr2 ( conversation , addr_b ); void conversation_set_addr2(conversation_t *conv,const address *addr) if ( ! ( conv -> options & 0x01 ) )  guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr -> data , ( addr -> len ) ); ( & conv -> key_ptr -> addr2 ) -> data = SE_COPY_ADDRESS_data; if ( conv -> options & 0x02 )  conversation_insert_into_hashtable ( conversation_hashtable_no_port2 , conv ); conversation_insert_into_hashtable ( conversation_hashtable_exact , conv ); 