void CWE401_Memory_Leak__char_calloc_66_bad() char * data ; data = NULL; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); dataArray [ 2 ] = data; CWE401_Memory_Leak__char_calloc_66b_badSink ( dataArray ); void CWE401_Memory_Leak__char_calloc_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; 