void CWE427_Uncontrolled_Search_Path_Element__char_environment_17_bad() int i ; char * data ; char dataBuffer [ 250 ] = "PATH=" ; data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 250 - dataLen - 1 ); PUTENV ( data ); 