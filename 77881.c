static void goodB2G() twoIntsStruct * data ; data = NULL; data = goodB2GSource ( data ); static twoIntsStruct * goodB2GSource(twoIntsStruct * data) data = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ); data [ 0 ] . intOne = 0; data [ 0 ] . intTwo = 0; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); return data ; 