static void goodB2G1() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); goodB2G1Sink ( data ); static void goodB2G1Sink(int64_t * data) free ( data ); 