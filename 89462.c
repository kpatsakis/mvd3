void CWE195_Signed_to_Unsigned_Conversion_Error__fgets_strncpy_13_bad() char source [ 100 ] ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 