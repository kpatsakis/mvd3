void CWE134_Uncontrolled_Format_String__char_environment_fprintf_22_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE134_Uncontrolled_Format_String__char_environment_fprintf_22_badSink ( data ); void CWE134_Uncontrolled_Format_String__char_environment_fprintf_22_badSink(char * data) if ( CWE134_Uncontrolled_Format_String__char_environment_fprintf_22_badGlobal )  fprintf ( stdout , data ); 