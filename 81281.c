cgiFormResultType char *name, double *result, double min, double max, double defaultV) cgiFormResultType error = cgiFormDouble ( name , result , defaultV ) ; cgiFormResultType char *name, double *result, double defaultV) cgiFormEntry * e ; int ch ; e = cgiFormEntryFindFirst ( name ); static cgiFormEntry *cgiFormEntryFindFirst(char *name) return cgiFormEntryFindNext ( ) ; if ( ! e )  if ( ! strlen ( e -> value ) )  ch = cgiFirstNonspaceChar ( e -> value ); static int cgiFirstNonspaceChar(char *s) int len = strspn ( s , " \n\r\t" ) ; return s [ len ] ; 