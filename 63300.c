void CWE124_Buffer_Underwrite__malloc_wchar_t_loop_17_bad() int i ; for(i = 0; i < 1; i++) wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 