void CWE134_Uncontrolled_Format_String__char_connect_socket_fprintf_08_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; fprintf ( stdout , data ); 