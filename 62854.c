static void goodB2G1() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); if ( swscanf ( data , L "%d" , & n ) == 1 ) 