static void goodG2B() int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5; data = dataBuffer; dataArray [ 2 ] = data; CWE590_Free_Memory_Not_on_Heap__free_int_declare_66b_goodG2BSink ( dataArray ); void CWE590_Free_Memory_Not_on_Heap__free_int_declare_66b_goodG2BSink(int * dataArray[]) int * data = dataArray [ 2 ] ; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 