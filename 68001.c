void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_21_bad() char * data ; data = NULL; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); return data ; char source [ 10 + 1 ] = SRC_STRING ; memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 