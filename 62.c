void CWE369_Divide_by_Zero__int_connect_socket_divide_53_bad() WSADATA wsaData ; int recvResult ; struct sockaddr_in service ; char inputBuffer [ CHAR_ARRAY_SIZE ] ; if ( WSAStartup ( MAKEWORD ( 2 , 2 ) , & wsaData ) != NO_ERROR )  connectSocket = socket ( AF_INET , SOCK_STREAM , IPPROTO_TCP ); if ( connectSocket == INVALID_SOCKET )  memset ( & service , 0 , sizeof ( service ) ); service . sin_family = AF_INET; service . sin_addr . s_addr = inet_addr ( IP_ADDRESS ); service . sin_port = htons ( TCP_PORT ); if ( connect ( connectSocket , ( struct sockaddr * ) & service , sizeof ( service ) ) == SOCKET_ERROR )  recvResult = recv ( connectSocket , inputBuffer , CHAR_ARRAY_SIZE - 1 , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  inputBuffer [ recvResult ] = '\0'; data = atoi ( inputBuffer ); while ( 0 )  CWE369_Divide_by_Zero__int_connect_socket_divide_53b_badSink ( data ); void CWE369_Divide_by_Zero__int_connect_socket_divide_53b_badSink(int data) CWE369_Divide_by_Zero__int_connect_socket_divide_53c_badSink ( data ); void CWE369_Divide_by_Zero__int_connect_socket_divide_53c_badSink(int data) CWE369_Divide_by_Zero__int_connect_socket_divide_53d_badSink ( data ); void CWE369_Divide_by_Zero__int_connect_socket_divide_53d_badSink(int data) printIntLine ( 100 / data ); void printIntLine (int intNumber) printf ( "%d\n" , intNumber ); 