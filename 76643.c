static void goodB2G1() char * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; free ( data ); 