static void goodG2B() int64_t * dataBuffer = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; if ( dataBuffer == NULL )  data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_41_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_41_goodG2BSink(int64_t * data) printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 