static void goodG2B() int * data ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); myUnion . unionFirst = data; int * data = myUnion . unionSecond ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 