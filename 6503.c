void CWE124_Buffer_Underwrite__malloc_char_cpy_54b_badSink(char * data) CWE124_Buffer_Underwrite__malloc_char_cpy_54c_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_54c_badSink(char * data) CWE124_Buffer_Underwrite__malloc_char_cpy_54d_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_54d_badSink(char * data) CWE124_Buffer_Underwrite__malloc_char_cpy_54e_badSink ( data ); void CWE124_Buffer_Underwrite__malloc_char_cpy_54e_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 