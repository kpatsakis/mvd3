static void goodB2G() int i , k ; int * data ; data = NULL; for(i = 0; i < 1; i++) data = ( int * ) malloc ( 100 * sizeof ( int ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5; free ( data ); 