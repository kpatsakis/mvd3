void CWE606_Unchecked_Loop_Condition__wchar_t_environment_41_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); badSink ( data ); static void badSink(wchar_t * data) if ( swscanf ( data , L "%d" , & n ) == 1 ) 