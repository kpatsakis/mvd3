static void goodB2G() int64_t * data ; data = NULL; data = ( int64_t * ) realloc ( data , 1 * sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_realloc_51b_goodB2GSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_realloc_51b_goodB2GSink(int64_t * data) if ( data != NULL )  data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 