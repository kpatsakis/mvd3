void bad() int data ; map < int , int > dataMap ; data = - 1; data = INT_MAX / 2 + 2; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, int> dataMap) int data = dataMap [ 2 ] ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 