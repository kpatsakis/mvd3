void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_17_bad() int i ; char * data ; data = NULL; for(i = 0; i < 1; i++) data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); free ( data ); 