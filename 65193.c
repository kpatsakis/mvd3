void CWE134_Uncontrolled_Format_String__wchar_t_environment_snprintf_13_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); SNPRINTF ( dest , 100 - 1 , data ); 