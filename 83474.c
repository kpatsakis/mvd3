void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_64_bad() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer - 8; CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_64b_badSink ( & data ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_64b_badSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 