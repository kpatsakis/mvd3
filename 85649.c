static void goodG2B() short data ; CWE194_Unexpected_Sign_Extension__rand_malloc_34_unionType myUnion ; data = 0; data = 100 - 1; myUnion . unionFirst = data; short data = myUnion . unionSecond ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 