void CWE758_Undefined_Behavior__int64_t_malloc_use_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; int64_t * pointer = ( int64_t * ) malloc ( sizeof ( int64_t ) ) ; int64_t data = * pointer ; free ( pointer ); printLongLongLine ( data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); 