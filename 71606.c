static void goodG2B() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_52b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_52c_goodG2BSink(wchar_t * data) free ( data ); 