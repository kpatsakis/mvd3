void CWE114_Process_Control__w32_char_file_16_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; while ( 1 )  size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 