static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); data [ 0 ] = L '\0' CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_84_goodB2G * goodB2GObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_84_goodB2G ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_84_goodB2G::CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( wchar_t ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  