static void goodG2B1() int64_t * data ; data = NULL; data = goodG2B1Source ( data ); static int64_t * goodG2B1Source(int64_t * data) if ( goodG2B1Static )  data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); return data ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 