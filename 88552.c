void CWE114_Process_Control__w32_wchar_t_console_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE114_Process_Control__w32_wchar_t_console_22_badSource ( data ); wchar_t * CWE114_Process_Control__w32_wchar_t_console_22_badSource(wchar_t * data) if ( CWE114_Process_Control__w32_wchar_t_console_22_badGlobal )  size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' return data ; HMODULE hModule ; hModule = LoadLibraryW ( data ); if ( hModule != NULL )  FreeLibrary ( hModule ); 