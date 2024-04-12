static dissect_fullpacket(tvbuff_t *tvb, guint32 guint16 packet_info *pinfo, proto_tree proto_tree *main_tree) guint16 dcallno ; guint32 ts ; guint8 type ; guint8 csub ; guint32 codec ; proto_tree * packet_type_tree = NULL ; iax_call_data * iax_call ; iax_packet_data * iax_packet ; gboolean reversed ; dcallno = tvb_get_ntohs ( tvb , offset ) & 0x7FFF; ts = tvb_get_ntohl ( tvb , offset + 2 ); type = tvb_get_guint8 ( tvb , offset + 8 ); csub = tvb_get_guint8 ( tvb , offset + 9 ); iax_packet = ( iax_packet_data * ) p_get_proto_data ( wmem_file_scope ( ) , pinfo , proto_iax2 , 0 ); if ( ! iax_packet )  if ( type == AST_FRAME_IAX && csub == IAX_COMMAND_NEW )  iax_call = iax_new_call ( pinfo , scallno ); reversed = FALSE; iax_call = iax_lookup_call ( pinfo , scallno , dcallno , & reversed ); iax_packet = iax_new_packet_data ( iax_call , reversed ); if ( iax2_tree )  proto_item * packet_type_base ; packet_type_base = proto_tree_add_uint ( iax2_tree , hf_iax2_type , tvb , offset + 8 , 1 , type ); packet_type_tree = proto_item_add_subtree ( packet_type_base , ett_iax2_type ); switch ( type )  offset = dissect_iax2_command ( tvb , offset + 9 , pinfo , packet_type_tree , iax_packet ); offset += 10; offset += 10; iax_packet -> codec = codec = uncompress_subclass ( csub ); offset += 10; dissect_payload ( tvb , offset , pinfo , iax2_tree , main_tree , ts , FALSE , iax_packet ); static void dissect_payload(tvbuff_t *tvb, guint32 packet_info *pinfo, proto_tree proto_tree *tree, guint32 ts _U_, gboolean iax_packet_data *iax_packet) tvbuff_t * sub_tvb ; if ( offset >= tvb_reported_length ( tvb ) )  sub_tvb = tvb_new_subset_remaining ( tvb , offset ); if ( iax_packet -> call_data )  desegment_iax ( sub_tvb , pinfo , iax2_tree , tree , video , iax_packet ); static void desegment_iax(tvbuff_t *tvb, packet_info *pinfo, proto_tree proto_tree *tree, gboolean video, iax_packet_data *iax_packet) iax_call_data * iax_call = iax_packet -> call_data ; iax_call_dirdata * dirdata ; pinfo -> can_desegment = 2; pinfo -> desegment_offset = 0; pinfo -> desegment_len = 0; dirdata = & ( iax_call -> dirdata [ ! ! ( iax_packet -> reversed ) ] ); if ( ( ! pinfo -> fd -> flags . visited && ( dirdata -> current_frag_bytes > 0 ) ) || ( ( value = g_hash_table_lookup ( iax_fid_table , GUINT_TO_POINTER ( pinfo -> fd -> num ) ) ) != NULL ) )  process_iax_pdu ( tvb , pinfo , tree , video , iax_packet ); static void process_iax_pdu(tvbuff_t *tvb, packet_info *pinfo, proto_tree gboolean video, iax_packet_data *iax_packet) iax_call_data * iax_call = iax_packet -> call_data ; if ( ! video && iax_call && iax_call -> subdissector )  iax2_dissector_info_t dissector_info ; if ( iax_packet -> call_data == NULL )  memset ( & dissector_info , 0 , sizeof ( dissector_info ) ); 