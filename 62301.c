static void goodG2B() int64_t * data ; data = NULL; int64_t * dataBuffer = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_82_base * baseObject = new CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_82_goodG2B baseObject -> action ( data ); void CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_82_goodG2B::action(int64_t * data) free ( data ); 