void bad() int * data ; data = ( int * ) calloc ( 100 , sizeof ( int ) ); badSink_b ( data ); void badSink_b(int * data) badSink_c ( data ); void badSink_c(int * data) badSink_d ( data ); void badSink_d(int * data) delete data 