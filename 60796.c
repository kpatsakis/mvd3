void bad() int * data ; unionType myUnion ; data = NULL; data = new int [ 50 ]; myUnion . unionFirst = data; int * data = myUnion . unionSecond ; int source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); delete [ ] data 