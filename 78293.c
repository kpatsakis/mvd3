void bad() list < int64_t * > dataList ; badSink ( dataList ); void badSink(list<int64_t *> dataList) int64_t * data = dataList . back ( ) ; int64_t source [ 100 ] = { 0 } ; size_t i ; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; free ( data ); 