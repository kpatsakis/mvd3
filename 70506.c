void bad() int * data ; structType myStruct ; data = NULL; data = new int [ 50 ]; myStruct . structFirst = data; badSink ( myStruct ); void badSink(structType myStruct) int * data = myStruct . structFirst ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 