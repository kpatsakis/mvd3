void bad() short data ; data = 0; data = - 1; CWE194_Unexpected_Sign_Extension__negative_malloc_82_base * baseObject = new CWE194_Unexpected_Sign_Extension__negative_malloc_82_bad baseObject -> action ( data ); void CWE194_Unexpected_Sign_Extension__negative_malloc_82_bad::action(short data) if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 