 CVE_2011_3000_VULN_nsHttpHeaderArray::ParseHeaderLine(const char nsHttpAtom char **val) char * p = ( char * ) strchr ( line , ':' ) ; if ( ! p )  if ( ! nsHttp :: IsValidToken ( line , p ) )  * p = 0; p = net_FindCharNotInSet ( ++ p , HTTP_LWS ); char * p2 = net_RFindCharNotInSet ( p , HTTP_LWS ) ; * ++ p2 = 0; * val = p; SetHeader ( atom , nsDependentCString ( p , p2 - p ) , PR_TRUE ); 