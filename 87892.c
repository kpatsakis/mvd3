static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "C:\\Windows\\System32\\winsrv.dll" ); CWE114_Process_Control__w32_char_file_82_base * baseObject = new CWE114_Process_Control__w32_char_file_82_goodG2B baseObject -> action ( data ); void CWE114_Process_Control__w32_char_file_82_goodG2B::action(char * data) HMODULE hModule ; hModule = LoadLibraryA ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 