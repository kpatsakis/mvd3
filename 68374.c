static void goodG2B() long * dataBuffer = ( long * ) malloc ( 100 * sizeof ( long ) ) ; if ( dataBuffer == NULL )  dataBuffer [ i ] = 5L; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_long_declare_52b_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_long_declare_52b_goodG2BSink(long * data) CWE590_Free_Memory_Not_on_Heap__free_long_declare_52c_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_long_declare_52c_goodG2BSink(long * data) printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 