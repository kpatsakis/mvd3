static void goodG2B() list < int * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<int *> dataList) int * data = dataList . back ( ) ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 