void CWE114_Process_Control__w32_char_environment_08_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 