void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53_bad() char * data ; data = NULL; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_53d_badSink(char * data) char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); free ( data ); 