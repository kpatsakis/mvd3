void CWE244_Heap_Inspection__w32_wchar_t_free_10_bad() if ( globalTrue )  wchar_t * password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; password [ 0 ] = L '\0' if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = L '\0' free ( password ); 