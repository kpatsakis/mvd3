static struct skinny_device *config_device(const char *dname, struct ast_variable *v) struct skinny_device * d , * temp ; if ( ! ( d = skinny_device_alloc ( ) ) )  static struct skinny_device *skinny_device_alloc(void) struct skinny_device * d ; if ( ! ( d = ast_calloc ( 1 , sizeof ( * d ) ) ) )  return NULL ; d -> cap = ast_format_cap_alloc_nolock ( ); d -> confcap = ast_format_cap_alloc_nolock ( ); if ( ! d -> cap || ! d -> confcap )  return NULL ; return d ; memcpy ( d , default_device , sizeof ( * default_device ) ); ast_mutex_init ( & d -> lock ); ast_copy_string ( d -> name , dname , sizeof ( d -> name ) ); ast_format_cap_copy ( d -> confcap , default_cap ); AST_LIST_INSERT_TAIL ( & devices , d , list ); ast_mutex_lock ( & d -> lock ); config_parse_variables ( TYPE_DEVICE , d , v ); static void config_parse_variables(int type, void *item, struct ast_variable *vptr) while ( vptr )  v = vptr; vptr = vptr -> next; if ( type & ( TYPE_GENERAL ) )  if ( ! ast_jb_read_conf ( & global_jbconf , v -> name , v -> value ) )  v = v -> next; if ( ! strcasecmp ( v -> name , "bindaddr" ) )  if ( ! ( hp = ast_gethostbyname ( v -> value , & ahp ) ) )  ast_log ( LOG_WARNING , "Invalid address: %s\n" , v -> value ); memcpy ( & bindaddr . sin_addr , hp -> h_addr , sizeof ( bindaddr . sin_addr ) ); if ( ! strcasecmp ( v -> name , "keepalive" ) )  keep_alive = atoi ( v -> value ); if ( ! strcasecmp ( v -> name , "authtimeout" ) )  int timeout = atoi ( v -> value ) ; if ( timeout < 1 )  ast_log ( LOG_WARNING , "Invalid authtimeout value '%s', using default value\n" , v -> value ); auth_timeout = timeout; if ( ! strcasecmp ( v -> name , "authlimit" ) )  int limit = atoi ( v -> value ) ; if ( limit < 1 )  ast_log ( LOG_WARNING , "Invalid authlimit value '%s', using default value\n" , v -> value ); auth_limit = limit; if ( ! strcasecmp ( v -> name , "regcontext" ) )  ast_copy_string ( newcontexts , v -> value , sizeof ( newcontexts ) ); ast_copy_string ( regcontext , v -> value , sizeof ( regcontext ) ); if ( ! strcasecmp ( v -> name , "dateformat" ) )  memcpy ( date_format , v -> value , sizeof ( date_format ) ); if ( ! strcasecmp ( v -> name , "tos" ) )  if ( ast_str2tos ( v -> value , & qos . tos ) )  ast_log ( LOG_WARNING , "Invalid tos value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "tos_audio" ) )  if ( ast_str2tos ( v -> value , & qos . tos_audio ) )  ast_log ( LOG_WARNING , "Invalid tos_audio value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "tos_video" ) )  if ( ast_str2tos ( v -> value , & qos . tos_video ) )  ast_log ( LOG_WARNING , "Invalid tos_video value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "cos" ) )  if ( ast_str2cos ( v -> value , & qos . cos ) )  ast_log ( LOG_WARNING , "Invalid cos value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "cos_audio" ) )  if ( ast_str2cos ( v -> value , & qos . cos_audio ) )  ast_log ( LOG_WARNING , "Invalid cos_audio value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "cos_video" ) )  if ( ast_str2cos ( v -> value , & qos . cos_video ) )  ast_log ( LOG_WARNING , "Invalid cos_video value at line %d, refer to QoS documentation\n" , v -> lineno ); if ( ! strcasecmp ( v -> name , "bindport" ) )  if ( sscanf ( v -> value , "%5d" , & ourport ) == 1 )  ast_log ( LOG_WARNING , "Invalid bindport '%s' at line %d of %s\n" , v -> value , v -> lineno , config ); if ( ! strcasecmp ( v -> name , "allow" ) )  ast_parse_allow_disallow ( & default_prefs , default_cap , v -> value , 1 ); if ( ! strcasecmp ( v -> name , "disallow" ) )  ast_parse_allow_disallow ( & default_prefs , default_cap , v -> value , 0 ); if ( ! strcasecmp ( v -> name , "transfer" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  CDEV_OPTS -> transfer = ast_true ( v -> value ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> transfer = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "callwaiting" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  CDEV_OPTS -> callwaiting = ast_true ( v -> value ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> callwaiting = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "directmedia" ) || ! strcasecmp ( v -> name , "canreinvite" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> directmedia = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "nat" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> nat = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "context" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> context , v -> value , sizeof ( CLINE_OPTS -> context ) ); if ( ! strcasecmp ( v -> name , "vmexten" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  ast_copy_string ( CDEV_OPTS -> vmexten , v -> value , sizeof ( CDEV_OPTS -> vmexten ) ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> vmexten , v -> value , sizeof ( CLINE_OPTS -> vmexten ) ); if ( ! strcasecmp ( v -> name , "mwiblink" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  CDEV_OPTS -> mwiblink = ast_true ( v -> value ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> mwiblink = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "linelabel" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> label , v -> value , sizeof ( CLINE_OPTS -> label ) ); if ( ! strcasecmp ( v -> name , "callerid" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  if ( ! strcasecmp ( v -> value , "asreceived" ) )  CLINE_OPTS -> cid_num [ 0 ] = '\0'; CLINE_OPTS -> cid_name [ 0 ] = '\0'; ast_callerid_split ( v -> value , CLINE_OPTS -> cid_name , sizeof ( CLINE_OPTS -> cid_name ) , CLINE_OPTS -> cid_num , sizeof ( CLINE_OPTS -> cid_num ) ); if ( ! strcasecmp ( v -> name , "amaflags" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  int tempamaflags = ast_cdr_amaflags2int ( v -> value ) ; if ( tempamaflags < 0 )  ast_log ( LOG_WARNING , "Invalid AMA flags: %s at line %d\n" , v -> value , v -> lineno ); CLINE_OPTS -> amaflags = tempamaflags; if ( ! strcasecmp ( v -> name , "regexten" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> regexten , v -> value , sizeof ( CLINE_OPTS -> regexten ) ); if ( ! strcasecmp ( v -> name , "language" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> language , v -> value , sizeof ( CLINE_OPTS -> language ) ); if ( ! strcasecmp ( v -> name , "accountcode" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> accountcode , v -> value , sizeof ( CLINE_OPTS -> accountcode ) ); if ( ! strcasecmp ( v -> name , "mohinterpret" ) || ! strcasecmp ( v -> name , "musiconhold" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> mohinterpret , v -> value , sizeof ( CLINE_OPTS -> mohinterpret ) ); if ( ! strcasecmp ( v -> name , "mohsuggest" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> mohsuggest , v -> value , sizeof ( CLINE_OPTS -> mohsuggest ) ); if ( ! strcasecmp ( v -> name , "callgroup" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> callgroup = ast_get_group ( v -> value ); if ( ! strcasecmp ( v -> name , "pickupgroup" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> pickupgroup = ast_get_group ( v -> value ); if ( ! strcasecmp ( v -> name , "immediate" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE | TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> immediate = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "cancallforward" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> cancallforward = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "mailbox" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> mailbox , v -> value , sizeof ( CLINE_OPTS -> mailbox ) ); if ( ! strcasecmp ( v -> name , "parkinglot" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> parkinglot , v -> value , sizeof ( CLINE_OPTS -> parkinglot ) ); if ( ! strcasecmp ( v -> name , "hasvoicemail" ) )  if ( type & ( TYPE_LINE ) )  if ( ast_true ( v -> value ) && ast_strlen_zero ( CLINE -> mailbox ) )  ast_copy_string ( CLINE -> mailbox , CLINE -> name , sizeof ( CLINE -> mailbox ) ); if ( ! strcasecmp ( v -> name , "threewaycalling" ) )  if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  CLINE_OPTS -> threewaycalling = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "setvar" ) )  if ( type & ( TYPE_LINE ) )  CLINE -> chanvars = add_var ( v -> value , CLINE -> chanvars ); static struct ast_variable *add_var(const char *buf, struct ast_variable *list) char * varname = ast_strdupa ( buf ) , * varval = NULL ; if ( varval = strchr ( varname , '=' ) )  * varval ++ = '\0'; if ( tmpvar = ast_variable_new ( varname , varval , "" ) )  tmpvar -> next = list; list = tmpvar; return list ; if ( ! strcasecmp ( v -> name , "earlyrtp" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  CDEV_OPTS -> earlyrtp = ast_true ( v -> value ); if ( ! strcasecmp ( v -> name , "host" ) )  if ( type & ( TYPE_DEVICE ) )  if ( ast_get_ip ( & CDEV_addr_tmp , v -> value ) )  ast_log ( LOG_WARNING , "Bad IP '%s' at line %d.\n" , v -> value , v -> lineno ); if ( ! strcasecmp ( v -> name , "port" ) )  if ( type & ( TYPE_DEF_DEVICE ) )  CDEV -> addr . sin_port = htons ( atoi ( v -> value ) ); if ( ! strcasecmp ( v -> name , "device" ) )  if ( type & ( TYPE_DEVICE ) )  ast_copy_string ( CDEV_OPTS -> id , v -> value , sizeof ( CDEV_OPTS -> id ) ); if ( ! strcasecmp ( v -> name , "permit" ) || ! strcasecmp ( v -> name , "deny" ) )  if ( type & ( TYPE_DEVICE ) )  CDEV -> ha = ast_append_ha ( v -> name , v -> value , CDEV -> ha , NULL ); if ( ! strcasecmp ( v -> name , "allow" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  ast_parse_allow_disallow ( & CDEV -> confprefs , CDEV -> confcap , v -> value , 1 ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_parse_allow_disallow ( & CLINE -> confprefs , CLINE -> confcap , v -> value , 1 ); if ( ! strcasecmp ( v -> name , "disallow" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  ast_parse_allow_disallow ( & CDEV -> confprefs , CDEV -> confcap , v -> value , 0 ); if ( type & ( TYPE_DEF_LINE | TYPE_LINE ) )  ast_parse_allow_disallow ( & CLINE -> confprefs , CLINE -> confcap , v -> value , 0 ); if ( ! strcasecmp ( v -> name , "version" ) )  if ( type & ( TYPE_DEF_DEVICE | TYPE_DEVICE ) )  ast_copy_string ( CDEV_OPTS -> version_id , v -> value , sizeof ( CDEV_OPTS -> version_id ) ); if ( ! strcasecmp ( v -> name , "line" ) )  if ( type & ( TYPE_DEVICE ) )  if ( ! strcasecmp ( v -> value , l -> name ) && ! l -> prune )  if ( l2 == l && strcasecmp ( d -> id , CDEV -> id ) )  ast_log ( LOG_WARNING , "Line %s already used by %s. Not connecting to %s.\n" , l -> name , d -> name , CDEV -> name ); if ( ! strcasecmp ( v -> name , "subline" ) )  if ( type & ( TYPE_LINE ) )  ast_log ( LOG_WARNING , "Unable to allocate memory for subline %s. Ignoring subline.\n" , v -> value ); ast_log ( LOG_WARNING , "Unable to allocate memory for subline %s container. Ignoring subline.\n" , v -> value ); ast_copy_string ( buf , v -> value , sizeof ( buf ) ); if ( ! strcasecmp ( v -> name , "dialoutcontext" ) )  if ( type & ( TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> dialoutcontext , v -> value , sizeof ( CLINE_OPTS -> dialoutcontext ) ); if ( ! strcasecmp ( v -> name , "dialoutexten" ) )  if ( type & ( TYPE_LINE ) )  ast_copy_string ( CLINE_OPTS -> dialoutexten , v -> value , sizeof ( CLINE_OPTS -> dialoutexten ) ); if ( ! strcasecmp ( v -> name , "speeddial" ) )  if ( type & ( TYPE_DEVICE ) )  ast_log ( LOG_WARNING , "Unable to allocate memory for speeddial %s. Ignoring speeddial.\n" , v -> name ); ast_log ( LOG_WARNING , "Unable to allocate memory for speeddial %s container. Ignoring speeddial.\n" , v -> name ); ast_copy_string ( buf , v -> value , sizeof ( buf ) ); if ( ! strcasecmp ( v -> name , "addon" ) )  if ( type & ( TYPE_DEVICE ) )  ast_log ( LOG_WARNING , "Unable to allocate memory for addon %s. Ignoring addon.\n" , v -> name ); ast_copy_string ( a -> type , v -> value , sizeof ( a -> type ) ); ast_log ( LOG_WARNING , "Don't know keyword '%s' at line %d\n" , v -> name , v -> lineno ); ast_log ( LOG_WARNING , "Invalid category used: %s at line %d\n" , v -> name , v -> lineno ); if ( ! AST_LIST_FIRST ( & d -> lines ) )  ast_mutex_unlock ( & d -> lock ); if ( ! ntohs ( d -> addr . sin_port ) )  d -> addr . sin_port = htons ( DEFAULT_SKINNY_PORT ); if ( strcasecmp ( d -> id , temp -> id ) || ! temp -> prune || ! temp -> session )  ast_mutex_lock ( & d -> lock ); d -> session = temp -> session; d -> session -> device = d; d -> hookstate = temp -> hookstate; AST_LIST_LOCK ( & d -> lines ); AST_LIST_TRAVERSE ( & d -> lines , l , list ) l -> device = d; if ( strcasecmp ( l -> name , ltemp -> name ) )  l -> instance = ltemp -> instance; ast_mutex_lock ( & l -> lock ); l -> sub = ltemp -> sub; AST_LIST_TRAVERSE ( & l -> sub , sub , list ) sub -> line = l; ast_mutex_unlock ( & l -> lock ); AST_LIST_UNLOCK ( & d -> lines ); ast_mutex_unlock ( & d -> lock ); ast_mutex_unlock ( & d -> lock ); ast_verb ( 3 , "%s config for device '%s'\n" , update ? "Updated" : ( skinnyreload ? "Reloaded" : "Created" ) , d -> name ); return d ; 