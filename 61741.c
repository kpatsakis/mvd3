void bad() int data ; data = - 1; CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad * badObject = new CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad ( data ) ; CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad::CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad(int dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; SOCKET connectSocket = INVALID_SOCKET ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; inputBuffer [ recvResult ] = '\0'; data = atoi ( inputBuffer ); while ( 0 )  if ( connectSocket != INVALID_SOCKET )  CLOSE_SOCKET ( connectSocket ); if ( wsaDataInit )  WSACleanup ( ); delete badObject CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad::~CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_84_bad() char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 