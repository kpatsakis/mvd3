svn_error_t *svn_config_get_server_setting_int(svn_config_t *cfg,const char *server_group,const char *option_name,apr_int64_t default_value,apr_int64_t *result_value,apr_pool_t *pool) const char * tmp_value ; tmp_value = svn_config_get_server_setting ( cfg , server_group , option_name , ( ( void * ) 0 ) ); const char *svn_config_get_server_setting(svn_config_t *cfg,const char *server_group,const char *option_name,const char *default_value) const char * retval ; if ( server_group )  svn_config_get ( cfg , & retval , server_group , option_name , retval ); void svn_config_get(svn_config_t *cfg,const char **valuep,const char *section,const char *option,const char *default_value) * valuep = default_value; if ( cfg )  cfg_section_t * sec ; cfg_option_t * opt = find_option ( cfg , section , option , & sec ) ; if ( opt != ( ( void * ) 0 ) )  make_string_from_option ( valuep , cfg , sec , opt , ( ( void * ) 0 ) ); static void make_string_from_option(const char **valuep,svn_config_t *cfg,cfg_section_t *section,cfg_option_t *opt,apr_pool_t *x_pool) if ( ! opt -> expanded )  if ( opt -> value && strchr ( opt -> value , 37 ) )  