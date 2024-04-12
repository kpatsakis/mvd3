static int reap_filters() AVFilterBufferRef * picref ; int i ; int64_t frame_pts ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; OutputFile * of = output_files [ ost -> file_index ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  filtered_frame = ost -> filtered_frame; while ( 1 )  ret = av_buffersink_get_buffer_ref ( ost -> filter -> filter , & picref , 2 ); if ( ret < 0 )  frame_pts = ( ( int64_t ) 0x8000000000000000UL ); if ( picref -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  filtered_frame -> pts = frame_pts = av_rescale_q ( picref -> pts , ost -> filter -> filter -> inputs [ 0 ] -> time_base , ost -> st -> codec -> time_base ) - av_rescale_q ( of -> start_time , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) , ost -> st -> codec -> time_base ) if ( of -> start_time && filtered_frame -> pts < 0 )  switch ( ost -> filter -> filter -> inputs [ 0 ] -> type )  filtered_frame -> pts = frame_pts; if ( ! ost -> frame_aspect_ratio )  ost -> st -> codec -> sample_aspect_ratio = picref -> video -> sample_aspect_ratio; do_video_out ( of -> ctx , ost , filtered_frame ); filtered_frame -> pts = frame_pts; static void do_video_out(AVFormatContext *s,OutputStream *ost,AVFrame *in_picture) int format_video_sync ; AVCodecContext * enc = ost -> st -> codec ; int nb_frames ; int i ; double sync_ipts ; double delta ; double duration = 0 ; InputStream * ist = ( ( void * ) 0 ) ; if ( ost -> source_index >= 0 )  ist = input_streams [ ost -> source_index ]; if ( ist && ist -> st -> start_time != ( ( int64_t ) 0x8000000000000000UL ) && ist -> st -> first_dts != ( ( int64_t ) 0x8000000000000000UL ) && ost -> frame_rate . num )  duration = 1 / ( av_q2d ( ost -> frame_rate ) * av_q2d ( enc -> time_base ) ); sync_ipts = ( in_picture -> pts ); delta = sync_ipts - ( ost -> sync_opts ) + duration; nb_frames = 1; format_video_sync = video_sync_method; if ( format_video_sync == - 1 )  format_video_sync = ( s -> oformat -> flags & 0002000 ? ( ( s -> oformat -> flags & 0x80 ? 0 : 2 ) ) : 1 ); switch ( format_video_sync )  if ( delta < - 1.1 )  nb_frames = 0; if ( delta > 1.1 )  nb_frames = ( lrintf ( delta ) ); if ( delta <= - 0.6 )  nb_frames = 0; if ( delta > 0.6 )  ost -> sync_opts = lrint ( sync_ipts ); ost -> sync_opts = lrint ( sync_ipts ); nb_frames = ( ( nb_frames > ost -> max_frames - ( ost -> frame_number ) ? ost -> max_frames - ( ost -> frame_number ) : nb_frames ) ); if ( nb_frames == 0 )  if ( nb_frames > 1 )  if ( nb_frames > dts_error_threshold * 30 )  for (i = 0; i < nb_frames; i++) in_picture -> pts = ost -> sync_opts; if ( ! check_recording_time ( ost ) )  static int check_recording_time(OutputStream *ost) return 0 ; if ( s -> oformat -> flags & 0x20 && ( enc -> codec -> id ) == AV_CODEC_ID_RAWVIDEO )  enc -> coded_frame -> interlaced_frame = in_picture -> interlaced_frame; enc -> coded_frame -> top_field_first = in_picture -> top_field_first; if ( enc -> coded_frame -> interlaced_frame )  enc -> field_order = ( ( enc -> coded_frame -> top_field_first ? AV_FIELD_TB : AV_FIELD_BT ) ); enc -> field_order = AV_FIELD_PROGRESSIVE; int got_packet ; AVFrame big_picture ; double pts_time ; big_picture = * in_picture; big_picture . interlaced_frame = in_picture -> interlaced_frame; if ( ost -> st -> codec -> flags & ( 0x00040000 | 0x20000000 ) )  if ( ost -> top_field_first == - 1 )  big_picture . top_field_first = in_picture -> top_field_first; big_picture . top_field_first = ! ( ! ost -> top_field_first ); if ( big_picture . interlaced_frame )  if ( ( enc -> codec -> id ) == AV_CODEC_ID_MJPEG )  enc -> field_order = ( ( big_picture . top_field_first ? AV_FIELD_TT : AV_FIELD_BB ) ); enc -> field_order = ( ( big_picture . top_field_first ? AV_FIELD_TB : AV_FIELD_BT ) ); enc -> field_order = AV_FIELD_PROGRESSIVE; big_picture . quality = ost -> st -> codec -> global_quality; if ( ! enc -> me_threshold )  big_picture . pict_type = AV_PICTURE_TYPE_NONE; pts_time = ( big_picture . pts != ( ( int64_t ) 0x8000000000000000UL ) ? big_picture . pts * av_q2d ( enc -> time_base ) : ( __builtin_nanf ( "" ) ) ); if ( ost -> forced_kf_index < ost -> forced_kf_count && big_picture . pts >= ost -> forced_kf_pts [ ost -> forced_kf_index ] )  ost -> forced_kf_index ++; if ( ost -> forced_keyframes_pexpr )  double res ; ost -> forced_keyframes_expr_const_values [ FKF_T ] = pts_time; res = av_expr_eval ( ost -> forced_keyframes_pexpr , ( ost -> forced_keyframes_expr_const_values ) , ( ( void * ) 0 ) ); if ( res )  ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_N ] = ost -> forced_keyframes_expr_const_values [ FKF_N ]; ost -> forced_keyframes_expr_const_values [ FKF_PREV_FORCED_T ] = ost -> forced_keyframes_expr_const_values [ FKF_T ]; ost -> forced_keyframes_expr_const_values [ FKF_N_FORCED ] += 1; ost -> forced_keyframes_expr_const_values [ FKF_N ] += 1; update_benchmark ( "encode_video %d.%d" , ost -> file_index , ost -> index ); if ( got_packet )  if ( ost -> logfile && enc -> stats_out )  fprintf ( ost -> logfile , "%s" , enc -> stats_out ); ost -> sync_opts ++; ost -> frame_number ++; static void update_benchmark(const char *fmt,... ) if ( do_benchmark_all )  va_list va ; char buf [ 1024 ] ; if ( fmt )  vsnprintf ( buf , sizeof ( buf ) , fmt , va ); printf ( "bench: %8lu %s \n" , t - current_time , buf ); 