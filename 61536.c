static void goodB2G() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodB2GSink ( & data ); void CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodB2GSink(twoIntsStruct * * dataPtr) twoIntsStruct * data = * dataPtr ; free ( data ); 