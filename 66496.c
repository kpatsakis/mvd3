static void goodB2G() size_t data ; data = 0; data = rand ( ); size_t dataCopy = data ; size_t data = dataCopy ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 