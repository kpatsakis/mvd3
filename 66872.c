void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_64_bad() int data ; data = - 1; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_64b_badSink ( & data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_64b_badSink(void * dataVoidPtr) int * dataPtr = ( int * ) dataVoidPtr ; int data = ( * dataPtr ) ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 