static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *jotham_telesthesia) if ( jotham_telesthesia != 0 )  propoundment_saxicavous = ( ( int ) ( strlen ( jotham_telesthesia ) ) ); twitty_onionet = ( ( char * ) ( malloc ( propoundment_saxicavous + 1 ) ) ); if ( twitty_onionet == 0 )  memset ( twitty_onionet , 0 , propoundment_saxicavous + 1 ); memcpy ( twitty_onionet , jotham_telesthesia , propoundment_saxicavous ); if ( jotham_telesthesia != 0 )  free ( ( ( char * ) jotham_telesthesia ) ); empiricists_anemones [ * invariableness_samydaceae ] = twitty_onionet; catamnestic_disillusive = empiricists_anemones [ * invariableness_samydaceae ]; wagon_cheapened = ( ( char * ) catamnestic_disillusive ); stonesoup_number = strtol ( wagon_cheapened , 0U , 10 ); if ( stonesoup_number > 0 )  stonesoup_data = stonesoup_init_data ( stonesoup_number ); struct stonesoup_struct_data *stonesoup_init_data(long number_param) init_data_ptr -> size_member = number_param; init_data_ptr -> buffer_member = ( ( char * ) ( malloc ( sizeof ( char ) * init_data_ptr -> size_member ) ) ); tracepoint ( stonesoup_trace , variable_signed_integral , "number_param" , number_param , & number_param , "CROSSOVER-STATE" ); tracepoint ( stonesoup_trace , variable_signed_integral , "(init_data_ptr->size_member)" , ( init_data_ptr -> size_member ) , & ( init_data_ptr -> size_member ) , "CROSSOVER-STATE" ); if ( init_data_ptr -> buffer_member == 0 )  free ( init_data_ptr ); memset ( init_data_ptr -> buffer_member , 'a' , init_data_ptr -> size_member ); init_data_ptr -> buffer_member [ init_data_ptr -> size_member - 1 ] = 0; return init_data_ptr ; if ( stonesoup_data != 0 )  memset ( stonesoup_data -> buffer_member , 98 , stonesoup_number ); stonesoup_data -> buffer_member [ stonesoup_number - 1 ] = 0; stonesoup_printf ( "%s\n" , stonesoup_data -> buffer_member ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); if ( stonesoup_data -> buffer_member != 0U )  free ( stonesoup_data -> buffer_member ); if ( stonesoup_data != 0U )  free ( stonesoup_data ); if ( catamnestic_disillusive != 0 )  free ( ( ( char * ) catamnestic_disillusive ) ); 