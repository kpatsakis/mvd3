void bad() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( 50 * sizeof ( int64_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_82_bad::action(int64_t * data) int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 