void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_68b_goodG2BSink() size_t data = CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_68_goodG2BData ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 