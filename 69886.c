void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; CWE78_OS_Command_Injection__char_listen_socket_system_84_bad * badObject = new CWE78_OS_Command_Injection__char_listen_socket_system_84_bad ( data ) ; CWE78_OS_Command_Injection__char_listen_socket_system_84_bad::CWE78_OS_Command_Injection__char_listen_socket_system_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 