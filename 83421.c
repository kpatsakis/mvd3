void goodG2BSink(list<wchar_t *> cryptoKeyList) wchar_t toBeEncrypted [ ] = L "String to be encrypted" DWORD encryptedLen = wcslen ( toBeEncrypted ) * sizeof ( wchar_t ) ; BYTE encrypted [ 200 ] ; memcpy ( encrypted , toBeEncrypted , encryptedLen ); if ( ! CryptEncrypt ( hKey , ( HCRYPTHASH ) NULL , 1 , 0 , encrypted , & encryptedLen , sizeof ( encrypted ) ) )  printBytesLine ( encrypted , encryptedLen ); void printBytesLine(const unsigned char * bytes, size_t numBytes) for (i = 0; i < numBytes; ++i) printf ( "%02x" , bytes [ i ] ); 