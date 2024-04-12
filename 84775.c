conversation_t *find_or_create_conversation(packet_info *pinfo) if ( ( conv = find_conversation ( pinfo -> fd -> num , ( & pinfo -> src ) , ( & pinfo -> dst ) , pinfo -> ptype , pinfo -> srcport , pinfo -> destport , 0 ) ) == ( ( void * ) 0 ) )  conv = conversation_new ( pinfo -> fd -> num , ( & pinfo -> src ) , ( & pinfo -> dst ) , pinfo -> ptype , pinfo -> srcport , pinfo -> destport , 0 ); conversation_t *conversation_new(const guint32 setup_frame,const address *addr1,const address *addr2,const port_type ptype,const guint32 port1,const guint32 port2,const guint options) guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr1 -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr1 -> data , ( addr1 -> len ) ); guint8 * SE_COPY_ADDRESS_data ; SE_COPY_ADDRESS_data = ( se_alloc ( ( addr2 -> len ) ) ); memcpy ( SE_COPY_ADDRESS_data , addr2 -> data , ( addr2 -> len ) ); ( & new_key -> addr2 ) -> data = SE_COPY_ADDRESS_data; new_key -> ptype = ptype; new_key -> port1 = port1; new_key -> port2 = port2; conversation -> key_ptr = new_key; conversation_insert_into_hashtable ( hashtable , conversation ); void conversation_insert_into_hashtable(GHashTable *hashtable,conversation_t *conv) chain_head = ( ( conversation_t * ) ( g_hash_table_lookup ( hashtable , ( conv -> key_ptr ) ) ) ); if ( ( ( void * ) 0 ) == chain_head )  conv -> next = ( ( void * ) 0 ); conv -> last = conv; g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); chain_tail = chain_head -> last; if ( conv -> setup_frame >= chain_tail -> setup_frame )  conv -> next = ( ( void * ) 0 ); conv -> last = ( ( void * ) 0 ); chain_tail -> next = conv; chain_head -> last = conv; cur = chain_head; for (; conv -> setup_frame > cur -> setup_frame && cur -> next; (prev = cur , cur = cur -> next)) if ( ( ( void * ) 0 ) == prev )  conv -> next = chain_head; conv -> last = chain_tail; chain_head -> last = ( ( void * ) 0 ); g_hash_table_insert ( hashtable , ( conv -> key_ptr ) , conv ); conv -> next = cur; conv -> last = ( ( void * ) 0 ); prev -> next = conv; return conversation ; 