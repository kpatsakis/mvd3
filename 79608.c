void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66_bad() char * data ; char * dataArray [ 5 ] ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char dest [ 50 ] = "" ; strcpy ( dest , data ); 