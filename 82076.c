static void good2() if ( 5 == 5 )  wchar_t password [ 100 ] = L "" if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = L '\0' passwordLen = wcslen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( wchar_t ) ); 