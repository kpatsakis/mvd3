void parse_loglevel(int argc,char **argv,const OptionDef *options) int idx = locate_option ( argc , argv , options , "loglevel" ) ; int locate_option(int argc,char **argv,const OptionDef *options,const char *optname) const OptionDef * po ; int i ; for (i = 1; i < argc; i++) const char * cur_opt = argv [ i ] ; if ( ( * ( cur_opt ++ ) ) != '-' )  po = find_option ( options , cur_opt ); if ( ! po -> name && cur_opt [ 0 ] == 'n' && cur_opt [ 1 ] == 'o' )  po = find_option ( options , cur_opt + 2 ); if ( ! po -> name && ! strcmp ( cur_opt , optname ) || po -> name && ! strcmp ( optname , po -> name ) )  if ( po -> flags & 0x0001 )  i ++; static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  