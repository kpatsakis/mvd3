void bad() wchar_t * data ; data = NULL; data = new wchar_t [ 50 ]; data [ 0 ] = L '\0' badSink_b ( data ); void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) badSink_d ( data ); void badSink_d(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 