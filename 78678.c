static void goodB2G() size_t data ; size_t dataArray [ 5 ] ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_66b_goodB2GSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_66b_goodB2GSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); printLine ( myString ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( myString ); 