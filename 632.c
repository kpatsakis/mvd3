static int skinny_extensionstate_cb(const char *context, const char *exten, enum ast_extension_states state, void *data) struct skinny_container * container = data ; char hint [ AST_MAX_EXTENSION ] ; if ( container -> type == SKINNY_SDCONTAINER )  struct skinny_speeddial * sd = container -> data ; d = sd -> parent; if ( ast_get_hint ( hint , sizeof ( hint ) , NULL , 0 , NULL , sd -> context , sd -> exten ) )  if ( ast_device_state ( hint ) == AST_DEVICE_UNAVAILABLE )  switch ( state )  sd -> stateid = - 1; transmit_callstate ( d , sd -> instance , 0 , SKINNY_ONHOOK ); static void transmit_callstate(struct skinny_device *d, int buttonInstance, unsigned callid, int state) struct skinny_req * req ; if ( ! ( req = req_alloc ( sizeof ( struct call_state_message ) , CALL_STATE_MESSAGE ) ) )  req -> data . callstate . callState = htolel ( state ); req -> data . callstate . lineInstance = htolel ( buttonInstance ); req -> data . callstate . callReference = htolel ( callid ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); ast_mutex_unlock ( & s -> lock ); 