void CWE78_OS_Command_Injection__wchar_t_environment_popen_13_bad() wchar_t * data ; wchar_t data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); pipe = POPEN ( data , L "wb" ) if ( pipe != NULL )  PCLOSE ( pipe ); 