static void goodG2B() int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5; data = dataBuffer; myStruct . structFirst = data; CWE590_Free_Memory_Not_on_Heap__free_int_static_67b_goodG2BSink ( myStruct ); void CWE590_Free_Memory_Not_on_Heap__free_int_static_67b_goodG2BSink(CWE590_Free_Memory_Not_on_Heap__free_int_static_67_structType myStruct) int * data = myStruct . structFirst ; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 