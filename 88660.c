static void goodB2G2() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); goodB2G2Sink ( data ); static void goodB2G2Sink(wchar_t * data) wprintf ( L "%s\n" , data ) 