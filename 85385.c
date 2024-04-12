static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) int mbclen ; int maxlen = 0 ; size_t i ; int * match_lens = ( ( void * ) 0 ) ; size_t nelem = d -> states [ s ] . mbps . nelem ; position_set follows ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  transit_state_consume_1char ( d , s , pp , match_lens , & mbclen , & follows ); static status_transit_state transit_state_consume_1char(struct dfa *d,state_num s,const unsigned char **pp,int *match_lens,int *mbclen,position_set *pps) int k ; state_num s1 ; state_num s2 ; * mbclen = ( mblen_buf [ * pp - buf_begin ] == 0 ? 1 : mblen_buf [ * pp - buf_begin ] ); s1 = s; for (k = 0; k <  *mbclen; k++) s2 = s1; rs = transit_state_singlebyte ( d , s2 , ( * pp ) ++ , & s1 ); static status_transit_state transit_state_singlebyte(struct dfa *d,state_num s,const unsigned char *p,state_num *next_state) state_num * t ; state_num works = s ; status_transit_state rval = TRANSIT_STATE_IN_PROGRESS ; while ( rval == TRANSIT_STATE_IN_PROGRESS )  if ( ( t = d -> trans [ works ] ) != ( ( void * ) 0 ) )  works = t [ * p ]; rval = TRANSIT_STATE_DONE; if ( works < 0 )  works = 0; if ( works < 0 )  works = 0; if ( d -> fails [ works ] )  works = d -> fails [ works ] [ * p ]; rval = TRANSIT_STATE_DONE; build_state ( works , d ); static void build_state(state_num s,struct dfa *d) state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) free ( d -> trans [ i ] ); d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); 