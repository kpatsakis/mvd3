static void goodB2G() char * data ; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); myUnion . unionFirst = data; char * data = myUnion . unionSecond ; free ( data ); 