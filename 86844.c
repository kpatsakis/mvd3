void CWE194_Unexpected_Sign_Extension__fgets_strncpy_53_bad() char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); CWE194_Unexpected_Sign_Extension__fgets_strncpy_53b_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_strncpy_53b_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_strncpy_53c_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_strncpy_53c_badSink(short data) CWE194_Unexpected_Sign_Extension__fgets_strncpy_53d_badSink ( data ); void CWE194_Unexpected_Sign_Extension__fgets_strncpy_53d_badSink(short data) if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 