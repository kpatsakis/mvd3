static int skinny_set_rtp_peer(struct ast_channel *c, struct ast_rtp_instance *rtp, struct ast_rtp_instance *vrtp, struct ast_rtp_instance *trtp, const struct ast_format_cap *codecs, int nat_active) struct skinny_subchannel * sub ; struct skinny_line * l ; struct skinny_device * d ; struct ast_format_list fmt ; sub = c -> tech_pvt; if ( c -> _state != AST_STATE_UP )  if ( ! sub )  l = sub -> line; d = l -> device; if ( rtp )  fmt = ast_codec_pref_getsize ( & l -> prefs , & tmpfmt ); if ( ! ( l -> directmedia ) || ( l -> nat ) )  transmit_startmediatransmission ( d , sub , them , fmt ); static void transmit_startmediatransmission(struct skinny_device *d, struct skinny_subchannel *sub, struct sockaddr_in dest, struct ast_format_list fmt) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct start_media_transmission_message ) , START_MEDIA_TRANSMISSION_MESSAGE ) ) )  req -> data . startmedia . conferenceId = htolel ( sub -> callid ); req -> data . startmedia . passThruPartyId = htolel ( sub -> callid ); req -> data . startmedia . remoteIp = dest . sin_addr . s_addr; req -> data . startmedia . remotePort = htolel ( ntohs ( dest . sin_port ) ); req -> data . startmedia . packetSize = htolel ( fmt . cur_ms ); req -> data . startmedia . payloadType = htolel ( codec_ast2skinny ( & fmt . format ) ); req -> data . startmedia . qualifier . precedence = htolel ( 127 ); req -> data . startmedia . qualifier . vad = htolel ( 0 ); req -> data . startmedia . qualifier . packets = htolel ( 0 ); req -> data . startmedia . qualifier . bitRate = htolel ( 0 ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); 