void bad() vector < int64_t * > dataVector ; badSink ( dataVector ); void badSink(vector<int64_t *> dataVector) int64_t * data = dataVector [ 2 ] ; int64_t source [ 100 ] = { 0 } ; memcpy ( data , source , 100 * sizeof ( int64_t ) ); printLongLongLine ( data [ 0 ] ); void printLongLongLine (int64_t longLongIntNumber) printf ( "%lld\n" , longLongIntNumber ); free ( data ); 