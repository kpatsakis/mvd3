static void good1() if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; char dest [ DEST_SIZE ] ; sprintf ( dest , "%s %s" , SOURCE_STRING , SOURCE_STRING ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 