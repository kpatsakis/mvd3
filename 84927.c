void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54c_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54d_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54d_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54e_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_54e_goodB2GSink(size_t data) char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 