int avcodec_encode_video(AVCodecContext *avctx,uint8_t *buf,int buf_size,const AVFrame *pict) AVPacket pkt ; int ret ; if ( buf_size < 16384 )  pkt . data = buf; pkt . size = buf_size; ret = avcodec_encode_video2 ( avctx , & pkt , pict , & got_packet ); int avcodec_encode_video2(AVCodecContext *avctx,AVPacket *avpkt,const AVFrame *frame,int *got_packet_ptr) AVPacket user_pkt = * avpkt ; if ( 1 && avctx -> internal -> frame_thread_encoder && avctx -> active_thread_type & 1 )  if ( avctx -> flags & 0x0200 && avctx -> stats_out )  avctx -> stats_out [ 0 ] = '\0'; if ( ! ( avctx -> codec -> capabilities & 0x20 ) && ! frame )  if ( av_image_check_size ( ( avctx -> width ) , ( avctx -> height ) , 0 , avctx ) )  if ( avpkt -> data && avpkt -> data == avctx -> internal -> byte_buffer )  if ( user_pkt . data )  if ( user_pkt . size >= avpkt -> size )  memcpy ( user_pkt . data , ( avpkt -> data ) , ( avpkt -> size ) ); avpkt -> data = user_pkt . data; avpkt -> destruct = user_pkt . destruct; avpkt -> size = 0; if ( needs_realloc && avpkt -> data && avpkt -> destruct == av_destruct_packet )  uint8_t * new_data = ( av_realloc ( ( avpkt -> data ) , ( avpkt -> size + 16 ) ) ) ; if ( new_data )  avpkt -> data = new_data; av_free_packet ( avpkt ); 