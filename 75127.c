void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_bad() int64_t * data ; data = NULL; switch ( 6 )  data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 