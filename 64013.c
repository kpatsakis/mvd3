void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_32_bad() char * data ; char * * dataPtr1 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); char * data = * dataPtr1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; * dataPtr1 = data; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 