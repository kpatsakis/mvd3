int skinny_reload(void) struct skinny_device * d ; struct skinny_req * req ; if ( skinnyreload )  d -> prune = 1; d = skinny_device_destroy ( d ); static struct skinny_device *skinny_device_destroy(struct skinny_device *d) return NULL ; if ( d -> session )  if ( req = req_alloc ( sizeof ( struct reset_message ) , RESET_MESSAGE ) )  static struct skinny_req *req_alloc(size_t size, int response_message) struct skinny_req * req ; if ( ! ( req = ast_calloc ( 1 , skinny_header_size + size + 4 ) ) )  return NULL ; req -> len = htolel ( size + 4 ); req -> e = htolel ( response_message ); return req ; req -> data . reset . resetType = 2; transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); static int skinny_unregister(struct skinny_req *req, struct skinnysession *s) d = s -> device; if ( d )  d -> session = NULL; d -> registered = 0; AST_LIST_TRAVERSE ( & d -> speeddials , sd , list ) AST_LIST_TRAVERSE ( & d -> lines , l , list ) if ( l -> device == d )  manager_event ( EVENT_FLAG_SYSTEM , "PeerStatus" , "ChannelType: Skinny\r\nPeer: Skinny/%s@%s\r\nPeerStatus: Unregistered\r\n" , l -> name , d -> name ); ast_mutex_unlock ( & s -> lock ); 