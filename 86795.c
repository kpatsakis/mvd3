void CWE124_Buffer_Underwrite__malloc_char_loop_64_bad() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__malloc_char_loop_64b_badSink ( & data ); void CWE124_Buffer_Underwrite__malloc_char_loop_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 