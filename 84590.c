static void goodB2G() int data ; int & dataRef = data ; data = - 1; data = 10; int data = dataRef ; int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 