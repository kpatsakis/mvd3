void CWE606_Unchecked_Loop_Condition__char_environment_52_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); CWE606_Unchecked_Loop_Condition__char_environment_52b_badSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_52b_badSink(char * data) CWE606_Unchecked_Loop_Condition__char_environment_52c_badSink ( data ); void CWE606_Unchecked_Loop_Condition__char_environment_52c_badSink(char * data) if ( sscanf ( data , "%d" , & n ) == 1 )  