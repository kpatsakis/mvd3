static void goodB2G() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; password = CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_61b_goodB2GSource ( password ); char * CWE319_Cleartext_Tx_Sensitive_Info__w32_char_connect_socket_61b_goodB2GSource(char * password) size_t passwordLen = strlen ( password ) ; recvResult = recv ( connectSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; return password ; 