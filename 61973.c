void CWE78_OS_Command_Injection__wchar_t_file_execlp_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = CWE78_OS_Command_Injection__wchar_t_file_execlp_22_badSource ( data ); wchar_t * CWE78_OS_Command_Injection__wchar_t_file_execlp_22_badSource(wchar_t * data) if ( CWE78_OS_Command_Injection__wchar_t_file_execlp_22_badGlobal )  size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  