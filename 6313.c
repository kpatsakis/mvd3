static void goodB2G2() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink ( data ); void CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink(twoIntsStruct * data) if ( CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Global )  if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 