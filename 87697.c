void CWE690_NULL_Deref_From_Return__int64_t_calloc_51_bad() int64_t * data ; data = ( int64_t * ) calloc ( 1 , sizeof ( int64_t ) ); CWE690_NULL_Deref_From_Return__int64_t_calloc_51b_badSink ( data ); void CWE690_NULL_Deref_From_Return__int64_t_calloc_51b_badSink(int64_t * data) data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 