void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_bad() int * data ; data = NULL; data = ( int * ) malloc ( 50 * sizeof ( int ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_badSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; int source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int ) ); free ( data ); 