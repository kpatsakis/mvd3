 proto_init(void (register_all_protocols_func)(register_cb cb, gpointer void (register_all_handoffs_func)(register_cb cb, gpointer register_cb gpointer client_data) hf_text_only = proto_register_field_init ( & hfi_text_only , - 1 ); static proto_register_field_init(header_field_info *hfinfo, const int parent) tmp_fld_check_assert ( hfinfo ); static tmp_fld_check_assert(header_field_info *hfinfo) if ( ( hfinfo -> strings != NULL ) && ! ( hfinfo -> display & BASE_RANGE_STRING ) && ! ( ( hfinfo -> display & FIELD_DISPLAY_E_MASK ) == BASE_CUSTOM ) && ( ( hfinfo -> type == FT_UINT8 ) || ( hfinfo -> type == FT_UINT16 ) || ( hfinfo -> type == FT_UINT24 ) || ( hfinfo -> type == FT_UINT32 ) || ( hfinfo -> type == FT_INT8 ) || ( hfinfo -> type == FT_INT16 ) || ( hfinfo -> type == FT_INT24 ) || ( hfinfo -> type == FT_INT32 ) || ( hfinfo -> type == FT_FRAMENUM ) ) )  int n , m ; const value_string * start_values ; const value_string * current ; if ( hfinfo -> display & BASE_EXT_STRING )  start_values = VALUE_STRING_EXT_VS_P ( ( ( const value_string_ext * ) hfinfo -> strings ) ); start_values = ( const value_string * ) hfinfo -> strings; current = start_values; for (n=0; current; n++, current++) if ( ( current -> value == 0 ) && ( current -> strptr == NULL ) )  for (m=0; m < n; m++) if ( ( start_values [ m ] . value == current -> value ) && ( strcmp ( start_values [ m ] . strptr , current -> strptr ) != 0 ) )  