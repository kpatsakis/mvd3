void badSink_b(wchar_t * data) badSink_c ( data ); void badSink_c(wchar_t * data) badSink_d ( data ); void badSink_d(wchar_t * data) badSink_e ( data ); void badSink_e(wchar_t * data) wchar_t dest [ 100 ] ; wmemset ( dest , L 'C' , 100 - 1 dest [ 100 - 1 ] = L '\0' wcsncpy ( dest , data , wcslen ( dest ) ); printWLine ( dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 