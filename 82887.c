static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_84_goodB2G * goodB2GObject = new CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_84_goodB2G ( data ) ; CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_84_goodB2G::CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; recvResult = recv ( connectSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; 