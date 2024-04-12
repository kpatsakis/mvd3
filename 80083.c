static void mwi_event_cb(const struct ast_event *event, void *userdata) struct skinny_line * l = userdata ; struct skinny_device * d = l -> device ; if ( d )  struct skinnysession * s = d -> session ; struct skinny_line * l2 ; int dev_msgs = 0 ; if ( s )  if ( l2 -> newmsgs )  dev_msgs ++; if ( dev_msgs )  transmit_lamp_indication ( d , STIMULUS_VOICEMAIL , 0 , d -> mwiblink ? SKINNY_LAMP_BLINK : SKINNY_LAMP_ON ); static void transmit_lamp_indication(struct skinny_device *d, int stimulus, int instance, int indication) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct set_lamp_message ) , SET_LAMP_MESSAGE ) ) )  req -> data . setlamp . stimulus = htolel ( stimulus ); req -> data . setlamp . stimulusInstance = htolel ( instance ); req -> data . setlamp . deviceStimulus = htolel ( indication ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  