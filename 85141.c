void CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54c_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54d_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54d_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54e_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_54e_goodB2GSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 