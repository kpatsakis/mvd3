void bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); badSource ( data ); void badSource(wchar_t * &data) size_t dataLen = wcslen ( data ) ; wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); for (  * data != L '\0' data ++ ) if ( * data == SEARCH_CHAR )  free ( data ); 