void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) position_set merged ; size_t i ; d -> searchflag = searchflag; d -> follows = ( ( sizeof ( ( * d -> follows ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * d -> follows ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> tindex; ++i) if ( d -> tokens [ i ] < ( 1 << 8 ) || d -> tokens [ i ] == BACKREF || d -> tokens [ i ] == ANYCHAR || d -> tokens [ i ] == MBCSET || d -> tokens [ i ] >= CSET )  epsclosure ( & merged , d ); static void epsclosure(position_set *s,const struct dfa *d) char * visited ; visited = ( ( sizeof ( ( * visited ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * visited ) ) ) ) ); while ( 0 )  p . constraint = old . constraint; if ( visited [ old . index ] )  visited [ old . index ] = 1; switch ( d -> tokens [ old . index ] )  p . constraint &= 0x444; p . constraint &= 0x700; p . constraint &= 0x050; p . constraint &= 0x202; p . constraint &= 0x252; p . constraint &= 0x525; for (j = 0; j < d -> follows[old . index] . nelem; ++j) p . index = d -> follows [ old . index ] . elems [ j ] . index; insert ( p , s ); static void insert(position p,position_set *s) size_t count = s -> nelem ; size_t hi = count ; while ( lo < hi )  size_t mid = lo + hi >> 1 ; if ( s -> elems [ mid ] . index > p . index )  lo = mid + 1; hi = mid; if ( lo < count && p . index == s -> elems [ lo ] . index )  s -> elems [ lo ] . constraint |= p . constraint; if ( s -> alloc <= count + 1 )  size_t new_n_alloc = count + 1 + ( ! s -> elems ) ; s -> elems = ( x2nrealloc ( ( s -> elems ) , & new_n_alloc , sizeof ( ( * s -> elems ) ) ) ); s -> alloc = new_n_alloc; for (i = count; i > lo; i--) s -> elems [ i ] = s -> elems [ i - 1 ]; s -> elems [ lo ] = p; ++ s -> nelem; free ( visited ); 