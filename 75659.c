void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_bad() wchar_t * data ; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType myStruct ; data = NULL; data = ( wchar_t * ) malloc ( 10 * sizeof ( wchar_t ) ); myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67b_badSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType myStruct) wchar_t * data = myStruct . structFirst ; wchar_t source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( wcslen ( source ) + 1 ) * sizeof ( wchar_t ) ); free ( data ); 