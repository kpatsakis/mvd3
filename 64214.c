void CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_w32_vsnprintf_15_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; switch ( 6 )  WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; size_t dataLen = wcslen ( data ) ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( wchar_t ) ] = L '\0' while ( 0 )  switch ( 7 )  badVaSinkB ( data , data ); static void badVaSinkB(wchar_t * data, ...) wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 