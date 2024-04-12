static void send_callinfo(struct skinny_subchannel *sub) struct ast_channel * ast ; struct skinny_device * d ; struct skinny_line * l ; char * fromname ; char * fromnum ; char * toname ; char * tonum ; if ( ! sub || ! sub -> owner || ! sub -> line || ! sub -> line -> device )  ast = sub -> owner; l = sub -> line; d = l -> device; if ( sub -> calldirection == SKINNY_INCOMING )  fromname = S_COR ( ast -> connected . id . name . valid , ast -> connected . id . name . str , "" ); fromnum = S_COR ( ast -> connected . id . number . valid , ast -> connected . id . number . str , "" ); toname = S_COR ( ast -> caller . id . name . valid , ast -> caller . id . name . str , "" ); tonum = S_COR ( ast -> caller . id . number . valid , ast -> caller . id . number . str , "" ); if ( sub -> calldirection == SKINNY_OUTGOING )  fromname = S_COR ( ast -> caller . id . name . valid , ast -> caller . id . name . str , "" ); fromnum = S_COR ( ast -> caller . id . number . valid , ast -> caller . id . number . str , "" ); toname = S_COR ( ast -> connected . id . name . valid , ast -> connected . id . name . str , l -> lastnumberdialed ); tonum = S_COR ( ast -> connected . id . number . valid , ast -> connected . id . number . str , l -> lastnumberdialed ); transmit_callinfo ( d , l -> instance , sub -> callid , fromname , fromnum , toname , tonum , sub -> calldirection ); static void transmit_callinfo(struct skinny_device *d, int instance, int callid, char *fromname, char *fromnum, char *toname, char *tonum, int calldirection) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_info_message ) , CALL_INFO_MESSAGE ) ) )  req -> data . callinfo . instance = htolel ( instance ); req -> data . callinfo . reference = htolel ( callid ); req -> data . callinfo . type = htolel ( calldirection ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); ast_mutex_unlock ( & s -> lock ); 