void CWE606_Unchecked_Loop_Condition__wchar_t_environment_12_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); wcscpy ( data , L "15" ) if ( swscanf ( data , L "%d" , & n ) == 1 ) if ( swscanf ( data , L "%d" , & n ) == 1 ) 