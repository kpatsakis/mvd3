static void goodB2G() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; recvResult = recv ( acceptSocket , ( char * ) ( data + dataLen ) , sizeof ( char ) * ( 100 - dataLen - 1 ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  data [ dataLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( data , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( data , '\n' ); if ( replace )  * replace = '\0'; dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_66b_goodB2GSink ( dataArray ); void CWE134_Uncontrolled_Format_String__char_listen_socket_snprintf_66b_goodB2GSink(char * dataArray[]) char * data = dataArray [ 2 ] ; SNPRINTF ( dest , 100 - 1 , "%s" , data ); 