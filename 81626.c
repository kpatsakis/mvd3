void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_21_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); badSink ( data ); static void badSink(wchar_t * data) for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 