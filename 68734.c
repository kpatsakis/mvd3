static void goodG2B1() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; if ( STATIC_CONST_FIVE != 5 )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 