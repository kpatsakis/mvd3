void CWE780_Use_of_RSA_Algorithm_Without_OAEP__w32_12_bad() if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; DWORD payloadLen = strlen ( PAYLOAD ) ; memcpy ( payload , PAYLOAD , payloadLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , ( BYTE * ) payload , & payloadLen , sizeof ( payload ) ) )  printBytesLine ( ( BYTE * ) payload , payloadLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 