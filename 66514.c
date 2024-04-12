int ff_codec_open2_recursive(AVCodecContext *avctx,const AVCodec *codec,AVDictionary **options) ret = avcodec_open2 ( avctx , codec , options ); int avcodec_open2(AVCodecContext *avctx,const AVCodec *codec,AVDictionary **options) if ( avcodec_is_open ( avctx ) )  int avcodec_is_open(AVCodecContext *s) return ! ( ! s -> internal ) ; if ( ! codec && ! avctx -> codec )  if ( codec && avctx -> codec && codec != avctx -> codec )  if ( ! codec )  codec = avctx -> codec; if ( avctx -> extradata_size < 0 || avctx -> extradata_size >= ( 1 << 28 ) - 16 )  ret = ff_lock_avcodec ( avctx ); int ff_lock_avcodec(AVCodecContext *log_ctx) if ( ff_lockmgr_cb )  if ( ( * ff_lockmgr_cb ) ( & codec_mutex , AV_LOCK_OBTAIN ) )  return - 1 ; entangled_thread_counter ++; if ( entangled_thread_counter != 1 )  return - 22 ; return 0 ; if ( ret < 0 )  avctx -> internal = ( av_mallocz ( sizeof ( AVCodecInternal ) ) ); if ( ! avctx -> internal )  if ( codec -> priv_data_size > 0 )  if ( ! avctx -> priv_data )  avctx -> priv_data = av_mallocz ( ( codec -> priv_data_size ) ); if ( ! avctx -> priv_data )  if ( codec -> priv_class )  * ( ( const AVClass * * ) ( avctx -> priv_data ) ) = codec -> priv_class; if ( codec -> priv_class && ( ret = av_opt_set_dict ( avctx -> priv_data , & tmp ) ) < 0 )  avctx -> priv_data = ( ( void * ) 0 ); if ( ( ret = av_opt_set_dict ( avctx , & tmp ) ) < 0 )  if ( ( avctx -> channels ) > 128U )  avctx -> codec = codec; if ( ( ( avctx -> codec_type ) == AVMEDIA_TYPE_UNKNOWN || ( avctx -> codec_type ) == ( codec -> type ) ) && ( avctx -> codec_id ) == AV_CODEC_ID_NONE )  avctx -> codec_type = codec -> type; avctx -> codec_id = codec -> id; if ( ( avctx -> codec_id ) != ( codec -> id ) || ( avctx -> codec_type ) != ( codec -> type ) && ( avctx -> codec_type ) != AVMEDIA_TYPE_ATTACHMENT )  avctx -> frame_number = 0; avctx -> codec_descriptor = avcodec_descriptor_get ( avctx -> codec_id ); if ( avctx -> codec -> capabilities & 0x0200 && avctx -> strict_std_compliance > - 2 )  if ( ( avctx -> codec_type ) == AVMEDIA_TYPE_AUDIO && ( ! avctx -> time_base . num || ! avctx -> time_base . den ) )  avctx -> time_base . num = 1; avctx -> time_base . den = avctx -> sample_rate; if ( 1 )  ret = ff_frame_thread_encoder_init ( avctx , ( options ? * options : ( ( void * ) 0 ) ) ); if ( ret < 0 )  if ( 1 && ! avctx -> thread_opaque && ! ( avctx -> internal -> frame_thread_encoder && avctx -> active_thread_type & 1 ) )  ret = ff_thread_init ( avctx ); if ( ret < 0 )  if ( ! 1 && ! ( codec -> capabilities & 0x8000 ) )  avctx -> thread_count = 1; if ( ( avctx -> codec -> max_lowres ) < avctx -> lowres || avctx -> lowres < 0 )  if ( av_codec_is_encoder ( avctx -> codec ) )  int av_codec_is_encoder(const AVCodec *codec) return codec && ( codec -> encode_sub || codec -> encode2 ) ; int i ; if ( avctx -> codec -> sample_fmts )  for (i = 0; avctx -> codec -> sample_fmts[i] != AV_SAMPLE_FMT_NONE; i++) if ( ( avctx -> sample_fmt ) == avctx -> codec -> sample_fmts [ i ] )  if ( avctx -> channels == 1 && ( av_get_planar_sample_fmt ( avctx -> sample_fmt ) ) == ( av_get_planar_sample_fmt ( avctx -> codec -> sample_fmts [ i ] ) ) )  avctx -> sample_fmt = avctx -> codec -> sample_fmts [ i ]; if ( avctx -> codec -> sample_fmts [ i ] == AV_SAMPLE_FMT_NONE )  if ( avctx -> codec -> pix_fmts )  for (i = 0; avctx -> codec -> pix_fmts[i] != AV_PIX_FMT_NONE; i++) if ( ( avctx -> pix_fmt ) == avctx -> codec -> pix_fmts [ i ] )  if ( avctx -> codec -> pix_fmts [ i ] == AV_PIX_FMT_NONE && ! ( ( ( avctx -> codec_id ) == AV_CODEC_ID_MJPEG || ( avctx -> codec_id ) == AV_CODEC_ID_LJPEG ) && avctx -> strict_std_compliance <= - 1 ) )  char buf [ 128 ] ; snprintf ( buf , sizeof ( buf ) , "%d" , avctx -> pix_fmt ); av_log ( avctx , 16 , "Specified pixel format %s is invalid or not supported\n" , ( ( char * ) ( av_x_if_null ( ( av_get_pix_fmt_name ( avctx -> pix_fmt ) ) , buf ) ) ) ); 