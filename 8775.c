void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_51_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_51b_badSink(wchar_t * data) memmove ( data , source , 100 * sizeof ( wchar_t ) ); data [ 100 - 1 ] = L '\0' printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 