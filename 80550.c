void bad() wchar_t * data ; wchar_t * & dataRef = data ; wchar_t dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = L '\0' wchar_t * data = dataRef ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 