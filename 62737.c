void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_42_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); return data ; 