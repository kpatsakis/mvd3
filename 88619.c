static void goodB2G1() int data ; data = - 1; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = 10; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 