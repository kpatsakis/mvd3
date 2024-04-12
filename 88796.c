void parse_loglevel(int argc,char **argv,const OptionDef *options) int idx = locate_option ( argc , argv , options , "loglevel" ) ; int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; for (i = 1; i < argc; i++) const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; return po ; if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; if ( ! idx )  idx = locate_option ( argc , argv , options , "v" ); int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  return i ; if ( po -> flags & 0x0001 )  i ++; return 0 ; if ( idx && argv [ idx + 1 ] )  opt_loglevel ( ( ( void * ) 0 ) , "loglevel" , argv [ idx + 1 ] ); int opt_loglevel(void *optctx,const char *opt,const char *arg) const struct { const char * name ; int level ; } log_levels [ ] = { { "quiet" , ( - 8 ) } , { "panic" , ( 0 ) } , { "fatal" , ( 8 ) } , { "error" , ( 16 ) } , { "warning" , ( 24 ) } , { "info" , ( 32 ) } , { "verbose" , ( 40 ) } , { "debug" , ( 48 ) } } ; int i ; for (i = 0; i < sizeof(log_levels) / sizeof(log_levels[0]); i++) if ( ! strcmp ( log_levels [ i ] . name , arg ) )  