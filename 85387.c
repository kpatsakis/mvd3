void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54b_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54c_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54d_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54e_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_54e_goodG2BSink(char * data) char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 