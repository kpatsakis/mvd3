void CWE401_Memory_Leak__int_realloc_31_bad() int * data ; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); int * dataCopy = data ; int * data = dataCopy ; 