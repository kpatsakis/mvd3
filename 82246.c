static void goodB2G1() int * data ; data = ( int * ) calloc ( 100 , sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); CWE401_Memory_Leak__int_calloc_22_goodB2G1Sink ( data ); void CWE401_Memory_Leak__int_calloc_22_goodB2G1Sink(int * data) free ( data ); 