static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wcscpy ( data , BAD_SOURCE_FIXED_STRING ); CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52b_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52b_goodB2GSink(wchar_t * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52c_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_52c_goodB2GSink(wchar_t * data) size_t i ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  