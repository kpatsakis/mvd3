void bad() char * data ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; CWE90_LDAP_Injection__w32_char_environment_84_bad * badObject = new CWE90_LDAP_Injection__w32_char_environment_84_bad ( data ) ; CWE90_LDAP_Injection__w32_char_environment_84_bad::CWE90_LDAP_Injection__w32_char_environment_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 256 - dataLen - 1 ); 