static void goodB2G() char * data ; data = NULL; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); CWE401_Memory_Leak__char_calloc_54b_goodB2GSink ( data ); void CWE401_Memory_Leak__char_calloc_54b_goodB2GSink(char * data) CWE401_Memory_Leak__char_calloc_54c_goodB2GSink ( data ); void CWE401_Memory_Leak__char_calloc_54c_goodB2GSink(char * data) CWE401_Memory_Leak__char_calloc_54d_goodB2GSink ( data ); void CWE401_Memory_Leak__char_calloc_54d_goodB2GSink(char * data) CWE401_Memory_Leak__char_calloc_54e_goodB2GSink ( data ); void CWE401_Memory_Leak__char_calloc_54e_goodB2GSink(char * data) free ( data ); 