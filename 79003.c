static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data [ 0 ] = L '\0' CWE665_Improper_Initialization__wchar_t_ncat_63b_goodG2BSink ( & data ); void CWE665_Improper_Initialization__wchar_t_ncat_63b_goodG2BSink(wchar_t * * dataPtr) wchar_t * data = * dataPtr ; size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 