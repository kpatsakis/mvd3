static void goodG2B() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE127_Buffer_Underread__malloc_char_memmove_53b_goodG2BSink ( data ); void CWE127_Buffer_Underread__malloc_char_memmove_53b_goodG2BSink(char * data) CWE127_Buffer_Underread__malloc_char_memmove_53c_goodG2BSink ( data ); void CWE127_Buffer_Underread__malloc_char_memmove_53c_goodG2BSink(char * data) CWE127_Buffer_Underread__malloc_char_memmove_53d_goodG2BSink ( data ); void CWE127_Buffer_Underread__malloc_char_memmove_53d_goodG2BSink(char * data) memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 