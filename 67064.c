static void goodB2G2() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Sink ( data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Sink(twoIntsStruct * data) if ( CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Global )  free ( data ); 