void CWE244_Heap_Inspection__w32_wchar_t_realloc_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wchar_t * password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; password [ 0 ] = L '\0' if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  