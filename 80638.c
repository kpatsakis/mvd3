void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_12_bad() int * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); data [ i ] = source [ i ]; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 