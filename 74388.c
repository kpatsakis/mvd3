static void goodG2B() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53b_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_53d_goodG2BSink(char * data) char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 