static void goodB2G2() char * data ; data = NULL; data = ( char * ) calloc ( 20 , sizeof ( char ) ); goodB2G2Sink ( data ); static void goodB2G2Sink(char * data) if ( goodB2G2Static )  if ( data != NULL )  strcpy ( data , "Initialize" ); free ( data ); 