void bad() vector < int * > dataVector ; badSink ( dataVector ); void badSink(vector<int *> dataVector) int * data = dataVector [ 2 ] ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 