void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__char_environment_vfprintf_66b_badSink ( dataArray ); void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 