void CWE665_Improper_Initialization__wchar_t_ncat_54b_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_ncat_54c_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_ncat_54c_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_ncat_54d_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_ncat_54d_badSink(wchar_t * data) CWE665_Improper_Initialization__wchar_t_ncat_54e_badSink ( data ); void CWE665_Improper_Initialization__wchar_t_ncat_54e_badSink(wchar_t * data) size_t sourceLen ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' sourceLen = wcslen ( source ); wcsncat ( data , source , sourceLen ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 