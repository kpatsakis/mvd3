static int stonesoup_ev_handler(struct mg_connection *conn, enum mg_event ev) char * ifmatch_header ; char * stonesoup_tainted_buff ; int buffer_size = 1000 ; if ( ev == MG_REQUEST )  ifmatch_header = ( char * ) mg_get_header ( conn , "if-match" ); if ( strcmp ( ifmatch_header , "weak_taint_source_value" ) == 0 )  while ( 1 )  stonesoup_tainted_buff = ( char * ) malloc ( buffer_size * sizeof ( char ) ); data_size = mg_get_var ( conn , "data" , stonesoup_tainted_buff , buffer_size * sizeof ( char ) ); if ( data_size < buffer_size )  buffer_size = buffer_size * 2; stonesoup_handle_taint ( stonesoup_tainted_buff ); void stonesoup_handle_taint(char *sagittaries_manganate) int stonesoup_i = 0 ; int dizzyingly_nondetailed ; if ( sagittaries_manganate != 0 )  surrection_brigitta = sagittaries_manganate; dizzyingly_nondetailed = 1; epicalyxes_envious = & surrection_brigitta; ultravirus_magnetization = ( ( gunja_spiculumamoris * ) ( ( ( unsigned long ) epicalyxes_envious ) * dizzyingly_nondetailed * dizzyingly_nondetailed ) ) + 5; ones_upflood = ( ( char * ) ( * ( ultravirus_magnetization - 5 ) ) ); for (; stonesoup_i < strlen(ones_upflood); ++stonesoup_i) if ( ones_upflood [ stonesoup_i ] == ';' )  if ( stonesoup_i == 0 || ones_upflood [ stonesoup_i - 1 ] != '\\' )  if ( ones_upflood [ stonesoup_i ] == '|' )  if ( stonesoup_i == 0 || ones_upflood [ stonesoup_i - 1 ] != '\\' )  if ( ones_upflood [ stonesoup_i ] == '|' )  if ( stonesoup_i == 0 || ones_upflood [ stonesoup_i - 1 ] != '|' )  if ( ones_upflood [ stonesoup_i ] == '&' )  if ( stonesoup_i == 0 || ones_upflood [ stonesoup_i - 1 ] != '\\' )  if ( ones_upflood [ stonesoup_i ] == '&' )  if ( stonesoup_i == 0 || ones_upflood [ stonesoup_i - 1 ] != '&' )  