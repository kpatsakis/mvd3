void CWE194_Unexpected_Sign_Extension__fgets_memcpy_54b_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_memcpy_54c_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_memcpy_54c_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_memcpy_54d_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_memcpy_54d_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_memcpy_54e_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_memcpy_54e_badSink(short data) char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memcpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 