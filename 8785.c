void CWE758_Undefined_Behavior__char_pointer_malloc_use_17_bad() int j ; for(j = 0; j < 1; j++) char * * pointer = ( char * * ) malloc ( sizeof ( char * ) ) ; char * data = * pointer ; free ( pointer ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 