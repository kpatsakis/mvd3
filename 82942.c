static CVE_2011_1076_VULN_dns_resolver_instantiate(struct key *key, const void *_data, size_t datalen) unsigned long derrno ; int ret ; const char * data = _data , * end , * opt ; if ( datalen <= 1 || ! data || data [ datalen - 1 ] != '\0' )  datalen --; end = data + datalen; opt = memchr ( data , '#' , datalen ); if ( ! opt )  const char * next_opt ; opt ++; const char * eq ; int opt_len , opt_nlen , opt_vlen , tmp ; next_opt = memchr ( opt , '#' , end - opt ) ? : end opt_len = next_opt - opt; if ( ! opt_len )  eq = memchr ( opt , '=' , opt_len ) ? : end opt_nlen = eq - opt; eq ++; opt_vlen = next_opt - eq; if ( opt_nlen == sizeof ( DNS_ERRORNO_OPTION ) - 1 && memcmp ( opt , DNS_ERRORNO_OPTION , opt_nlen ) == 0 )  if ( opt_vlen <= 0 )  ret = strict_strtoul ( eq , 10 , & derrno ); if ( ret < 0 )  if ( derrno < 1 || derrno > 511 )  while ( opt = next_opt + 1 , opt < end )  