void CWE114_Process_Control__w32_char_environment_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE114_Process_Control__w32_char_environment_67b_badSink ( myStruct ); void CWE114_Process_Control__w32_char_environment_67b_badSink(CWE114_Process_Control__w32_char_environment_67_structType myStruct) char * data = myStruct . structFirst ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 