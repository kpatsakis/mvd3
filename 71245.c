static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = strlen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; while ( 0 )  myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_67b_goodB2GSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_67b_goodB2GSink(CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_67_structType myStruct) char * data = myStruct . structFirst ; goodB2GVaSink ( data , data ); static void goodB2GVaSink(char * data, ...) va_start ( args , data ); 