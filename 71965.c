void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_bad() struct _twoIntsStruct * data ; data = NULL; data = badSource ( data ); static struct _twoIntsStruct * badSource(struct _twoIntsStruct * data) data = ( struct _twoIntsStruct * ) calloc ( 100 , sizeof ( struct _twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); return data ; 