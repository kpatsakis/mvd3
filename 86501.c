void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_64_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_64b_badSink ( & data ); void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 