static void goodG2B() char * data ; char * * dataPtr1 = & data ; char dataBuffer [ 100 ] ; data = dataBuffer; char * data = * dataPtr1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; * dataPtr1 = data; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 