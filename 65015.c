static void goodB2G() size_t data ; data = 0; WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  listenSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( listenSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = INADDR_ANY; service . sin_port = htons ( TCP_PORT ); if ( bind ( listenSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  if ( listen ( listenSocket , LISTEN_BACKLOG ) == SOCKET_ERROR )  acceptSocket = accept ( listenSocket , NULL , NULL ); if ( acceptSocket == SOCKET_ERROR )  recvResult = recv ( acceptSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = strtoul ( inputBuffer , NULL , 0 ); while ( 0 )  CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53b_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53c_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53d_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_listen_socket_53d_goodB2GSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 