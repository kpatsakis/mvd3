static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *nonvulvar_morganatical) int stonesoup_size ; if ( nonvulvar_morganatical != 0 )  tempters_telekineses = ( ( char * ) nonvulvar_morganatical ); stonesoup_buff_size = strlen ( tempters_telekineses ) + 1; stonesoup_other_size = 64; stonesoup_other_buff = ( char * ) malloc ( stonesoup_other_size * sizeof ( char ) ); if ( stonesoup_other_buff != NULL )  stonesoup_size = stonesoup_other_size < stonesoup_buff_size ? stonesoup_other_size : stonesoup_buff_size; for (stonesoup_i = 0; stonesoup_i < stonesoup_size; stonesoup_i++) stonesoup_other_buff [ stonesoup_other_size - stonesoup_i - 1 ] = tempters_telekineses [ stonesoup_buff_size - stonesoup_i - 1 ]; free ( stonesoup_other_buff ); 