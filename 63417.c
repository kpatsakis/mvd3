static void goodG2B() list < int * > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<int *> dataList) int * data = dataList . back ( ) ; int source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 