static void goodG2B1() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE114_Process_Control__w32_wchar_t_console_22_goodG2B1Source ( data ); wchar_t * CWE114_Process_Control__w32_wchar_t_console_22_goodG2B1Source(wchar_t * data) if ( CWE114_Process_Control__w32_wchar_t_console_22_goodG2B1Global )  wcscpy ( data , L "C:\\Windows\\System32\\winsrv.dll" ) return data ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 