static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); CWE114_Process_Control__w32_char_listen_socket_64b_goodG2BSink ( & data ); void CWE114_Process_Control__w32_char_listen_socket_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 