static void goodG2B1() int64_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source ( data ); int64_t * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source(int64_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Global )  data = ( int64_t * ) malloc ( sizeof ( * data ) ); * data = 2147483643L L return data ; free ( data ); 