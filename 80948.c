static void good1() if ( 5 != 5 )  BYTE payload [ 100 ] ; DWORD payloadLen = strlen ( PAYLOAD ) ; HCRYPTPROV hCryptProv = ( HCRYPTPROV ) NULL ; HCRYPTHASH hHash = ( HCRYPTHASH ) NULL ; HCRYPTKEY hKey = ( HCRYPTKEY ) NULL ; char hashData [ 100 ] = HASH_INPUT ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptEncrypt ( hKey , 0 , 1 , 0 , payload , & payloadLen , sizeof ( payload ) ) )  while ( 0 )  