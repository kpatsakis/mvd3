static void goodG2B() wchar_t * data ; wchar_t * * dataPtr2 = & data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data [ 0 ] = L '\0' wchar_t * data = * dataPtr2 ; size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 