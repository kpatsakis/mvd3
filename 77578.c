void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_09_bad() int * data ; data = NULL; if ( GLOBAL_CONST_TRUE )  int * dataBuffer = ( int * ) ALLOCA ( 100 * sizeof ( int ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; free ( data ); 