void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_66_bad() wchar_t * data ; data = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ); dataArray [ 2 ] = data; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_66b_badSink ( dataArray ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; data [ i ] = source [ i ]; printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 