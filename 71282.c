void bad() int64_t * data ; int64_t * & dataRef = data ; data = NULL; int64_t * dataBuffer = ( int64_t * ) ALLOCA ( 100 * sizeof ( int64_t ) ) ; size_t i ; for (i = 0; i < 100; i++) dataBuffer [ i ] = 5L L data = dataBuffer; int64_t * data = dataRef ; free ( data ); 