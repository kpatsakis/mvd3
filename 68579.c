void CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_08_bad() if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 