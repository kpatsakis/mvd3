static void goodG2B() int * data ; data = NULL; int * dataBuffer = ( int * ) malloc ( 100 * sizeof ( int ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int_declare_52b_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_declare_52b_goodG2BSink(int * data) CWE590_Free_Memory_Not_on_Heap__free_int_declare_52c_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_declare_52c_goodG2BSink(int * data) free ( data ); 