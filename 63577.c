static void goodG2B2() int data ; data = - 1; data = CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_22_goodG2B2Source ( data ); int CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_22_goodG2B2Source(int data) if ( CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_22_goodG2B2Global )  data = 20; return data ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 