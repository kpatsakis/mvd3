static void good1() if ( globalFalse )  int64_t * data = ( int64_t * ) malloc ( 100 * sizeof ( int64_t ) ) ; int64_t * tmpData ; data [ 0 ] = 5L L tmpData = ( int64_t * ) realloc ( data , ( 130000 ) * sizeof ( int64_t ) ); if ( tmpData != NULL )  data = tmpData; printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 