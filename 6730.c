void CWE590_Free_Memory_Not_on_Heap__free_int_static_51_bad() int * data ; data = NULL; static int dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int_static_51b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int_static_51b_badSink(int * data) free ( data ); 