void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) position_set merged ; int separate_contexts ; d -> searchflag = searchflag; d -> follows = ( ( sizeof ( ( * d -> follows ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * d -> follows ) ) ) ) ); while ( 0 )  merged . nelem = 0; d -> salloc = 1; d -> sindex = 0; d -> states = ( ( sizeof ( ( * d -> states ) ) == 1 ? xmalloc ( ( d -> salloc ) ) : xnmalloc ( ( d -> salloc ) , sizeof ( ( * d -> states ) ) ) ) ); while ( 0 )  separate_contexts = state_separate_contexts ( ( & merged ) ); static int state_separate_contexts(const position_set *s) int separate_contexts = 0 ; size_t j ; for (j = 0; j < s -> nelem; ++j) if ( ( s -> elems [ j ] . constraint >> 2 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 4; if ( ( s -> elems [ j ] . constraint >> 1 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 2; return separate_contexts ; state_index ( d , ( & merged ) , ( separate_contexts & 4 ? 4 : separate_contexts ^ 7 ) ); static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; alloc_position_set ( & d -> states [ i ] . elems , s -> nelem ); static void alloc_position_set(position_set *s,size_t size) s -> elems = ( ( sizeof ( ( * s -> elems ) ) == 1 ? xmalloc ( size ) : xnmalloc ( size , sizeof ( ( * s -> elems ) ) ) ) ); while ( 0 )  s -> alloc = size; s -> nelem = 0; 