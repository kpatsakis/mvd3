void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_12_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 