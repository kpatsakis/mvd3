static void goodB2G() int * data ; data = NULL; goodB2GSource ( data ); void goodB2GSource(int * &data) data = ( int * ) malloc ( 100 * sizeof ( int ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] = 5; free ( data ); 