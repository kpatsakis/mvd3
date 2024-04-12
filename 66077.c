int ff_mjpeg_decode_frame(AVCodecContext *avctx, void *data, int AVPacket *avpkt) AVFrame * frame = data ; const uint8_t * buf = avpkt -> data ; int buf_size = avpkt -> size ; MJpegDecodeContext * s = avctx -> priv_data ; const uint8_t * buf_end , * buf_ptr ; const uint8_t * unescaped_buf_ptr ; int unescaped_buf_size ; int start_code ; s -> adobe_transform = - 1; buf_ptr = buf; buf_end = buf + buf_size; while ( buf_ptr < buf_end )  start_code = ff_mjpeg_find_marker ( s , & buf_ptr , buf_end , & unescaped_buf_ptr , & unescaped_buf_size ); if ( start_code < 0 )  if ( unescaped_buf_size > INT_MAX / 8 )  ret = init_get_bits8 ( & s -> gb , unescaped_buf_ptr , unescaped_buf_size ); if ( ret < 0 )  s -> start_code = start_code; if ( ! CONFIG_JPEGLS_DECODER && ( start_code == SOF48 || start_code == LSE ) )  switch ( start_code )  s -> restart_interval = 0; s -> restart_count = 0; if ( ( ret = ff_mjpeg_decode_dht ( s ) ) < 0 )  s -> lossless = 0; s -> ls = 0; s -> progressive = 0; if ( ( ret = ff_mjpeg_decode_sof ( s ) ) < 0 )  s -> lossless = 0; s -> ls = 0; s -> progressive = 1; if ( ( ret = ff_mjpeg_decode_sof ( s ) ) < 0 )  s -> lossless = 1; s -> ls = 0; s -> progressive = 0; if ( ( ret = ff_mjpeg_decode_sof ( s ) ) < 0 )  s -> lossless = 1; s -> ls = 1; s -> progressive = 0; if ( ( ret = ff_mjpeg_decode_sof ( s ) ) < 0 )  if ( ! CONFIG_JPEGLS_DECODER || ( ret = ff_jpegls_decode_lse ( s ) ) < 0 )  s -> cur_scan = 0; if ( ! s -> got_picture )  if ( s -> interlaced )  s -> bottom_field ^= 1; if ( s -> bottom_field == ! s -> interlace_polarity )  if ( ( ret = av_frame_ref ( frame , s -> picture_ptr ) ) < 0 )  s -> got_picture = 0; s -> cur_scan ++; if ( ( ret = ff_mjpeg_decode_sos ( s , NULL , 0 , NULL ) ) < 0 && ( avctx -> err_recognition & AV_EF_EXPLODE ) )  buf_ptr += ( get_bits_count ( & s -> gb ) + 7 ) / 8; if ( s -> got_picture && s -> cur_scan )  int ff_mjpeg_decode_sof(MJpegDecodeContext *s) int len , nb_components , i , width , height , bits , ret ; int h_count [ MAX_COMPONENTS ] ; int v_count [ MAX_COMPONENTS ] ; s -> cur_scan = 0; s -> upscale_h = s -> upscale_v = 0; s -> avctx -> bits_per_raw_sample = bits = get_bits ( & s -> gb , 8 ); if ( bits > 16 || bits < 1 )  if ( s -> pegasus_rct )  bits = 9; if ( bits == 9 && ! s -> pegasus_rct )  s -> rct = 1; if ( s -> lossless && s -> avctx -> lowres )  height = get_bits ( & s -> gb , 16 ); width = get_bits ( & s -> gb , 16 ); if ( s -> interlaced && s -> width == width && s -> height == height + 1 )  height = s -> height; if ( av_image_check_size ( width , height , 0 , s -> avctx ) )  nb_components = get_bits ( & s -> gb , 8 ); if ( nb_components <= 0 || nb_components > MAX_COMPONENTS )  if ( s -> interlaced && ( s -> bottom_field == ! s -> interlace_polarity ) )  if ( nb_components != s -> nb_components )  if ( s -> ls && ! ( bits <= 8 || nb_components == 1 ) )  s -> nb_components = nb_components; s -> h_max = 1; s -> v_max = 1; memset ( h_count , 0 , sizeof ( h_count ) ); memset ( v_count , 0 , sizeof ( v_count ) ); for (i = 0; i < nb_components; i++) s -> component_id [ i ] = get_bits ( & s -> gb , 8 ) - 1; h_count [ i ] = get_bits ( & s -> gb , 4 ); v_count [ i ] = get_bits ( & s -> gb , 4 ); if ( h_count [ i ] > s -> h_max )  s -> h_max = h_count [ i ]; if ( v_count [ i ] > s -> v_max )  s -> v_max = v_count [ i ]; s -> quant_index [ i ] = get_bits ( & s -> gb , 8 ); if ( s -> quant_index [ i ] >= 4 )  if ( ! h_count [ i ] || ! v_count [ i ] )  if ( s -> ls && ( s -> h_max > 1 || s -> v_max > 1 ) )  if ( width != s -> width || height != s -> height || bits != s -> bits || memcmp ( s -> h_count , h_count , sizeof ( h_count ) ) || memcmp ( s -> v_count , v_count , sizeof ( v_count ) ) )  