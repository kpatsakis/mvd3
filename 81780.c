static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_52b_goodG2BSink(wchar_t * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_52c_goodG2BSink(wchar_t * data) wcsncat ( dest , data , wcslen ( data ) ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 