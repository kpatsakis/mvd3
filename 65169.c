void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_04_bad() char * data ; if ( STATIC_CONST_TRUE )  data = ( char * ) malloc ( 10 * sizeof ( char ) ); memcpy ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 