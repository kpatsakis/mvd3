static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *estates_restward) char stonesoup_cmd_string [ 1000 ] = { 0 } ; int stonesoup_is_valid = 1 ; int stonesoup_i = 0 ; char stonesoup_base_cmd [ 1000 ] ; int mumetal_gloriann ; if ( estates_restward != 0 )  technetronic_goosebird = ( ( int ) ( strlen ( estates_restward ) ) ); cumberer_psychedelia = ( ( char * ) ( malloc ( technetronic_goosebird + 1 ) ) ); memset ( cumberer_psychedelia , 0 , technetronic_goosebird + 1 ); memcpy ( cumberer_psychedelia , estates_restward , technetronic_goosebird ); mumetal_gloriann = 1; mucronulate_unlikeness = & cumberer_psychedelia; pergamenian_hogan = ( ( char * * ) ( ( ( unsigned long ) mucronulate_unlikeness ) * mumetal_gloriann * mumetal_gloriann ) ) + 5; cayuca_idewild = ( ( char * ) ( * ( pergamenian_hogan - 5 ) ) ); snprintf ( stonesoup_base_cmd , 1000 , "find %s -iname " , "/opt/stonesoup/workspace/testData/temp" ); for (; stonesoup_i < strlen(cayuca_idewild); ++stonesoup_i) if ( cayuca_idewild [ stonesoup_i ] == ';' )  if ( stonesoup_i == 0 || cayuca_idewild [ stonesoup_i - 1 ] != '\\' )  stonesoup_is_valid = 0; if ( stonesoup_is_valid == 1 )  snprintf ( stonesoup_cmd_string , 1000 , "%s%s" , stonesoup_base_cmd , cayuca_idewild ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_cmd_string" , stonesoup_cmd_string , "CROSSOVER-STATE" ); stonesoup_fpipe = popen ( stonesoup_cmd_string , "r" ); if ( stonesoup_fpipe != 0 )  while ( fgets ( stonesoup_buffer , 100 , stonesoup_fpipe ) != 0 )  stonesoup_printf ( stonesoup_buffer ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); pclose ( stonesoup_fpipe ); 