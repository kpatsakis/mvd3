void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54c_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54d_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54e_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_54e_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memmove ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 