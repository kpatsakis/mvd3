static void goodG2B() wchar_t * dataBuffer = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; dataArray [ 2 ] = data; CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_66b_goodG2BSink ( dataArray ); void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wcsncpy ( data , source , 100 - 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 