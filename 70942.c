void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53_bad() char * data ; char dataBadBuffer [ 50 ] ; data = dataBadBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53b_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53c_badSink(char * data) CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_53d_badSink(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 