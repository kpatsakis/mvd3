static int encode_png(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + 12 * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  ret = encode_headers ( avctx , pict ); static int encode_headers(AVCodecContext *avctx, const AVFrame *pict) return 0 ; if ( ret < 0 )  ret = encode_frame ( avctx , pict ); static int encode_frame(AVCodecContext *avctx, const AVFrame *pict) PNGEncContext * s = avctx -> priv_data ; const AVFrame * const p = pict int y , len , ret ; int row_size , pass_row_size ; uint8_t * ptr , * top , * crow_buf , * crow ; uint8_t * progressive_buf = NULL ; row_size = ( pict -> width * s -> bits_per_pixel + 7 ) >> 3; crow_base = av_malloc ( ( row_size + 32 ) << ( s -> filter_type == PNG_FILTER_VALUE_MIXED ) ); if ( ! crow_base )  if ( s -> is_progressive )  progressive_buf = av_malloc ( row_size + 1 ); top_buf = av_malloc ( row_size + 1 ); if ( ! progressive_buf || ! top_buf )  s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( s -> is_progressive )  int pass ; for (pass = 0; pass < NB_PASSES; pass++) pass_row_size = ff_png_pass_row_size ( pass , s -> bits_per_pixel , pict -> width ); if ( pass_row_size > 0 )  for (y = 0; y < pict->height; y++) if ( ( ff_png_pass_ymask [ pass ] << ( y & 7 ) ) & 0x80 )  ptr = p -> data [ 0 ] + y * p -> linesize [ 0 ]; png_get_interlaced_row ( progressive_buf , pass_row_size , s -> bits_per_pixel , pass , ptr , pict -> width ); static void png_get_interlaced_row(uint8_t *dst, int int bits_per_pixel, int const uint8_t *src, int width) switch ( bits_per_pixel )  memset ( dst , 0 , row_size ); dst [ dst_x >> 3 ] |= b << ( 7 - ( dst_x & 7 ) ); dst_x ++; d = dst; memcpy ( d , s , bpp ); d += bpp; 