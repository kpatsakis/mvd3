static void goodG2B2() wchar_t * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B2Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B2Source(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_22_goodG2B2Global )  data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); return data ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); free ( data ); 