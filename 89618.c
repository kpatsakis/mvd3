void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67_bad() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67_structType myStruct ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67b_badSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 