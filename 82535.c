static void goodB2G1() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_22_goodB2G1Sink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_22_goodB2G1Sink(size_t data) if ( CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_22_goodB2G1Global )  char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 