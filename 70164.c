void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_06_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( STATIC_CONST_FIVE == 5 )  size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' if ( STATIC_CONST_FIVE == 5 )  badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 