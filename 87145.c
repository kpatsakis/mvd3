 proto_reg_handoff_tcp(void) dissector_handle_t tcp_handle ; tcp_handle = find_dissector ( "tcp" );  find_dissector(const char *name) return g_hash_table_lookup ( registered_dissectors , name ) ; dissector_add_uint ( "ip.proto" , IP_PROTO_TCP , tcp_handle );  dissector_add_uint(const char *name, const guint32 pattern, dissector_handle_t handle) dissector_table_t sub_dissectors ; sub_dissectors = find_dissector_table ( name ); if ( sub_dissectors == NULL )  dissector_add_handle ( name , handle );  dissector_add_handle(const char *name, dissector_handle_t handle) dissector_table_t sub_dissectors = find_dissector_table ( name ) ; if ( sub_dissectors == NULL )  if ( getenv ( "WIRESHARK_ABORT_ON_DISSECTOR_BUG" ) != NULL )  