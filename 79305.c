void CWE690_NULL_Deref_From_Return__struct_realloc_32_bad() twoIntsStruct * data ; twoIntsStruct * * dataPtr1 = & data ; twoIntsStruct * * dataPtr2 = & data ; data = NULL; twoIntsStruct * data = * dataPtr1 ; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); twoIntsStruct * data = * dataPtr2 ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 