static void good2() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; double * data ; double * * pointer = ( double * * ) malloc ( sizeof ( double * ) ) ; data = ( double * ) malloc ( sizeof ( double ) ); * data = 5.0; * pointer = data; free ( pointer ); 