static void goodG2B() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_char_declare_54b_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_54b_goodG2BSink(char * data) CWE590_Free_Memory_Not_on_Heap__free_char_declare_54c_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_54c_goodG2BSink(char * data) CWE590_Free_Memory_Not_on_Heap__free_char_declare_54d_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_54d_goodG2BSink(char * data) CWE590_Free_Memory_Not_on_Heap__free_char_declare_54e_goodG2BSink ( data ); void CWE590_Free_Memory_Not_on_Heap__free_char_declare_54e_goodG2BSink(char * data) printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 