void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_61_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_61b_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_61b_badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 