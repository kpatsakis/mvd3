static void CVE_2011_2536_VULN_transmit_fake_auth_response(struct sip_pvt *p, int sipmethod, struct sip_request *req, enum xmittype reliable) const char * reqheader = "Proxy-Authorization" ; const char * authtoken ; struct ast_str * buf ; char * c ; * i , keys [ ] [ K_NONCE ] = "nonce=" , "" [ K_LAST ] = NULL , NULL if ( sipmethod == SIP_REGISTER || sipmethod == SIP_SUBSCRIBE )  reqheader = "Authorization"; authtoken = get_header ( req , reqheader ); if ( req -> ignore && ! ast_strlen_zero ( p -> randdata ) && ast_strlen_zero ( authtoken ) )  if ( ast_strlen_zero ( p -> randdata ) || ast_strlen_zero ( authtoken ) )  if ( ! ( buf = ast_str_thread_get ( & check_auth_buf , CHECK_AUTH_BUF_INITLEN ) ) )  if ( ast_str_set ( & buf , 0 , "%s" , authtoken ) == AST_DYNSTR_BUILD_FAILED )  c = buf -> str; while ( c && * ( c = ast_skip_blanks ( c ) ) )  for (i = keys; i->key != NULL; i++) if ( strncasecmp ( c , i -> key , strlen ( i -> key ) ) != 0 )  c += strlen ( i -> key ); if ( * c == '"' )  c ++; i -> s = c; strsep ( & c , separator ); if ( i -> key == NULL )  