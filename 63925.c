void CWE90_LDAP_Injection__w32_wchar_t_console_21_bad() wchar_t * data ; wchar_t dataBuffer [ 256 ] = L "" data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  size_t dataLen = wcslen ( data ) ; if ( 256 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 256 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 