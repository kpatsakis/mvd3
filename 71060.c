static void goodG2B1() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_goodG2B1Source ( data ); char * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_goodG2B1Source(char * data) if ( CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_22_goodG2B1Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 