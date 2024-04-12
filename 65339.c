static void build_state_zero(struct dfa *d) d -> tralloc = 1; d -> trcount = 0; d -> realtrans = ( ( sizeof ( ( * d -> realtrans ) ) == 1 ? xzalloc ( ( d -> tralloc + 1 ) ) : xcalloc ( ( d -> tralloc + 1 ) , sizeof ( ( * d -> realtrans ) ) ) ) ); while ( 0 )  d -> trans = d -> realtrans + 1; d -> fails = ( ( sizeof ( ( * d -> fails ) ) == 1 ? xzalloc ( ( d -> tralloc ) ) : xcalloc ( ( d -> tralloc ) , sizeof ( ( * d -> fails ) ) ) ) ); while ( 0 )  d -> success = ( ( sizeof ( ( * d -> success ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> success ) ) ) ) ); while ( 0 )  d -> newlines = ( ( sizeof ( ( * d -> newlines ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> newlines ) ) ) ) ); while ( 0 )  build_state ( 0 , d ); static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) position pos ; size_t i ; for (i = 0; i < d -> states[s] . elems . nelem; ++i) pos = d -> states [ s ] . elems . elems [ i ]; if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) )  if ( d -> tokens [ pos . index ] >= CSET )  if ( 1 && ( d -> tokens [ pos . index ] == ANYCHAR || d -> tokens [ pos . index ] == MBCSET ) )  if ( d -> states [ s ] . mbps . nelem == 0 )  alloc_position_set ( & d -> states [ s ] . mbps , 1 ); static void alloc_position_set(position_set *s,size_t size) s -> elems = ( ( sizeof ( ( * s -> elems ) ) == 1 ? xmalloc ( size ) : xnmalloc ( size , sizeof ( ( * s -> elems ) ) ) ) ); while ( 0 )  s -> alloc = size; s -> nelem = 0; 