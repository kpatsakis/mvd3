void bad() int64_t * data ; data = ( int64_t * ) calloc ( 1 , sizeof ( int64_t ) ); baseObject -> action ( data ); void CWE690_NULL_Deref_From_Return__int64_t_calloc_82_bad::action(int64_t * data) data [ 0 ] = 5L L printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 