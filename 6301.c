void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_bad() char * data ; data = NULL; data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_badSource ( data ); char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_badSource(char * data) if ( CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_22_badGlobal )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 