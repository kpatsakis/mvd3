void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_structType myStruct) char * data = myStruct . structFirst ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 