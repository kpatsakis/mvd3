void bad() long * data ; map < int , long * > dataMap ; data = NULL; long * dataBuffer = ( long * ) ALLOCA ( 100 * sizeof ( long ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L; data = dataBuffer; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, long *> dataMap) long * data = dataMap [ 2 ] ; free ( data ); 