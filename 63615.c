static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_51b_goodG2BSink(char * data) char dest [ 50 ] = "" ; strcpy ( dest , data ); 