void CWE690_NULL_Deref_From_Return__int_realloc_41_bad() int * data ; data = NULL; data = ( int * ) realloc ( data , 1 * sizeof ( int ) ); badSink ( data ); static void badSink(int * data) data [ 0 ] = 5; printIntLine ( data [ 0 ] ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); free ( data ); 