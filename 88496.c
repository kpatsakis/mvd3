void CWE319_Cleartext_Tx_Sensitive_Info__w32_char_listen_socket_15_bad() char * password ; char passwordBuffer [ 100 ] = "" ; password = passwordBuffer; switch ( 6 )  size_t passwordLen = strlen ( password ) ; recvResult = recv ( acceptSocket , ( char * ) ( password + passwordLen ) , ( 100 - passwordLen - 1 ) * sizeof ( char ) , 0 ); if ( recvResult == SOCKET_ERROR || recvResult == 0 )  password [ passwordLen + recvResult / sizeof ( char ) ] = '\0'; replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  