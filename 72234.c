void CWE426_Untrusted_Search_Path__char_popen_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , BAD_OS_COMMAND ); dataArray [ 2 ] = data; CWE426_Untrusted_Search_Path__char_popen_66b_badSink ( dataArray ); void CWE426_Untrusted_Search_Path__char_popen_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 