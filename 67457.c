void CWE321_Hard_Coded_Cryptographic_Key__w32_char_52_bad() char * cryptoKey ; char cryptoKeyBuffer [ 100 ] = "" ; cryptoKey = cryptoKeyBuffer; strcpy ( cryptoKey , CRYPTO_KEY ); CWE321_Hard_Coded_Cryptographic_Key__w32_char_52b_badSink ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_char_52b_badSink(char * cryptoKey) CWE321_Hard_Coded_Cryptographic_Key__w32_char_52c_badSink ( cryptoKey ); void CWE321_Hard_Coded_Cryptographic_Key__w32_char_52c_badSink(char * cryptoKey) HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , strlen ( cryptoKey ) * sizeof ( char ) , 0 ) )  