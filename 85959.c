static void goodB2G() twoIntsStruct * data ; data = NULL; data = CWE690_NULL_Deref_From_Return__struct_malloc_61b_goodB2GSource ( data ); twoIntsStruct * CWE690_NULL_Deref_From_Return__struct_malloc_61b_goodB2GSource(twoIntsStruct * data) data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); return data ; if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 