void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_51_bad() size_t data ; data = rand ( ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_51b_badSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_51b_badSink(size_t data) if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 