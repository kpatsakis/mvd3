static void goodG2B1() wchar_t * data ; data = NULL; if ( 5 != 5 )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' size_t i ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = L '\0' free ( data ); 