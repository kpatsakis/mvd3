void CWE194_Unexpected_Sign_Extension__negative_strncpy_22_bad() short data ; data = 0; data = CWE194_Unexpected_Sign_Extension__negative_strncpy_22_badSource ( data ); short CWE194_Unexpected_Sign_Extension__negative_strncpy_22_badSource(short data) if ( CWE194_Unexpected_Sign_Extension__negative_strncpy_22_badGlobal )  data = - 1; return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 