static void goodG2B2() int64_t * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 