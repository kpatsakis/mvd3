void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_65b_goodB2GSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 