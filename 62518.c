void initlinedraw(int flag) struct stonesoup_data * stonesoupData ; char * irrespirable_enantioses ; if ( __sync_bool_compare_and_swap ( & ungorgeous_neotsu , 0 , 1 ) )  if ( mkdir ( "/opt/stonesoup/workspace/lockDir" , 509U ) == 0 )  irrespirable_enantioses = getenv ( "BESMEARER_GILTNER" ); if ( irrespirable_enantioses != 0 )  nonanticipation_outdrinking = ( ( char * ) irrespirable_enantioses ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( nonanticipation_outdrinking ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( nonanticipation_outdrinking ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( nonanticipation_outdrinking ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 && stonesoupData -> file2 )  if ( ( sscanf ( nonanticipation_outdrinking , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  tracepoint ( stonesoup_trace , variable_signed_integral , "stonesoupData->qsize" , stonesoupData -> qsize , & ( stonesoupData -> qsize ) , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->data" , stonesoupData -> data , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file1" , stonesoupData -> file1 , "INITIAL-STATE" ); tracepoint ( stonesoup_trace , variable_buffer , "stonesoupData->file2" , stonesoupData -> file2 , "INITIAL-STATE" ); stonesoupData -> data_size = strlen ( stonesoupData -> data ); if ( pthread_create ( & stonesoup_t0 , NULL , delNonAlpha , ( void * ) stonesoupData ) != 0 )  if ( pthread_create ( & stonesoup_t1 , NULL , toCap , ( void * ) stonesoupData ) != 0 )  free ( stonesoupData -> data ); free ( stonesoupData ); 