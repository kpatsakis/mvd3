void parse_options(void *optctx,int argc,char **argv,const OptionDef *options,void (*parse_arg_function)(void *, const char *)) const char * opt ; int optindex ; int handleoptions = 1 ; int ret ; optindex = 1; while ( optindex < argc )  opt = argv [ optindex ++ ]; if ( handleoptions && opt [ 0 ] == '-' && opt [ 1 ] != '\0' )  if ( opt [ 1 ] == '-' && opt [ 2 ] == '\0' )  handleoptions = 0; opt ++; if ( ( ret = parse_option ( optctx , opt , argv [ optindex ] , options ) ) < 0 )  optindex += ret; int parse_option(void *optctx,const char *opt,const char *arg,const OptionDef *options) const OptionDef * po ; po = find_option ( options , opt ); if ( ! po -> name && opt [ 0 ] == 'n' && opt [ 1 ] == 'o' )  po = find_option ( options , opt + 2 ); if ( ! po -> name )  po = find_option ( options , "default" ); static const OptionDef *find_option(const OptionDef *po,const char *name) const char * p = ( strchr ( name , ':' ) ) ; int len = ( p ? ( p - name ) : strlen ( name ) ) ; while ( po -> name != ( ( void * ) 0 ) )  if ( ! strncmp ( name , po -> name , len ) && strlen ( po -> name ) == len )  po ++; 