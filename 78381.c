static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_52c_goodG2BSink(char * data) size_t i ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; for (i = 0; i < 100; i++) data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; free ( data ); 