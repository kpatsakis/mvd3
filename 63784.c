void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53_bad() long * data ; data = NULL; long * dataBuffer = ( long * ) ALLOCA ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53b_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53b_badSink(long * data) CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53c_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53c_badSink(long * data) CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53d_badSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_53d_badSink(long * data) free ( data ); 