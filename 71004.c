static void goodG2B2() int data ; data = - 1; data = CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_22_goodG2B2Source ( data ); int CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_22_goodG2B2Source(int data) if ( CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_22_goodG2B2Global )  data = 100 - 1; return data ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 