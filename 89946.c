void badSink(map<int, wchar_t *> dataMap) size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 