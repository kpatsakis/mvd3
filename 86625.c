void CWE124_Buffer_Underwrite__malloc_char_cpy_52_bad() char * data ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE124_Buffer_Underwrite__malloc_char_cpy_52b_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_52b_badSink(char * data) CWE124_Buffer_Underwrite__malloc_char_cpy_52c_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_52c_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 