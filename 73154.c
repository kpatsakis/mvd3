void bad() wchar_t * data ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 100 - 1 data [ 100 - 1 ] = L '\0' badSink_b ( data ); void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) wchar_t dest [ 50 ] = L "" wcsncat ( dest , data , wcslen ( data ) ); 