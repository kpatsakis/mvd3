void bad() size_t data ; data = 0; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad * badObject = new CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad ( data ) ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad::CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad(size_t dataCopy) data = dataCopy; WSADATA wsaData ; int wsaDataInit = 0 ; int recvResult ; struct sockaddr_in service ; SOCKET listenSocket = INVALID_SOCKET ; SOCKET acceptSocket = INVALID_SOCKET ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  break ; wsaDataInit = 1; listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  break ; memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  break ; if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  break ; acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  break ; recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  break ; inputBuffer [ recvResult ] = '\0'; data = strtoul ( inputBuffer , NULL , 0 ); while ( 0 )  if ( listenSocket != INVALID_SOCKET )  CLOSE_SOCKET ( listenSocket ); if ( acceptSocket != INVALID_SOCKET )  CLOSE_SOCKET ( acceptSocket ); if ( wsaDataInit )  WSACleanup ( ); delete badObject CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad::~CWE789_Uncontrolled_Mem_Alloc__malloc_char_listen_socket_84_bad() char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 