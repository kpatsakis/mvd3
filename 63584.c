static void goodG2B() size_t data ; data = 0; data = CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_61b_goodG2BSource ( data ); size_t CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_61b_goodG2BSource(size_t data) data = 20; return data ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 