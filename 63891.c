void CWE127_Buffer_Underread__char_alloca_cpy_52_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; CWE127_Buffer_Underread__char_alloca_cpy_52b_badSink ( data ); void CWE127_Buffer_Underread__char_alloca_cpy_52b_badSink(char * data) CWE127_Buffer_Underread__char_alloca_cpy_52c_badSink ( data ); void CWE127_Buffer_Underread__char_alloca_cpy_52c_badSink(char * data) char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 