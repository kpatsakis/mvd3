static void goodB2G() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); myUnion . unionFirst = data; int64_t * data = myUnion . unionSecond ; free ( data ); 