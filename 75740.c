static void goodG2B() int * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); memmove ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 