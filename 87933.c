void bad() wchar_t * data ; data = new wchar_t [ 100 ]; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 