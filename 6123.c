void CWE114_Process_Control__w32_char_file_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE114_Process_Control__w32_char_file_67b_badSink ( myStruct ); void CWE114_Process_Control__w32_char_file_67b_badSink(CWE114_Process_Control__w32_char_file_67_structType myStruct) char * data = myStruct . structFirst ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 