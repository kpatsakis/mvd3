void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_11_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; char dest [ 50 ] = "" ; strcat ( dest , data ); 