static void goodB2G2() int64_t * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; free ( data ); 