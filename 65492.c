void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_63_bad() int64_t * data ; data = NULL; int64_t * dataBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_63b_badSink ( & data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_63b_badSink(int64_t * * dataPtr) int64_t * data = * dataPtr ; free ( data ); 