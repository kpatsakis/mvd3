void CWE590_Free_Memory_Not_on_Heap__free_int_static_16_bad() int * data ; data = NULL; while ( 1 )  static int dataBuffer [ 100 ] ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5; data = dataBuffer; free ( data ); 