void CWE127_Buffer_Underread__malloc_char_loop_41_bad() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__malloc_char_loop_41_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_loop_41_badSink(char * data) dest [ i ] = data [ i ]; dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 