void bad() short data ; data = 0; CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad * badObject = new CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad ( data ) ; CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad::CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad(short dataCopy) data = dataCopy; data = - 1; delete badObject CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad::~CWE194_Unexpected_Sign_Extension__negative_memcpy_84_bad() char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 