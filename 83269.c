void CWE401_Memory_Leak__malloc_realloc_char_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; char * data = ( char * ) malloc ( 100 * sizeof ( char ) ) ; strcpy ( data , "A String" ); data = ( char * ) realloc ( data , ( 130000 ) * sizeof ( char ) ); if ( data != NULL )  strcpy ( data , "New String" ); free ( data ); 