void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_64b_badSink(void * dataVoidPtr) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 