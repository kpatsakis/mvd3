static void goodG2B() short data ; CWE194_Unexpected_Sign_Extension__rand_memcpy_34_unionType myUnion ; data = 0; data = 100 - 1; myUnion . unionFirst = data; short data = myUnion . unionSecond ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 