void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_10_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; if ( globalTrue )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 