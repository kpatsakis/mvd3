void bad() wchar_t * data ; data = NULL; data = NULL; data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); badSink_b ( data ); void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) badSink_d ( data ); void badSink_d(wchar_t * data) badSink_e ( data ); void badSink_e(wchar_t * data) delete [ ] data 