static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *albinal_emersions) struct stonesoup_data * stonesoupData ; if ( albinal_emersions != 0 )  sass_firmland = ( ( char * ) albinal_emersions ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( sass_firmland ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( sass_firmland ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( sass_firmland ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( sass_firmland , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData ); 