static void goodG2B() wchar_t * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B * goodG2BObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B(wchar_t * dataCopy) data = dataCopy; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' delete goodG2BObject CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncat_84_goodG2B() wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcsncat ( data , source , 100 ); free ( data ); 