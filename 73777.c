void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_61_bad() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_61b_badSource ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_61b_badSource(wchar_t * data) data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' return data ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 