static void goodB2G() twoIntsStruct * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); size_t i ; for(i = 0; i < 100; i++) data [ i ] . intOne = 1; data [ i ] . intTwo = 2; free ( data ); 