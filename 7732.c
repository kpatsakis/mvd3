void CWE134_Uncontrolled_Format_String__char_environment_vfprintf_07_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticFive == 5 )  size_t dataLen = strlen ( data ) ; strncat ( data + dataLen , environment , 100 - dataLen - 1 ); badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 