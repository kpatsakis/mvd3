int ff_request_frame(AVFilterLink *link) if ( link -> closed )  if ( link -> srcpad -> request_frame )  if ( link -> src -> inputs [ 0 ] )  ret = ff_request_frame ( link -> src -> inputs [ 0 ] ); int ff_request_frame(AVFilterLink *link) int ret = - 1 ; if ( link -> closed )  if ( link -> srcpad -> request_frame )  ret = ( ( link -> srcpad -> request_frame ) ( link ) ); if ( link -> src -> inputs [ 0 ] )  ret = ff_request_frame ( link -> src -> inputs [ 0 ] ); if ( ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) && link -> partial_buf )  AVFilterBufferRef * pbuf = link -> partial_buf ; link -> partial_buf = ( ( void * ) 0 ); ff_filter_frame_framed ( link , pbuf ); static int ff_filter_frame_framed(AVFilterLink *link,AVFilterBufferRef *frame) AVFilterPad * dst = link -> dstpad ; AVFilterBufferRef * out ; int perms ; AVFilterCommand * cmd = link -> dst -> command_queue ; if ( link -> closed )  frame -> perms &= ~src -> rej_perms; perms = frame -> perms; if ( frame -> linesize [ 0 ] < 0 )  perms |= 0x20; if ( ( dst -> min_perms & perms ) != dst -> min_perms || dst -> rej_perms & perms )  switch ( link -> type )  out = ff_get_video_buffer ( link , dst -> min_perms , link -> w , link -> h ); out = ff_get_audio_buffer ( link , dst -> min_perms , frame -> audio -> nb_samples ); if ( ! out )  switch ( link -> type )  out = frame; while ( cmd && cmd -> time <= ( out -> pts ) * av_q2d ( link -> time_base ) )  avfilter_process_command ( link -> dst , ( cmd -> command ) , ( cmd -> arg ) , 0 , 0 , cmd -> flags ); cmd = link -> dst -> command_queue; int avfilter_process_command(AVFilterContext *filter,const char *cmd,const char *arg,char *res,int res_len,int flags) if ( ! strcmp ( cmd , "ping" ) )  