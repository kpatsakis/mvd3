static void goodG2B2() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_22_goodG2B2Source ( data ); wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_22_goodG2B2Source(wchar_t * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_memcpy_22_goodG2B2Global )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' return data ; wchar_t dest [ 50 ] = L "" memcpy ( dest , data , wcslen ( data ) * sizeof ( wchar_t ) ); 