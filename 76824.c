static int unix_getname(struct socket *sock, struct sockaddr *uaddr, int *uaddr_len, int peer) struct sock * sk = sock -> sk ; struct unix_sock * u ; if ( peer )  sk = unix_peer_get ( sk ); struct sock *unix_peer_get(struct sock *s) struct sock * peer ; peer = unix_peer ( s ); return peer ; if ( ! sk )  u = unix_sk ( sk ); if ( ! u -> addr )  struct unix_address * addr = u -> addr ; * uaddr_len = addr -> len; memcpy ( sunaddr , addr -> name , * uaddr_len ); 