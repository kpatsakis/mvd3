static void goodG2B() int h ; wchar_t * data ; data = NULL; for(h = 0; h < 1; h++) data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); free ( data ); 