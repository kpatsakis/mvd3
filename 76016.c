static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51b_goodG2BSink(char * data) SNPRINTF ( dest , strlen ( data ) , "%s" , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 