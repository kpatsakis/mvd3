void CWE78_OS_Command_Injection__wchar_t_file_execlp_21_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  