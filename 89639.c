static void goodB2G2() long * data ; data = NULL; data = ( long * ) realloc ( data , 1 * sizeof ( long ) ); CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Sink ( data ); void CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Sink(long * data) if ( data != NULL )  data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 