void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badSource(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badGlobal )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; free ( data ); 