void CWE114_Process_Control__w32_char_relativePath_41_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "winsrv.dll" ); CWE114_Process_Control__w32_char_relativePath_41_badSink ( data ); void CWE114_Process_Control__w32_char_relativePath_41_badSink(char * data) HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 