static void goodB2G2() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE606_Unchecked_Loop_Condition__char_environment_22_goodB2G2Sink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_22_goodB2G2Sink(char * data) if ( CWE606_Unchecked_Loop_Condition__char_environment_22_goodB2G2Global )  if ( sscanf ( data , "%d" , & n ) == 1 )  