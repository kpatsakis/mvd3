void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_68b_badSink() int data = CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_68_badData ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 