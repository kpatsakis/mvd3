void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54_bad() char * data ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54b_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54b_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54c_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54c_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54d_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54d_badSink(char * data) CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54e_badSink ( data ); void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_54e_badSink(char * data) strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 