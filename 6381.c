static void goodG2B2() int64_t * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int64_t * ) malloc ( sizeof ( * data ) ); printLongLongLine ( * data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 