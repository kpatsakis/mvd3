static void goodB2G() wchar_t * data ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_34_unionType myUnion ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wcscpy ( data , BAD_SOURCE_FIXED_STRING ); myUnion . unionFirst = data; wchar_t * data = myUnion . unionSecond ; size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  