void bad() wchar_t * cryptoKey ; map < int , wchar_t * > cryptoKeyMap ; wchar_t cryptoKeyBuffer [ 100 ] = L "" cryptoKey = cryptoKeyBuffer; wcscpy ( cryptoKey , CRYPTO_KEY ); cryptoKeyMap [ 0 ] = cryptoKey; cryptoKeyMap [ 1 ] = cryptoKey; cryptoKeyMap [ 2 ] = cryptoKey; badSink ( cryptoKeyMap ); void badSink(map<int, wchar_t *> cryptoKeyMap) wchar_t * cryptoKey = cryptoKeyMap [ 2 ] ; HCRYPTHASH hHash ; if ( ! CryptHashData ( hHash , ( BYTE * ) cryptoKey , wcslen ( cryptoKey ) * sizeof ( wchar_t ) , 0 ) )  