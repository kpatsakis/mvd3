static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *companionable_verdun) if ( companionable_verdun != 0 )  viridite_ambrein = ( ( int ) ( strlen ( companionable_verdun ) ) ); kaempferol_dingus = ( ( char * ) ( malloc ( viridite_ambrein + 1 ) ) ); if ( kaempferol_dingus == 0 )  memset ( kaempferol_dingus , 0 , viridite_ambrein + 1 ); memcpy ( kaempferol_dingus , companionable_verdun , viridite_ambrein ); overwrestle_prayingly = & kaempferol_dingus; warytree_pong = overwrestle_prayingly + 5; hydraulis_cryal = ( ( char * ) ( * ( warytree_pong - 5 ) ) ); stonesoup_files = fopen ( hydraulis_cryal , "rb" ); if ( stonesoup_files != 0 )  if ( fscanf ( stonesoup_files , "%79s" , stonesoup_filename ) == 1 )  fclose ( stonesoup_files ); if ( * ( warytree_pong - 5 ) != 0 )  free ( ( ( char * ) ( * ( warytree_pong - 5 ) ) ) ); 