static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G * goodB2GObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G::CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  printLine ( "fgets() failed" ); data [ dataLen ] = '\0'; fclose ( pFile ); delete goodB2GObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_84_goodB2G() size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  