static void goodG2B2() int * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  data = ( int * ) malloc ( 100 * sizeof ( int ) ); int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 