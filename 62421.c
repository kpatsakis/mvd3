void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaoptimize ( d ); static void dfaoptimize(struct dfa *d) size_t i ; if ( ! 1 || ! using_utf8 ( ) )  inline static int using_utf8() static int utf8 = - 1 ; if ( utf8 == - 1 )  utf8 = strcmp ( ( nl_langinfo ( CODESET ) ) , "UTF-8" ) == 0; return utf8 ; for (i = 0; i < d -> tindex; ++i) switch ( d -> tokens [ i ] )  free_mbdata ( d ); static void free_mbdata(struct dfa *d) size_t i ; d -> multibyte_prop = ( ( void * ) 0 ); for (i = 0; i < d -> nmbcsets; ++i) size_t j ; struct mb_char_classes * p = & d -> mbcsets [ i ] ; for (j = 0; j < p -> ncoll_elems; ++j) free ( p -> coll_elems [ j ] ); 