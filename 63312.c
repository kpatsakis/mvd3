static void *skinny_session(void *data) int res ; struct skinny_req * req ; struct skinnysession * s = data ; res = get_input ( s ); static int get_input(struct skinnysession *s) int res ; int timeout = keep_alive * 1100 ; time_t now ; int * bufaddr ; struct pollfd fds [ 1 ] ; if ( ! s -> device )  if ( time ( & now ) == - 1 )  return - 1 ; timeout = ( auth_timeout - ( now - s -> start ) ) * 1000; if ( timeout < 0 )  return - 1 ; fds [ 0 ] . fd = s -> fd; fds [ 0 ] . events = POLLIN; fds [ 0 ] . revents = 0; res = ast_poll ( fds , 1 , timeout ); if ( res < 0 )  if ( errno != EINTR )  return res ; if ( res == 0 )  return - 1 ; if ( fds [ 0 ] . revents )  memset ( s -> inbuf , 0 , sizeof ( s -> inbuf ) ); res = read ( s -> fd , s -> inbuf , 4 ); if ( res < 0 )  return res ; if ( res != 4 )  return - 1 ; bufaddr = ( int * ) s -> inbuf; dlen = letohl ( * bufaddr ); if ( dlen < 4 )  return - 1 ; if ( dlen + 8 > sizeof ( s -> inbuf ) )  dlen = sizeof ( s -> inbuf ) - 8; res = read ( s -> fd , s -> inbuf + 4 , dlen + 4 ); if ( res < 0 )  return res ; if ( res != ( dlen + 4 ) )  return - 1 ; return res ; return 0 ; if ( res < 0 )  if ( res > 0 )  if ( ! ( req = skinny_req_parse ( s ) ) )  static struct skinny_req *skinny_req_parse(struct skinnysession *s) struct skinny_req * req ; int * bufaddr ; if ( ! ( req = ast_calloc ( 1 , SKINNY_MAX_PACKET ) ) )  return NULL ; memcpy ( req , s -> inbuf , skinny_header_size ); bufaddr = ( int * ) ( s -> inbuf ); memcpy ( & req -> data , s -> inbuf + skinny_header_size , letohl ( * bufaddr ) - 4 ); if ( letohl ( req -> e ) < 0 )  return NULL ; return req ; res = handle_message ( req , s ); if ( res < 0 )  static int handle_message(struct skinny_req *req, struct skinnysession *s) if ( ( ! s -> device ) && ( letohl ( req -> e ) != REGISTER_MESSAGE && letohl ( req -> e ) != ALARM_MESSAGE ) )  switch ( letohl ( req -> e ) )  res = handle_soft_key_event_message ( req , s ); static int handle_soft_key_event_message(struct skinny_req *req, struct skinnysession *s) struct skinny_device * d = s -> device ; struct skinny_line * l ; struct skinny_subchannel * sub = NULL ; struct ast_channel * c ; int event ; int instance ; int callreference ; event = letohl ( req -> data . softkeyeventmessage . softKeyEvent ); instance = letohl ( req -> data . softkeyeventmessage . instance ); callreference = letohl ( req -> data . softkeyeventmessage . callreference ); if ( instance )  l = find_line_by_instance ( d , instance ); static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; if ( callreference )  sub = find_subchannel_by_instance_reference ( d , instance , callreference ); static struct skinny_subchannel *find_subchannel_by_instance_reference(struct skinny_device *d, int instance, int reference) struct skinny_line * l = find_line_by_instance ( d , instance ) ; static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; struct skinny_subchannel * sub ; if ( ! l )  return NULL ; if ( ! reference )  sub = AST_LIST_FIRST ( & l -> sub ); return sub ; sub = find_subchannel_by_instance_reference ( d , instance , d -> lastcallreference ); static struct skinny_subchannel *find_subchannel_by_instance_reference(struct skinny_device *d, int instance, int reference) struct skinny_line * l = find_line_by_instance ( d , instance ) ; struct skinny_subchannel * sub ; if ( ! l )  return NULL ; if ( ! reference )  sub = AST_LIST_FIRST ( & l -> sub ); return sub ; l = find_line_by_instance ( d , d -> lastlineinstance ); static struct skinny_line *find_line_by_instance(struct skinny_device *d, int instance) struct skinny_line * l ; return l ; if ( ! l )  switch ( event )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; sub = c -> tech_pvt; if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  static struct skinny_subline *find_subline_by_callid(struct skinny_device *d, int callid) struct skinny_subline * subline ; if ( subline -> callid == callid )  return subline ; return NULL ; if ( l -> dnd != 0 )  l -> dnd = 1; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( ! sub || ! sub -> owner )  c = skinny_new ( l , NULL , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; c = sub -> owner; if ( ! c )  sub = c -> tech_pvt; l -> activesub = sub; if ( d -> hookstate == SKINNY_ONHOOK )  if ( l -> transfer && sub && sub -> xferor && sub -> owner -> _state >= AST_STATE_RING )  if ( sub )  struct skinny_subline * subline ; if ( subline = find_subline_by_callid ( d , callreference ) )  static struct skinny_subline *find_subline_by_callid(struct skinny_device *d, int callid) struct skinny_subline * subline ; if ( subline -> callid == callid )  return subline ; return NULL ; d -> hookstate = SKINNY_ONHOOK; if ( sub )  struct skinny_subline * subline ; subline = find_subline_by_callid ( d , callreference ); static struct skinny_subline *find_subline_by_callid(struct skinny_device *d, int callid) struct skinny_subline * subline ; if ( subline -> callid == callid )  return subline ; return NULL ; c = skinny_new ( l , subline , AST_STATE_DOWN , NULL , SKINNY_OUTGOING ); static struct ast_channel *skinny_new(struct skinny_line *l, struct skinny_subline *subline, int state, const char *linkedid, int direction) struct ast_channel * tmp ; struct skinny_subchannel * sub ; struct skinny_device * d = l -> device ; if ( ! l -> device )  return NULL ; tmp = ast_channel_alloc ( 1 , state , l -> cid_num , l -> cid_name , l -> accountcode , l -> exten , l -> context , linkedid , l -> amaflags , "Skinny/%s@%s-%d" , l -> name , d -> name , callnums ); if ( ! tmp )  return NULL ; sub = ast_calloc ( 1 , sizeof ( * sub ) ); if ( ! sub )  return NULL ; if ( subline )  sub -> subline = NULL; tmp -> tech = & skinny_tech; tmp -> tech_pvt = sub; if ( state == AST_STATE_RING )  tmp -> rings = 1; if ( l -> amaflags )  tmp -> amaflags = l -> amaflags; tmp -> callgroup = l -> callgroup; tmp -> pickupgroup = l -> pickupgroup; if ( ! ast_strlen_zero ( l -> cid_num ) )  tmp -> caller . ani . number . valid = 1; tmp -> caller . ani . number . str = ast_strdup ( l -> cid_num ); tmp -> priority = 1; tmp -> adsicpe = AST_ADSI_UNAVAILABLE; if ( state != AST_STATE_DOWN )  if ( ast_pbx_start ( tmp ) )  tmp = NULL; return tmp ; if ( ! c )  sub = c -> tech_pvt; int extout ; char message [ 32 ] ; if ( ( sub && sub -> owner ) && ( sub -> owner -> _state == AST_STATE_UP ) )  c = sub -> owner; if ( ast_bridged_channel ( c ) )  if ( ! ast_masq_park_call ( ast_bridged_channel ( c ) , c , 0 , & extout ) )  snprintf ( message , sizeof ( message ) , "Call Parked at: %d" , extout ); transmit_displaynotify ( d , message , 10 ); static void transmit_displaynotify(struct skinny_device *d, const char *text, int t) ast_copy_string ( req -> data . displaynotify . displayMessage , text , sizeof ( req -> data . displaynotify . displayMessage ) ); req -> data . displaynotify . displayTimeout = htolel ( t ); ast_verb ( 1 , "Displaying notify '%s'\n" , text ); transmit_response ( d , req ); static void transmit_response(struct skinny_device *d, struct skinny_req *req) transmit_response_bysession ( d -> session , req ); static int transmit_response_bysession(struct skinnysession *s, struct skinny_req *req) if ( ! s )  ast_mutex_lock ( & s -> lock ); SKINNY_DEVONLY ( skinnydebug > 1 ast_verb ( 4 , "Transmitting %s to %s\n" , message2str ( req -> e ) , s -> device -> name ) ) static char *message2str(int type) switch ( letohl ( type ) )  snprintf ( tmp , MESSAGE2STR_BUFSIZE , "UNKNOWN_MESSAGE-%d" , type ); return tmp ; if ( ( letohl ( req -> len ) > SKINNY_MAX_PACKET ) || ( letohl ( req -> len ) < 0 ) )  ast_log ( LOG_WARNING , "transmit_response: the length of the request (%d) is out of bounds (%d)\n" , letohl ( req -> len ) , SKINNY_MAX_PACKET ); ast_mutex_unlock ( & s -> lock ); memset ( s -> outbuf , 0 , sizeof ( s -> outbuf ) ); memcpy ( s -> outbuf , req , skinny_header_size ); memcpy ( s -> outbuf + skinny_header_size , & req -> data , letohl ( req -> len ) ); res = write ( s -> fd , s -> outbuf , letohl ( req -> len ) + 8 ); if ( res != letohl ( req -> len ) + 8 )  ast_log ( LOG_WARNING , "Transmit: write only sent %d out of %d bytes: %s\n" , res , letohl ( req -> len ) + 8 , strerror ( errno ) ); if ( res == - 1 )  skinny_unregister ( NULL , s ); static int skinny_unregister(struct skinny_req *req, struct skinnysession *s) d = s -> device; if ( d )  d -> session = NULL; d -> registered = 0; AST_LIST_TRAVERSE ( & d -> speeddials , sd , list ) AST_LIST_TRAVERSE ( & d -> lines , l , list ) if ( l -> device == d )  manager_event ( EVENT_FLAG_SYSTEM , "PeerStatus" , "ChannelType: Skinny\r\nPeer: Skinny/%s@%s\r\nPeerStatus: Unregistered\r\n" , l -> name , d -> name ); ast_free ( req ); ast_mutex_unlock ( & s -> lock ); 