void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_22_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_22_badSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_22_badSink(char * data) if ( CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_22_badGlobal )  for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 