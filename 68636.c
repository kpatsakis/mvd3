void bad() int64_t * data ; data = NULL; data = badSource ( data ); int64_t * badSource(int64_t * data) data = new int64_t [ 50 ]; return data ; int64_t source [ 100 ] = { 0 } ; memmove ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); delete [ ] data 