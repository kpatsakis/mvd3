void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_61_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_61b_badSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_61b_badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strncat ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 