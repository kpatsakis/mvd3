static void goodG2B() int * data ; map < int , int * > dataMap ; data = NULL; data = ( int * ) ALLOCA ( 10 * sizeof ( int ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, int *> dataMap) int * data = dataMap [ 2 ] ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 