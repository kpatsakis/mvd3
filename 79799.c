static void goodG2B1() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_22_goodG2B1Source ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_22_goodG2B1Source(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_22_goodG2B1Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; size_t i , dataLen ; dataLen = strlen ( data ); for (i = 0; i < dataLen; i++) 