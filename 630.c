void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_badSource(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_22_badGlobal )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; free ( data ); 