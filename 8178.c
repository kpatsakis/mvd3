void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_61_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_61b_badSource ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_61b_badSource(char * data) memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; SNPRINTF ( dest , strlen ( data ) , "%s" , data ); 