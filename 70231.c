static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , GOOD_OS_COMMAND ); CWE426_Untrusted_Search_Path__wchar_t_system_64b_goodG2BSink ( & data ); void CWE426_Untrusted_Search_Path__wchar_t_system_64b_goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; if ( SYSTEM ( data ) <= 0 )  