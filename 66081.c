static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodG2BSink ( dataMap ); void goodG2BSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 