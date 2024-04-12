static int sctp_getsockopt(struct sock *sk, int level, int char __user *optval, int __user *optlen) int len ; if ( level != SOL_SCTP )  if ( get_user ( len , optlen ) )  if ( len < 0 )  switch ( optname )  retval = sctp_getsockopt_peer_addrs ( sk , len , optval , optlen ); static int sctp_getsockopt_peer_addrs(struct sock *sk, int char __user *optval, int __user *optlen) struct sctp_association * asoc ; struct sctp_getaddrs getaddrs ; struct sctp_transport * from ; union sctp_addr temp ; if ( len < sizeof ( struct sctp_getaddrs ) )  if ( copy_from_user ( & getaddrs , optval , sizeof ( struct sctp_getaddrs ) ) )  asoc = sctp_id2assoc ( sk , getaddrs . assoc_id ); struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id) struct sctp_association * asoc = NULL ; if ( ! sctp_style ( sk , UDP ) )  if ( ! sctp_sstate ( sk , ESTABLISHED ) && ! sctp_sstate ( sk , CLOSING ) )  return NULL ; return asoc ; if ( ! id || ( id == ( sctp_assoc_t ) - 1 ) )  return NULL ; asoc = ( struct sctp_association * ) idr_find ( & sctp_assocs_id , ( int ) id ); if ( ! asoc || ( asoc -> base . sk != sk ) || asoc -> base . dead )  return NULL ; return asoc ; if ( ! asoc )  memcpy ( & temp , & from -> ipaddr , sizeof ( temp ) ); addrlen = sctp_get_pf_specific ( sk -> sk_family ) -> addr_to_user ( sp , & temp ); if ( space_left < addrlen )  if ( copy_to_user ( to , & temp , addrlen ) )  to += addrlen; space_left -= addrlen; bytes_copied = ( ( char __user * ) to ) - optval; if ( put_user ( bytes_copied , optlen ) )  