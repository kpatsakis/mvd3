void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_13_bad() int data ; data = - 1; if ( GLOBAL_CONST_FIVE == 5 )  data = INT_MAX / 2 + 2; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 