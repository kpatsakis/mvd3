void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54b_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54c_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54c_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54d_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54d_goodG2BSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54e_goodG2BSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncat_54e_goodG2BSink(char * data) char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 