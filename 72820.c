void CWE690_NULL_Deref_From_Return__struct_realloc_66_bad() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 1 * sizeof ( twoIntsStruct ) ); dataArray [ 2 ] = data; CWE690_NULL_Deref_From_Return__struct_realloc_66b_badSink ( dataArray ); void CWE690_NULL_Deref_From_Return__struct_realloc_66b_badSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; free ( data ); 