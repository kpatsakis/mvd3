static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_66b_goodG2BSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_66b_goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = wcslen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 