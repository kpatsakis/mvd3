static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; free ( stonesoup_tainted_buff ); stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *misnomers_archdukedom) if ( misnomers_archdukedom != 0 )  copartners_beteela = ( ( char * ) misnomers_archdukedom ); strcpy ( stonesoup_heap_buffer_64 , copartners_beteela ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_heap_buffer_64" , stonesoup_heap_buffer_64 , "CROSSOVER-STATE" ); stonesoup_opt_var = strlen ( stonesoup_heap_buffer_64 ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_opt_var" , stonesoup_opt_var , & stonesoup_opt_var , "CROSSOVER-STATE" ); for (; stonesoup_i < stonesoup_opt_var; ++stonesoup_i) stonesoup_heap_buffer_64 [ stonesoup_i ] = stonesoup_toupper ( stonesoup_heap_buffer_64 [ stonesoup_i ] ); int stonesoup_toupper(int c) if ( c >= 97 && c <= 122 )  return c - 32 ; return c ; tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_i" , stonesoup_i , & stonesoup_i , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoup_opt_var" , stonesoup_opt_var , & stonesoup_opt_var , "FINAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_heap_buffer_64" , stonesoup_heap_buffer_64 , "BEFORE-FREE" ); stonesoup_printf ( "%s\n" , stonesoup_heap_buffer_64 ); void stonesoup_printf(char * format, ...) va_start ( argptr , format ); mg_vprintf_data ( ( struct mg_connection * ) stonesoup_printf_context , format , argptr ); free ( stonesoup_heap_buffer_64 ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoup_heap_buffer_64" , stonesoup_heap_buffer_64 , "FINAL-STATE" ); if ( misnomers_archdukedom != 0 )  free ( ( ( char * ) misnomers_archdukedom ) ); 