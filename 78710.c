void CWE690_NULL_Deref_From_Return__struct_malloc_21_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) malloc ( 1 * sizeof ( twoIntsStruct ) ); badSink ( data ); static void badSink(twoIntsStruct * data) if ( badStatic )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 