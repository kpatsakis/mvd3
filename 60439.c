static void good2() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; int64_t * pointer = ( int64_t * ) malloc ( sizeof ( int64_t ) ) ; * pointer = data; int64_t data = * pointer ; printLongLongLine ( data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( pointer ); 