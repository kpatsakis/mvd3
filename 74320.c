static void goodB2G() size_t data ; data = rand ( ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54b_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54c_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54d_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54d_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54e_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_54e_goodB2GSink(size_t data) if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 