void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_51_bad() int data ; data = - 1; CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_51b_badSink ( data ); void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_51b_badSink(int data) int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); intPointer [ i ] = 0; printIntLine ( intPointer [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( intPointer ); 