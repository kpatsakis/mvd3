static int CVE_2011_3002_PATCHED_GrowAtomTable(AtomTable *atable, int size) int * newmap , * newrev ; if ( atable -> size < size )  if ( atable -> amap )  newmap = moz_xrealloc ( atable -> amap , sizeof ( int ) * size ); newrev = moz_xrealloc ( atable -> arev , sizeof ( int ) * size ); newmap = moz_xmalloc ( sizeof ( int ) * size ); newrev = moz_xmalloc ( sizeof ( int ) * size ); atable -> size = 0; if ( ! newmap || ! newrev )  memset ( & newmap [ atable -> size ] , 0 , ( size - atable -> size ) * sizeof ( int ) ); 