static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *tokay_kolush) struct stonesoup_data * stonesoupData ; long flacc_tryingness [ 10 ] ; multiuse_novelet apasttra_phyllocladium [ 10 ] = { 0 } ; if ( tokay_kolush != 0 )  zanjona_luxemburger = tokay_kolush; apasttra_phyllocladium [ 5 ] = zanjona_luxemburger; flacc_tryingness [ 1 ] = 5; capacious_unachievable = * ( apasttra_phyllocladium + flacc_tryingness [ 1 ] ); fossor_tablature = ( ( char * ) capacious_unachievable ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( fossor_tablature ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( fossor_tablature , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) && ( strlen ( stonesoupData -> file2 ) != 0 ) )  