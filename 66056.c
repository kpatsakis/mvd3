static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' data = CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_61b_goodB2GSource ( data ); wchar_t * CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_61b_goodB2GSource(wchar_t * data) size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' return data ; size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  