static void goodG2B() short data ; data = 0; data = CWE194_Unexpected_Sign_Extension__rand_memmove_61b_goodG2BSource ( data ); short CWE194_Unexpected_Sign_Extension__rand_memmove_61b_goodG2BSource(short data) data = 100 - 1; return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 