static void goodG2B2() short data ; data = 0; data = CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_goodG2B2Source ( data ); short CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_goodG2B2Source(short data) if ( CWE194_Unexpected_Sign_Extension__connect_socket_memmove_22_goodG2B2Global )  data = 100 - 1; return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 