void CWE124_Buffer_Underwrite__char_alloca_cpy_54_bad() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__char_alloca_cpy_54b_badSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_cpy_54b_badSink(char * data) CWE124_Buffer_Underwrite__char_alloca_cpy_54c_badSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_cpy_54c_badSink(char * data) CWE124_Buffer_Underwrite__char_alloca_cpy_54d_badSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_cpy_54d_badSink(char * data) CWE124_Buffer_Underwrite__char_alloca_cpy_54e_badSink ( data ); void CWE124_Buffer_Underwrite__char_alloca_cpy_54e_badSink(char * data) strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 