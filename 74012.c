void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54b_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54c_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54c_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54d_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54d_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54e_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fscanf_54e_goodG2BSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 