void svn_config_get(svn_config_t *cfg,const char **valuep,const char *section,const char *option,const char *default_value) if ( cfg )  cfg_section_t * sec ; cfg_option_t * opt = find_option ( cfg , section , option , & sec ) ; if ( opt != ( ( void * ) 0 ) )  if ( default_value && strchr ( default_value , 37 ) )  apr_pool_t * tmp_pool = svn_pool_create_ex ( cfg -> x_pool , ( ( void * ) 0 ) ) ; const char * x_default ; expand_option_value ( cfg , sec , default_value , & x_default , tmp_pool ); static void expand_option_value(svn_config_t *cfg,cfg_section_t *section,const char *opt_value,const char **opt_x_valuep,apr_pool_t *x_pool) const char * parse_from = opt_value ; const char * name_start ; const char * name_end ; while ( parse_from != ( ( void * ) 0 ) && ( * parse_from ) != '\0' && ( name_start = ( strstr ( parse_from , "%(" ) ) ) != ( ( void * ) 0 ) )  name_start += sizeof ( "%(" ) - 1; if ( ( * name_start ) == '\0' )  name_end = ( strstr ( name_start , ")s" ) ); if ( name_end != ( ( void * ) 0 ) )  cfg_option_t * x_opt ; apr_size_t len = ( name_end - name_start ) ; char * name = apr_pstrmemdup ( x_pool , name_start , len ) ; x_opt = find_option ( cfg , section -> name , name , ( ( void * ) 0 ) ); if ( x_opt != ( ( void * ) 0 ) )  const char * cstring ; make_string_from_option ( & cstring , cfg , section , x_opt , x_pool ); parse_from = name_end + ( sizeof ( ")s" ) - 1 ); parse_from = name_end + ( sizeof ( ")s" ) - 1 ); parse_from = ( ( void * ) 0 ); static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  apr_pool_t * tmp_pool = x_pool ? x_pool : svn_pool_create_ex ( cfg -> x_pool , ( ( void * ) 0 ) ) ; expand_option_value ( cfg , section , opt -> value , & opt -> x_value , tmp_pool ); static void expand_option_value(svn_config_t *cfg,cfg_section_t *section,const char *opt_value,const char **opt_x_valuep,apr_pool_t *x_pool) const char * parse_from = opt_value ; const char * name_start ; const char * name_end ; while ( parse_from != ( ( void * ) 0 ) && ( * parse_from ) != '\0' && ( name_start = ( strstr ( parse_from , "%(" ) ) ) != ( ( void * ) 0 ) )  name_start += sizeof ( "%(" ) - 1; if ( ( * name_start ) == '\0' )  name_end = ( strstr ( name_start , ")s" ) ); if ( name_end != ( ( void * ) 0 ) )  cfg_option_t * x_opt ; apr_size_t len = ( name_end - name_start ) ; char * name = apr_pstrmemdup ( x_pool , name_start , len ) ; x_opt = find_option ( cfg , section -> name , name , ( ( void * ) 0 ) ); if ( x_opt != ( ( void * ) 0 ) )  make_string_from_option ( & cstring , cfg , section , x_opt , x_pool ); len = ( name_start - ( sizeof ( "%(" ) - 1 ) - copy_from ); if ( buf == ( ( void * ) 0 ) )  buf = svn_stringbuf_ncreate ( copy_from , len , x_pool ); svn_stringbuf_appendbytes ( buf , copy_from , len ); svn_stringbuf_appendcstr ( buf , cstring ); parse_from = name_end + ( sizeof ( ")s" ) - 1 ); copy_from = parse_from; parse_from = name_end + ( sizeof ( ")s" ) - 1 ); parse_from = ( ( void * ) 0 ); if ( buf != ( ( void * ) 0 ) )  svn_stringbuf_appendcstr ( buf , copy_from ); * opt_x_valuep = ( buf -> data ); * opt_x_valuep = ( ( void * ) 0 ); 