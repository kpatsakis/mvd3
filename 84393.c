int split_commandline(OptionParseContext *octx,int argc,char *argv[],const OptionDef *options,const OptionGroupDef *groups,int nb_groups) int optindex = 1 ; int dashdash = - 2 ; while ( optindex < argc )  const char * opt = argv [ optindex ++ ] ; const char * arg ; const OptionDef * po ; int ret ; if ( opt [ 0 ] == '-' && opt [ 1 ] == '-' && ! opt [ 2 ] )  dashdash = optindex; if ( opt [ 0 ] != '-' || ! opt [ 1 ] || dashdash + 1 == optindex )  opt ++; while ( 0 )  if ( ( ret = match_group_separator ( groups , nb_groups , opt ) ) >= 0 )  static int match_group_separator(const OptionGroupDef *groups,int nb_groups,const char *opt) int i ; for (i = 0; i < nb_groups; i++) const OptionGroupDef * p = & groups [ i ] ; if ( p -> sep && ! strcmp ( p -> sep , opt ) )  return i ; return - 1 ; arg = argv [ optindex ++ ]; if ( ! arg )  while ( 0 )  po = find_option ( options , opt ); if ( po -> name )  if ( po -> flags & 0x0800 )  arg = argv [ optindex ++ ]; if ( po -> flags & 0x0001 )  arg = argv [ optindex ++ ]; if ( ! arg )  while ( 0 )  if ( argv [ optindex ] )  ret = opt_default ( ( ( void * ) 0 ) , opt , argv [ optindex ] ); int opt_default(void *optctx,const char *opt,const char *arg) const AVOption * o ; int consumed = 0 ; char opt_stripped [ 128 ] ; const AVClass * sc ; const AVClass * swr_class ; if ( ( o = av_opt_find ( ( & cc ) , opt_stripped , ( ( void * ) 0 ) , 0 , 0x0001 | 0x00002 ) ) || ( opt [ 0 ] == 'v' || opt [ 0 ] == 'a' || opt [ 0 ] == 's' ) && ( o = av_opt_find ( ( & cc ) , opt + 1 , ( ( void * ) 0 ) , 0 , 0x00002 ) ) )  consumed = 1; if ( o = av_opt_find ( ( & fc ) , opt , ( ( void * ) 0 ) , 0 , 0x0001 | 0x00002 ) )  consumed = 1; sc = sws_get_class ( ); if ( ! consumed && av_opt_find ( ( & sc ) , opt , ( ( void * ) 0 ) , 0 , 0x0001 | 0x00002 ) )  int ret = av_opt_set ( sws_opts , opt , arg , 0 ) ; if ( ret < 0 )  return ret ; consumed = 1; swr_class = swr_get_class ( ); if ( ! consumed && ( o = av_opt_find ( ( & swr_class ) , opt , ( ( void * ) 0 ) , 0 , 0x0001 | 0x00002 ) ) )  struct SwrContext * swr = swr_alloc ( ) ; int ret = av_opt_set ( swr , opt , arg , 0 ) ; if ( ret < 0 )  return ret ; consumed = 1; if ( consumed )  return 0 ; return - ( ( int ) ( ( 0xF8 | 'O' << 8 | 'P' << 16 ) | ( ( unsigned int ) 'T' ) << 24 ) ) ; if ( ret >= 0 )  optindex ++; if ( ret != - ( ( int ) ( ( 0xF8 | 'O' << 8 | 'P' << 16 ) | ( ( unsigned int ) 'T' ) << 24 ) ) )  if ( opt [ 0 ] == 'n' && opt [ 1 ] == 'o' && ( po = find_option ( options , opt + 2 ) ) && po -> name && po -> flags & 0x00002 )  static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; 