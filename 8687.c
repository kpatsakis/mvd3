void stonesoup_handle_taint(char *mullens_flyers) if ( mullens_flyers != 0 )  stoppers_dhobie = ( ( char * ) mullens_flyers ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( stoppers_dhobie ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( stoppers_dhobie ) + 1 ) ); if ( stonesoupData -> data && stonesoupData -> file1 )  if ( ( sscanf ( stoppers_dhobie , "%s %s" , stonesoupData -> file1 , stonesoupData -> data ) == 2 ) && ( strlen ( stonesoupData -> data ) != 0 ) && ( strlen ( stonesoupData -> file1 ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); delNonAlpha ( stonesoupData ); void delNonAlpha (void *data) struct stonesoup_data * stonesoupData = ( struct stonesoup_data * ) data ; int i = 0 ; int j = 0 ; char * temp = malloc ( sizeof ( char ) * ( stonesoupData -> data_size + 1 ) ) ; while ( stonesoupData -> data [ i ] != '\0' )  if ( ( stonesoupData -> data [ i ] >= 'A' && stonesoupData -> data [ i ] <= 'Z' ) || ( stonesoupData -> data [ i ] >= 'a' && stonesoupData -> data [ i ] <= 'z' ) )  temp [ j ++ ] = stonesoupData -> data [ i ]; i ++; temp [ j ++ ] = '\0'; stonesoupData -> data_size = j; stonesoupData -> data = temp; waitForSig ( stonesoupData -> file1 ); void waitForSig(char* sleepFile) int fd ; char outStr [ 25 ] = { 0 } ; char filename [ 500 ] = { 0 } ; sprintf ( outStr , "%d.pid" , getpid ( ) ); strcat ( filename , "/opt/stonesoup/workspace/testData/" ); strcat ( filename , outStr ); if ( ( fd = open ( filename , O_CREAT | O_WRONLY , 0666 ) ) == - 1 )  stonesoup_readFile ( sleepFile ); void stonesoup_readFile(char *filename) FILE * fifo ; fifo = fopen ( filename , "r" ); if ( fifo != NULL )  fclose ( fifo ); 