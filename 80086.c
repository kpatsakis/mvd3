void CWE401_Memory_Leak__twoIntsStruct_realloc_53_bad() twoIntsStruct * data ; data = NULL; data = ( twoIntsStruct * ) realloc ( data , 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); CWE401_Memory_Leak__twoIntsStruct_realloc_53b_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_realloc_53b_badSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_realloc_53c_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_realloc_53c_badSink(twoIntsStruct * data) CWE401_Memory_Leak__twoIntsStruct_realloc_53d_badSink ( data ); void CWE401_Memory_Leak__twoIntsStruct_realloc_53d_badSink(twoIntsStruct * data) 