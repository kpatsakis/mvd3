void CWE401_Memory_Leak__malloc_realloc_struct_twoIntsStruct_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; struct _twoIntsStruct * data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ) ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; data = ( struct _twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( struct _twoIntsStruct ) ); if ( data != NULL )  data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; struct _twoIntsStruct * data = ( struct _twoIntsStruct * ) malloc ( 100 * sizeof ( struct _twoIntsStruct ) ) ; struct _twoIntsStruct * tmpData ; data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; tmpData = ( struct _twoIntsStruct * ) realloc ( data , ( 130000 ) * sizeof ( struct _twoIntsStruct ) ); if ( tmpData != NULL )  data = tmpData; data [ 0 ] . intOne = 1; data [ 0 ] . intTwo = 1; printStructLine ( ( twoIntsStruct * ) & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 