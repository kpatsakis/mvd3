static register_type_length_mismatch(void) proto_type_length_mismatch = proto_register_protocol ( "Type Length Mismatch" , "Type length mismatch" , "_ws.type_length" );  proto_register_protocol(const char *name, const char const char *filter_name) protocol_t * protocol ; header_field_info * hfinfo ; int proto_id ; protocol = g_new ( protocol_t , 1 ); protocol -> name = name; protocol -> short_name = short_name; protocol -> filter_name = filter_name; protocol -> fields = g_ptr_array_new ( ); protocol -> is_enabled = TRUE; protocol -> can_toggle = TRUE; protocol -> heur_list = NULL; hfinfo = g_slice_new ( header_field_info ); hfinfo -> name = name; hfinfo -> abbrev = filter_name; hfinfo -> type = FT_PROTOCOL; hfinfo -> display = BASE_NONE; hfinfo -> strings = protocol; hfinfo -> bitmask = 0; hfinfo -> ref_type = HF_REF_TYPE_NONE; hfinfo -> blurb = NULL; hfinfo -> parent = - 1; proto_id = proto_register_field_init ( hfinfo , hfinfo -> parent ); static proto_register_field_init(header_field_info *hfinfo, const int parent) hfinfo -> parent = parent; hfinfo -> same_name_next = NULL; hfinfo -> same_name_prev_id = - 1; if ( gpa_hfinfo . len >= gpa_hfinfo . allocated_len )  if ( ! gpa_hfinfo . hfi )  gpa_hfinfo . allocated_len = PROTO_PRE_ALLOC_HF_FIELDS_MEM; gpa_hfinfo . hfi = ( header_field_info * * ) g_malloc ( sizeof ( header_field_info * ) * PROTO_PRE_ALLOC_HF_FIELDS_MEM ); gpa_hfinfo . allocated_len += 1000; gpa_hfinfo . hfi = ( header_field_info * * ) g_realloc ( gpa_hfinfo . hfi , sizeof ( header_field_info * ) * gpa_hfinfo . allocated_len ); gpa_hfinfo . hfi [ gpa_hfinfo . len ] = hfinfo; gpa_hfinfo . len ++; hfinfo -> id = gpa_hfinfo . len - 1; if ( ( hfinfo -> name [ 0 ] != 0 ) && ( hfinfo -> abbrev [ 0 ] != 0 ) )  guchar c ; c = wrs_check_charset ( fld_abbrev_chars , hfinfo -> abbrev ); if ( c )  if ( g_ascii_isprint ( c ) )  fprintf ( stderr , "Invalid byte \\%03o in filter name '%s'\n" , c , hfinfo -> abbrev ); 