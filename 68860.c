void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_12_bad() char * password ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; password = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( char ) ) )  strcpy ( password , "Password1234!" ); if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 