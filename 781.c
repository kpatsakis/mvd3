void CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_63_bad() int * data ; data = ( int * ) malloc ( 10 * sizeof ( int ) ); data [ i ] = i; CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_63b_badSink ( & data ); void CWE457_Use_of_Uninitialized_Variable__int_array_malloc_partial_init_63b_badSink(int * * dataPtr) int * data = * dataPtr ; printIntLine ( data [ i ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 