void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_32_bad() char * data ; char * * dataPtr1 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; * dataPtr1 = data; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 