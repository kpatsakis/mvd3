static void goodB2G2() int data ; data = - 1; if ( STATIC_CONST_TRUE )  data = 10; if ( STATIC_CONST_TRUE )  int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 