static int handle_offhook_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l = NULL ; struct skinny_subchannel * sub = NULL ; int instance ; int reference ; instance = letohl ( req -> data . offhook . instance ); reference = letohl ( req -> data . offhook . reference ); if ( d -> hookstate == SKINNY_OFFHOOK )  if ( reference )  sub = find_subchannel_by_instance_reference ( d , instance , reference ); static struct skinny_subchannel *find_subchannel_by_instance_reference(struct skinny_device *d, int instance, int reference) struct skinny_line * l = find_line_by_instance ( d , instance ) ; struct skinny_subchannel * sub ; if ( ! l )  return NULL ; if ( ! reference )  sub = AST_LIST_FIRST ( & l -> sub ); return sub ; l = sub -> line; if ( ! sub )  if ( instance )  l = find_line_by_instance ( d , instance ); static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; l = d -> activeline; sub = l -> activesub; d -> hookstate = SKINNY_OFFHOOK; if ( sub && sub -> substate == SUBSTATE_HOLD )  transmit_lamp_indication ( d , STIMULUS_LINE , l -> instance , SKINNY_LAMP_ON ); static void transmit_lamp_indication(struct skinny_device *d, int stimulus, int instance, int indication) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct set_lamp_message ) , SET_LAMP_MESSAGE ) ) )  req -> data . setlamp . stimulus = htolel ( stimulus ); req -> data . setlamp . stimulusInstance = htolel ( instance ); req -> data . setlamp . deviceStimulus = htolel ( indication ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  