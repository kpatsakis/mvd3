void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_bad() int * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_badSource ( data ); int * CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_badSource(int * data) if ( CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_22_badGlobal )  data = ( int * ) malloc ( 10 ); return data ; int source [ 10 ] = { 0 } ; memcpy ( data , source , 10 * sizeof ( int ) ); printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 