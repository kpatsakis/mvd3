void bad() short data ; data = 0; CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad * badObject = new CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad ( data ) ; CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad::CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad(short dataCopy) data = dataCopy; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = ( short ) atoi ( inputBuffer ); printLine ( "fgets() failed." ); delete badObject CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad::~CWE194_Unexpected_Sign_Extension__fgets_malloc_84_bad() if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 