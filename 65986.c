void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_10_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; if ( globalTrue )  for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 