static void goodG2B2() int * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; free ( data ); 