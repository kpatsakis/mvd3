void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_51_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_51b_badSink(char * data) char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 