static void goodG2B() int64_t * data ; data = NULL; data = ( int64_t * ) malloc ( sizeof ( * data ) ); int64_t * dataCopy = data ; int64_t * data = dataCopy ; printLongLongLine ( * data ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 