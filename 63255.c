void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_52_bad() char * data ; data = ( char * ) malloc ( 10 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_52b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_52b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_52c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_52c_badSink(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 