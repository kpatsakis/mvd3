void bad() wchar_t * data ; wchar_t * & dataRef = data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wchar_t * data = dataRef ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 