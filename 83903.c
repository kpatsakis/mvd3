static void goodG2B() twoIntsStruct * dataBuffer = ( twoIntsStruct * ) malloc ( 100 * sizeof ( twoIntsStruct ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] . intOne = 1; dataBuffer [ i ] . intTwo = 1; data = dataBuffer; dataArray [ 2 ] = data; CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_goodG2BSink ( dataArray ); void CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_goodG2BSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; printStructLine ( & data [ 0 ] ); void printStructLine (const twoIntsStruct * structTwoIntsStruct) printf ( "%d -- %d\n" , structTwoIntsStruct -> intOne , structTwoIntsStruct -> intTwo ); free ( data ); 