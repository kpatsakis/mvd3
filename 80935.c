void CWE124_Buffer_Underwrite__char_alloca_ncpy_51_bad() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_alloca_ncpy_51b_badSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_ncpy_51b_badSink(char * data) strncpy ( data , source , 100 - 1 ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 