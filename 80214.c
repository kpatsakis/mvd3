static void goodB2G() char * data ; char * * dataPtr1 = & data ; char * * dataPtr2 = & data ; data = NULL; char * data = * dataPtr1 ; data = ( char * ) realloc ( data , 100 * sizeof ( char ) ); strcpy ( data , "A String" ); char * data = * dataPtr2 ; free ( data ); 