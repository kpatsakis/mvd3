static void goodB2G() int i , k ; wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); goodB2GVaSinkG ( data , data ); static void goodB2GVaSinkG(wchar_t * data, ...) va_start ( args , data ); 