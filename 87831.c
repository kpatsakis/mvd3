static void goodG2B1() twoIntsStruct * data ; data = NULL; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; free ( data ); 