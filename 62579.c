static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t dest [ 50 ] = L "" memmove ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 