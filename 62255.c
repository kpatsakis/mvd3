void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_51_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_51b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_51b_badSink(char * data) strncpy ( data , source , strlen ( source ) + 1 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 