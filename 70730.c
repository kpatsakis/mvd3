static int config_load(void) struct ast_config * cfg ; int oldport = ntohs ( bindaddr . sin_port ) ; struct ast_flags config_flags = { 0 } ; if ( gethostname ( ourhost , sizeof ( ourhost ) ) )  cfg = ast_config_load ( config , config_flags ); if ( ! cfg || cfg == CONFIG_STATUS_FILEINVALID )  memset ( & bindaddr , 0 , sizeof ( bindaddr ) ); if ( ntohl ( bindaddr . sin_addr . s_addr ) )  hp = ast_gethostbyname ( ourhost , & ahp ); if ( ! hp )  if ( ! ntohs ( bindaddr . sin_port ) )  bindaddr . sin_port = htons ( DEFAULT_SKINNY_PORT ); bindaddr . sin_family = AF_INET; if ( ( skinnysock > - 1 ) && ( ntohs ( bindaddr . sin_port ) != oldport ) )  skinnysock = - 1; if ( skinnysock < 0 )  skinnysock = socket ( AF_INET , SOCK_STREAM , 0 ); if ( setsockopt ( skinnysock , SOL_SOCKET , SO_REUSEADDR , & on , sizeof ( on ) ) == - 1 )  if ( skinnysock < 0 )  ast_log ( LOG_WARNING , "Unable to create Skinny socket: %s\n" , strerror ( errno ) ); 