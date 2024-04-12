 proto_reg_handoff_message_http(void) dissector_handle_t message_http_handle ; message_http_handle = create_dissector_handle ( dissect_message_http , proto_message_http );  create_dissector_handle(dissector_t dissector, const int proto) struct dissector_handle * handle ; handle = g_malloc ( sizeof ( struct dissector_handle ) ); handle -> name = NULL; handle -> is_new = FALSE; handle -> dissector . old = dissector; handle -> protocol = find_protocol_by_id ( proto ); return handle ; dissector_add_string ( "media_type" , "message/http" , message_http_handle );  dissector_add_string(const char *name, const gchar dissector_handle_t handle) dissector_table_t sub_dissectors = find_dissector_table ( name ) ;  find_dissector_table(const char *name) return g_hash_table_lookup ( dissector_tables , name ) ; if ( sub_dissectors == NULL )  fprintf ( stderr , "OOPS: dissector table \"%s\" doesn't exist\n" , name ); fprintf ( stderr , "Protocol being registered is \"%s\"\n" , proto_get_protocol_long_name ( handle -> protocol ) ); 