void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) position * firstpos ; position * o_firstpos ; d -> searchflag = searchflag; firstpos = ( ( sizeof ( ( * firstpos ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * firstpos ) ) ) ) ); while ( 0 )  o_firstpos = firstpos , firstpos += d -> nleaves; free ( o_firstpos ); 