static void goodB2G2() if ( 5 == 5 )  char hashData [ 100 ] = HASH_INPUT ; HCRYPTPROV hCryptProv = 0 ; HCRYPTHASH hHash = 0 ; HCRYPTKEY hKey = 0 ; BYTE payload [ ( 100 - 1 ) * sizeof ( wchar_t ) ] ; DWORD payloadBytes ; if ( ! CryptAcquireContext ( & hCryptProv , NULL , MS_ENH_RSA_AES_PROV , PROV_RSA_AES , 0 ) )  if ( ! CryptCreateHash ( hCryptProv , CALG_SHA_256 , 0 , 0 , & hHash ) )  if ( ! CryptHashData ( hHash , ( BYTE * ) hashData , strlen ( hashData ) , 0 ) )  if ( ! CryptDeriveKey ( hCryptProv , CALG_AES_256 , hHash , 0 , & hKey ) )  if ( ! CryptDecrypt ( hKey , 0 , 1 , 0 , payload , & payloadBytes ) )  while ( 0 )  