static void goodG2B1() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B1Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B1Source(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B1Global )  data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 