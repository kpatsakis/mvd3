void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_22_bad() int data ; data = - 1; data = CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_22_badSource ( data ); int CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_22_badSource(int data) if ( CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_22_badGlobal )  data = INT_MAX / 2 + 2; return data ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 