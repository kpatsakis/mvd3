void bad() long * data ; data = ( long * ) malloc ( 1 * sizeof ( long ) ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, long *> dataMap) long * data = dataMap [ 2 ] ; data [ 0 ] = 5L; printLongLine ( data [ 0 ] ); void printLongLine (long longNumber) printf ( "%ld\n" , longNumber ); free ( data ); 