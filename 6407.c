static void goodG2B1() int * data ; data = NULL; if ( staticFalse )  data = ( int * ) malloc ( 10 * sizeof ( int ) ); int source [ 10 ] = { 0 } ; size_t i ; for (i = 0; i < 10; i++) data [ i ] = source [ i ]; free ( data ); 