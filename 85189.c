void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_06_bad() wchar_t * data ; if ( STATIC_CONST_FIVE == 5 )  data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); memmove ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 