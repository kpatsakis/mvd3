static int transcode() int ret ; int i ; InputStream * ist ; ret = transcode_init ( ); static int transcode_init() int ret = 0 ; int i ; int j ; AVFormatContext * oc ; AVCodecContext * codec ; OutputStream * ost ; InputStream * ist ; char error [ 1024 ] ; for (i = 0; i < nb_input_files; i++) InputFile * ifile = input_files [ i ] ; if ( ifile -> rate_emu )  for (j = 0; j < ifile -> nb_streams; j++) input_streams [ j + ifile -> ist_index ] -> start = av_gettime ( ); for (i = 0; i < nb_output_files; i++) oc = output_files [ i ] -> ctx; if ( ! oc -> nb_streams && ! ( oc -> oformat -> flags & 0x1000 ) )  return - 22 ; for (i = 0; i < nb_filtergraphs; i++) if ( ( ret = avfilter_graph_config ( filtergraphs [ i ] -> graph , ( ( void * ) 0 ) ) ) < 0 )  return ret ; for (i = 0; i < nb_output_streams; i++) AVCodecContext * icodec = ( ( void * ) 0 ) ; ost = output_streams [ i ]; oc = output_files [ ost -> file_index ] -> ctx; ist = get_input_stream ( ost ); static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; return ( ( void * ) 0 ) ; if ( ost -> attachment_filename )  codec = ost -> st -> codec; if ( ist )  icodec = ist -> st -> codec; ost -> st -> disposition = ist -> st -> disposition; codec -> bits_per_raw_sample = icodec -> bits_per_raw_sample; codec -> chroma_sample_location = icodec -> chroma_sample_location; if ( ost -> stream_copy )  uint64_t extra_size ; extra_size = ( ( uint64_t ) ( icodec -> extradata_size ) ) + 16; if ( extra_size > 2147483647 )  return - 22 ; codec -> codec_id = icodec -> codec_id; codec -> codec_type = icodec -> codec_type; if ( ! codec -> codec_tag )  unsigned int codec_tag ; if ( ! oc -> oformat -> codec_tag || ( av_codec_get_id ( oc -> oformat -> codec_tag , icodec -> codec_tag ) ) == ( codec -> codec_id ) || ! av_codec_get_tag2 ( oc -> oformat -> codec_tag , icodec -> codec_id , & codec_tag ) )  codec -> codec_tag = icodec -> codec_tag; codec -> bit_rate = icodec -> bit_rate; codec -> rc_max_rate = icodec -> rc_max_rate; codec -> rc_buffer_size = icodec -> rc_buffer_size; codec -> field_order = icodec -> field_order; codec -> extradata = ( av_mallocz ( extra_size ) ); if ( ! codec -> extradata )  return - 12 ; memcpy ( ( codec -> extradata ) , ( icodec -> extradata ) , ( icodec -> extradata_size ) ); codec -> extradata_size = icodec -> extradata_size; codec -> bits_per_coded_sample = icodec -> bits_per_coded_sample; codec -> time_base = ist -> st -> time_base; if ( ! strcmp ( oc -> oformat -> name , "avi" ) )  if ( copy_tb < 0 && av_q2d ( ist -> st -> r_frame_rate ) >= av_q2d ( ist -> st -> avg_frame_rate ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( ist -> st -> time_base ) && 0.5 / av_q2d ( ist -> st -> r_frame_rate ) > av_q2d ( icodec -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 && av_q2d ( icodec -> time_base ) < 1.0 / 500 || copy_tb == 2 )  codec -> time_base . num = ist -> st -> r_frame_rate . den; codec -> time_base . den = 2 * ist -> st -> r_frame_rate . num; codec -> ticks_per_frame = 2; if ( copy_tb < 0 && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > 2 * av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; codec -> time_base . den *= 2; codec -> ticks_per_frame = 2; if ( ! ( oc -> oformat -> flags & 0002000 ) && strcmp ( oc -> oformat -> name , "mov" ) && strcmp ( oc -> oformat -> name , "mp4" ) && strcmp ( oc -> oformat -> name , "3gp" ) && strcmp ( oc -> oformat -> name , "3g2" ) && strcmp ( oc -> oformat -> name , "psp" ) && strcmp ( oc -> oformat -> name , "ipod" ) && strcmp ( oc -> oformat -> name , "f4v" ) )  if ( copy_tb < 0 && icodec -> time_base . den && av_q2d ( icodec -> time_base ) * ( icodec -> ticks_per_frame ) > av_q2d ( ist -> st -> time_base ) && av_q2d ( ist -> st -> time_base ) < 1.0 / 500 || copy_tb == 0 )  codec -> time_base = icodec -> time_base; codec -> time_base . num *= icodec -> ticks_per_frame; codec -> time_base = icodec -> time_base; if ( ost -> frame_rate . num )  codec -> time_base = av_inv_q ( ost -> frame_rate ); switch ( codec -> codec_type )  codec -> channel_layout = icodec -> channel_layout; codec -> sample_rate = icodec -> sample_rate; codec -> channels = icodec -> channels; codec -> frame_size = icodec -> frame_size; codec -> audio_service_type = icodec -> audio_service_type; codec -> block_align = icodec -> block_align; if ( ( codec -> block_align == 1 || codec -> block_align == 1152 || codec -> block_align == 576 ) && ( codec -> codec_id ) == AV_CODEC_ID_MP3 )  codec -> block_align = 0; if ( ( codec -> codec_id ) == AV_CODEC_ID_AC3 )  codec -> block_align = 0; codec -> pix_fmt = icodec -> pix_fmt; codec -> width = icodec -> width; codec -> height = icodec -> height; codec -> has_b_frames = icodec -> has_b_frames; ost -> st -> avg_frame_rate = ist -> st -> avg_frame_rate; codec -> width = icodec -> width; codec -> height = icodec -> height; if ( ! ost -> enc )  ost -> enc = avcodec_find_encoder ( codec -> codec_id ); if ( ! ost -> enc )  ret = - 22; if ( ist )  ist -> decoding_needed ++; ost -> encoding_needed = 1; if ( ( codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  if ( ost -> filter && ! ost -> frame_rate . num )  ost -> frame_rate = av_buffersink_get_frame_rate ( ost -> filter -> filter ); if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ist -> framerate; if ( ist && ! ost -> frame_rate . num )  ost -> frame_rate = ( ist -> st -> r_frame_rate . num ? ist -> st -> r_frame_rate : ( ( AVRational ) ( 25 ) , ( 1 ) ) ) if ( ost -> enc && ost -> enc -> supported_framerates && ! ost -> force_fps )  int idx = av_find_nearest_q_idx ( ost -> frame_rate , ost -> enc -> supported_framerates ) ; ost -> frame_rate = ost -> enc -> supported_framerates [ idx ]; switch ( codec -> codec_type )  codec -> sample_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); codec -> sample_rate = ost -> filter -> filter -> inputs [ 0 ] -> sample_rate; codec -> channel_layout = ost -> filter -> filter -> inputs [ 0 ] -> channel_layout; codec -> channels = avfilter_link_get_channels ( ost -> filter -> filter -> inputs [ 0 ] ); codec -> time_base = ( ( AVRational ) ( 1 ) , codec -> sample_rate ) codec -> time_base = av_inv_q ( ost -> frame_rate ); if ( ost -> filter && ! ( codec -> time_base . num && codec -> time_base . den ) )  codec -> time_base = ost -> filter -> filter -> inputs [ 0 ] -> time_base; codec -> width = ost -> filter -> filter -> inputs [ 0 ] -> w; codec -> height = ost -> filter -> filter -> inputs [ 0 ] -> h; codec -> sample_aspect_ratio = ost -> st -> sample_aspect_ratio = ( ost -> frame_aspect_ratio ? av_d2q ( ( ost -> frame_aspect_ratio * ( codec -> height ) / ( codec -> width ) ) , 255 ) : ost -> filter -> filter -> inputs [ 0 ] -> sample_aspect_ratio ); codec -> pix_fmt = ( ost -> filter -> filter -> inputs [ 0 ] -> format ); if ( ! icodec || codec -> width != icodec -> width || codec -> height != icodec -> height || ( codec -> pix_fmt ) != ( icodec -> pix_fmt ) )  codec -> bits_per_raw_sample = frame_bits_per_raw_sample; if ( ost -> forced_keyframes )  if ( ! strncmp ( ( ost -> forced_keyframes ) , "expr:" , 5 ) )  ret = av_expr_parse ( & ost -> forced_keyframes_pexpr , ( ost -> forced_keyframes + 5 ) , forced_keyframes_const_names , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , ( ( void * ) 0 ) , 0 , ( ( void * ) 0 ) ); if ( ret < 0 )  return ret ; ost -> forced_keyframes_expr_const_values [ FKF_N ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_N_FORCED ] = 0; ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_N ] = ( __builtin_nanf ( "" ) ); ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_T ] = ( __builtin_nanf ( "" ) ); codec -> time_base = ( ( AVRational ) ( 1 ) , ( 1000 ) ) if ( ! codec -> width )  codec -> width = input_streams [ ost -> source_index ] -> st -> codec -> width; codec -> height = input_streams [ ost -> source_index ] -> st -> codec -> height; if ( codec -> flags & ( 0x0200 | 0002000 ) )  char logfilename [ 1024 ] ; FILE * f ; snprintf ( logfilename , sizeof ( logfilename ) , "%s-%d.log" , ( ost -> logfile_prefix ? ost -> logfile_prefix : "ffmpeg2pass" ) , i ); if ( ! strcmp ( ost -> enc -> name , "libx264" ) )  if ( codec -> flags & 0002000 )  char * logbuffer ; codec -> stats_in = logbuffer; if ( codec -> flags & 0x0200 )  f = fopen ( logfilename , "wb" ); ost -> logfile = f; for (i = 0; i < nb_output_streams; i++) ost = output_streams [ i ]; if ( ost -> encoding_needed )  AVCodec * codec = ost -> enc ; AVCodecContext * dec = ( ( void * ) 0 ) ; if ( ist = get_input_stream ( ost ) )  static InputStream *get_input_stream(OutputStream *ost) if ( ost -> source_index >= 0 )  return input_streams [ ost -> source_index ] ; return ( ( void * ) 0 ) ; dec = ist -> st -> codec; if ( dec && dec -> subtitle_header )  ost -> st -> codec -> subtitle_header = ( av_mallocz ( ( dec -> subtitle_header_size + 1 ) ) ); if ( ! ost -> st -> codec -> subtitle_header )  ret = - 12; memcpy ( ( ost -> st -> codec -> subtitle_header ) , ( dec -> subtitle_header ) , ( dec -> subtitle_header_size ) ); ost -> st -> codec -> subtitle_header_size = dec -> subtitle_header_size; if ( ( ret = avcodec_open2 ( ost -> st -> codec , codec , & ost -> opts ) ) < 0 )  for (i = 0; i < nb_input_streams; i++) if ( ( ret = init_input_stream ( i , error , ( sizeof ( error ) ) ) ) < 0 )  static int init_input_stream(int ist_index,char *error,int error_len) int ret ; InputStream * ist = input_streams [ ist_index ] ; if ( ist -> decoding_needed )  AVCodec * codec = ist -> dec ; if ( ! codec )  return - 22 ; ist -> dr1 = codec -> capabilities & 0000002 && ! ( '6' < 56 && do_deinterlace ); if ( ( codec -> type ) == AVMEDIA_TYPE_VIDEO && ist -> dr1 )  ist -> st -> codec -> get_buffer = codec_get_buffer; ist -> st -> codec -> release_buffer = codec_release_buffer; ist -> st -> codec -> opaque = ( & ist -> buffer_pool ); if ( ( ret = avcodec_open2 ( ist -> st -> codec , codec , & ist -> opts ) ) < 0 )  return ret ; return 0 ; for (i = 0; i < nb_input_files; i++) for (i = 0; i < nb_output_files; i++) oc = output_files [ i ] -> ctx; oc -> interrupt_callback = int_cb; if ( ( ret = avformat_write_header ( oc , & output_files [ i ] -> opts ) ) < 0 )  ret = - 22; if ( ret )  return ret ; return 0 ; if ( ret < 0 )  if ( ( ret = init_input_threads ( ) ) < 0 )  static int init_input_threads() int i ; int ret ; if ( nb_input_files == 1 )  return 0 ; for (i = 0; i < nb_input_files; i++) InputFile * f = input_files [ i ] ; if ( ! ( f -> fifo = av_fifo_alloc ( ( 8 * sizeof ( AVPacket ) ) ) ) )  return - 12 ; if ( ret = pthread_create ( & f -> thread , ( ( void * ) 0 ) , input_thread , f ) )  return - ret ; return 0 ; for (i = 0; i < nb_input_streams; i++) ist = input_streams [ i ]; if ( ! input_files [ ist -> file_index ] -> eof_reached && ist -> decoding_needed )  output_packet ( ist , ( ( void * ) 0 ) ); static int output_packet(InputStream *ist,const AVPacket *pkt) int i ; int got_output ; AVPacket avpkt ; if ( ! ist -> saw_first_ts )  ist -> dts = ( ( ist -> st -> avg_frame_rate . num ? ( - ist -> st -> codec -> has_b_frames * 1000000 ) / av_q2d ( ist -> st -> avg_frame_rate ) : 0 ) ); ist -> pts = 0; if ( pkt != ( ( void * ) 0 ) && pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) && ! ist -> decoding_needed )  ist -> pts = ist -> dts; ist -> saw_first_ts = 1; if ( ist -> next_dts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts; if ( ist -> next_pts == ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_pts = ist -> pts; if ( pkt == ( ( void * ) 0 ) )  avpkt . data = ( ( void * ) 0 ); avpkt . size = 0; avpkt = * pkt; if ( pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  ist -> next_dts = ist -> dts = av_rescale_q ( pkt -> dts , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_VIDEO || ! ist -> decoding_needed )  ist -> next_pts = ist -> pts = ist -> dts; while ( ist -> decoding_needed && ( avpkt . size > 0 || ! pkt && got_output ) )  int duration ; ist -> pts = ist -> next_pts; ist -> dts = ist -> next_dts; if ( avpkt . size && avpkt . size != pkt -> size )  ist -> showed_multi_packet_warning = 1; switch ( ist -> st -> codec -> codec_type )  ret = decode_audio ( ist , & avpkt , & got_output ); ret = decode_video ( ist , & avpkt , & got_output ); if ( avpkt . duration )  duration = ( av_rescale_q ( avpkt . duration , ist -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) ) if ( ist -> st -> codec -> time_base . num != 0 && ist -> st -> codec -> time_base . den != 0 )  int ticks = ist -> st -> parser ? ist -> st -> parser -> repeat_pict + 1 : ist -> st -> codec -> ticks_per_frame ; duration = ( ( ( int64_t ) 1000000 ) * ist -> st -> codec -> time_base . num * ticks / ist -> st -> codec -> time_base . den ); duration = 0; if ( ist -> dts != ( ( int64_t ) 0x8000000000000000UL ) && duration )  ist -> next_dts += duration; ist -> next_dts = ( ( int64_t ) 0x8000000000000000UL ); if ( got_output )  ist -> next_pts += duration; ret = transcode_subtitles ( ist , & avpkt , & got_output ); if ( ret < 0 )  avpkt . dts = avpkt . pts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt )  if ( ( ist -> st -> codec -> codec_type ) != AVMEDIA_TYPE_AUDIO )  ret = avpkt . size; avpkt . data += ret; avpkt . size -= ret; if ( ! ist -> decoding_needed )  ist -> dts = ist -> next_dts; switch ( ist -> st -> codec -> codec_type )  ist -> next_dts += ( ( int64_t ) 1000000 ) * ( ist -> st -> codec -> frame_size ) / ( ist -> st -> codec -> sample_rate ); if ( pkt -> duration )  if ( ist -> st -> codec -> time_base . num != 0 )  int ticks = ist -> st -> parser ? ist -> st -> parser -> repeat_pict + 1 : ist -> st -> codec -> ticks_per_frame ; ist -> next_dts += ( ( int64_t ) 1000000 ) * ist -> st -> codec -> time_base . num * ticks / ist -> st -> codec -> time_base . den; ist -> pts = ist -> dts; ist -> next_pts = ist -> next_dts; for (i = 0; pkt && i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; if ( ! check_output_constraints ( ist , ost ) || ost -> encoding_needed )  do_streamcopy ( ist , ost , pkt ); static void do_streamcopy(InputStream *ist,OutputStream *ost,const AVPacket *pkt) OutputFile * of = output_files [ ost -> file_index ] ; int64_t ost_tb_start_time = av_rescale_q ( of -> start_time , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> time_base ) AVPacket opkt ; if ( ! ost -> frame_number && ! ( pkt -> flags & 0000001 ) && ! ost -> copy_initial_nonkeyframes )  if ( ! ost -> frame_number && ist -> pts < of -> start_time && ! ost -> copy_prior_start )  if ( of -> recording_time != 9223372036854775807L && ist -> pts >= of -> recording_time + of -> start_time )  if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO )  if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO )  ost -> sync_opts ++; if ( pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  opkt . pts = av_rescale_q ( pkt -> pts , ist -> st -> time_base , ost -> st -> time_base ) - ost_tb_start_time; opkt . pts = ( ( int64_t ) 0x8000000000000000UL ); if ( pkt -> dts == ( ( int64_t ) 0x8000000000000000UL ) )  opkt . dts = av_rescale_q ( ist -> dts , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> time_base ) opkt . dts = av_rescale_q ( pkt -> dts , ist -> st -> time_base , ost -> st -> time_base ); opkt . dts -= ost_tb_start_time; if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  opkt . dts = opkt . pts = av_rescale_delta ( ist -> st -> time_base , pkt -> dts , ( ( AVRational ) ( 1 ) , ist -> st -> codec -> sample_rate ) , duration , & ist -> filter_in_rescale_delta_last , ost -> st -> time_base ) - ost_tb_start_time opkt . duration = ( av_rescale_q ( ( pkt -> duration ) , ist -> st -> time_base , ost -> st -> time_base ) ); opkt . flags = pkt -> flags; if ( ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_H264 && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_MPEG1VIDEO && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_MPEG2VIDEO && ( ost -> st -> codec -> codec_id ) != AV_CODEC_ID_VC1 )  if ( av_parser_change ( ist -> st -> parser , ost -> st -> codec , & opkt . data , & opkt . size , ( pkt -> data ) , pkt -> size , pkt -> flags & 0000001 ) )  opkt . destruct = av_destruct_packet; opkt . data = pkt -> data; opkt . size = pkt -> size; if ( ( ost -> st -> codec -> codec_type ) == AVMEDIA_TYPE_VIDEO && of -> ctx -> oformat -> flags & 0x20 )  opkt . data = ( ( uint8_t * ) ( & pict ) ); opkt . size = ( sizeof ( AVPicture ) ); opkt . flags |= 0000001; write_frame ( of -> ctx , & opkt , ost ); static void write_frame(AVFormatContext *s,AVPacket *pkt,OutputStream *ost) AVBitStreamFilterContext * bsfc = ost -> bitstream_filters ; AVCodecContext * avctx = ost -> st -> codec ; if ( ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO && video_sync_method == 0xFF || ( avctx -> codec_type ) == AVMEDIA_TYPE_AUDIO && audio_sync_method < 0 )  pkt -> pts = pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); if ( ( ( avctx -> codec_type ) == AVMEDIA_TYPE_AUDIO || ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO ) && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  int64_t max = ost -> st -> cur_dts + ( ! ( s -> oformat -> flags & 0x8020000 ) ) ; if ( ost -> st -> cur_dts && ost -> st -> cur_dts != ( ( int64_t ) 0x8000000000000000UL ) && max > pkt -> dts )  if ( pkt -> pts >= pkt -> dts )  pkt -> pts = ( pkt -> pts > max ? pkt -> pts : max ); pkt -> dts = max; if ( ! ( ( avctx -> codec_type ) == AVMEDIA_TYPE_VIDEO && avctx -> codec ) )  if ( ( ost -> frame_number ) >= ost -> max_frames )  while ( bsfc )  AVPacket new_pkt = * pkt ; int a = av_bitstream_filter_filter ( bsfc , avctx , ( ( void * ) 0 ) , & new_pkt . data , & new_pkt . size , ( pkt -> data ) , pkt -> size , pkt -> flags & 0000001 ) ; if ( a == 0 && new_pkt . data != pkt -> data && new_pkt . destruct )  uint8_t * t = ( av_malloc ( ( new_pkt . size + 16 ) ) ) ; if ( t )  memcpy ( t , new_pkt . data , new_pkt . size ); memset ( ( t + new_pkt . size ) , 0 , 16 ); new_pkt . data = t; a = 1; a = - 12; if ( a > 0 )  new_pkt . destruct = av_destruct_packet; if ( a < 0 )  av_log ( ( ( void * ) 0 ) , 16 , "Failed to open bitstream filter %s for stream %d with codec %s" , bsfc -> filter -> name , pkt -> stream_index , ( avctx -> codec ? avctx -> codec -> name : "copy" ) ); print_error ( "" , a ); * pkt = new_pkt; bsfc = bsfc -> next; pkt -> stream_index = ost -> index; av_log ( ( ( void * ) 0 ) , 32 , "muxer <- type:%s pkt_pts:%s pkt_pts_time:%s pkt_dts:%s pkt_dts_time:%s size:%d\n" , av_get_media_type_string ( ost -> st -> codec -> codec_type ) , av_ts_make_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> pts ) , av_ts_make_time_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> pts , & ost -> st -> time_base ) , av_ts_make_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> dts ) , av_ts_make_time_string ( ( ( char [ 32 ] ) ( 0 ) ) , pkt -> dts , & ost -> st -> time_base ) , pkt -> size ) ret = av_interleaved_write_frame ( s , pkt ); if ( ret < 0 )  print_error ( "av_interleaved_write_frame()" , ret ); 