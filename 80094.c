void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64_bad() int * data ; data = ( int * ) malloc ( 10 ); CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_64b_badSink(void * dataVoidPtr) int * * dataPtr = ( int * * ) dataVoidPtr ; int * data = ( * dataPtr ) ; data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 