void CWE665_Improper_Initialization__wchar_t_ncat_52_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] ; data = dataBuffer; CWE665_Improper_Initialization__wchar_t_ncat_52b_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_ncat_52b_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_ncat_52c_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_ncat_52c_badSink(wchar_t * data) size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 