static void goodG2B1() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; data = CWE665_Improper_Initialization__wchar_t_ncat_22_goodG2B1Source ( data ); wchar_t * CWE665_Improper_Initialization__wchar_t_ncat_22_goodG2B1Source(wchar_t * data) if ( CWE665_Improper_Initialization__wchar_t_ncat_22_goodG2B1Global )  data [ 0 ] = L '\0' return data ; size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 