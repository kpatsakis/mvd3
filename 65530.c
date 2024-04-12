static struct lutmABType *read_tag_lutmABType(struct mem_source *src, struct tag_index index, uint32_t tag_id) struct tag * tag = find_tag ( index , tag_id ) ; uint32_t offset = tag -> offset ; uint32_t a_curve_offset , b_curve_offset , m_curve_offset ; uint32_t matrix_offset ; uint32_t clut_offset ; uint32_t clut_size = 1 ; uint32_t type = read_u32 ( src , offset ) ; uint8_t num_in_channels , num_out_channels ; struct lutmABType * lut ; uint32_t i ; if ( type != LUT_MAB_TYPE && type != LUT_MBA_TYPE )  num_in_channels = read_u8 ( src , offset + 8 ); num_out_channels = read_u8 ( src , offset + 8 ); if ( num_in_channels > MAX_CHANNELS || num_out_channels > MAX_CHANNELS )  if ( num_in_channels != 3 || num_out_channels != 3 )  clut_offset = read_u32 ( src , offset + 24 ); m_curve_offset = read_u32 ( src , offset + 20 ); matrix_offset = read_u32 ( src , offset + 16 ); if ( clut_offset )  clut_offset += offset; if ( m_curve_offset )  m_curve_offset += offset; if ( matrix_offset )  matrix_offset += offset; if ( clut_offset )  for (i = 0; i < num_in_channels; i++) clut_size *= read_u8 ( src , clut_offset + i ); clut_size = 0; clut_size = clut_size * num_out_channels; if ( clut_size > MAX_CLUT_SIZE )  lut = malloc ( sizeof ( struct lutmABType ) + ( clut_size ) * sizeof ( float ) ); if ( ! lut )  memset ( lut , 0 , sizeof ( struct lutmABType ) ); lut -> clut_table = & lut -> clut_table_data [ 0 ]; for (i = 0; i < num_in_channels; i++) lut -> num_grid_points [ i ] = read_u8 ( src , clut_offset + i ); lut -> reversed = ( type == LUT_MBA_TYPE ); lut -> num_in_channels = num_in_channels; lut -> num_out_channels = num_out_channels; if ( matrix_offset )  lut -> e00 = read_s15Fixed16Number ( src , matrix_offset + 4 * 0 ); lut -> e01 = read_s15Fixed16Number ( src , matrix_offset + 4 * 1 ); lut -> e02 = read_s15Fixed16Number ( src , matrix_offset + 4 * 2 ); lut -> e10 = read_s15Fixed16Number ( src , matrix_offset + 4 * 3 ); lut -> e11 = read_s15Fixed16Number ( src , matrix_offset + 4 * 4 ); lut -> e12 = read_s15Fixed16Number ( src , matrix_offset + 4 * 5 ); lut -> e20 = read_s15Fixed16Number ( src , matrix_offset + 4 * 6 ); lut -> e21 = read_s15Fixed16Number ( src , matrix_offset + 4 * 7 ); lut -> e22 = read_s15Fixed16Number ( src , matrix_offset + 4 * 8 ); lut -> e03 = read_s15Fixed16Number ( src , matrix_offset + 4 * 9 ); lut -> e13 = read_s15Fixed16Number ( src , matrix_offset + 4 * 10 ); lut -> e23 = read_s15Fixed16Number ( src , matrix_offset + 4 * 11 ); if ( m_curve_offset )  read_nested_curveType ( src , & lut -> m_curves , num_out_channels , m_curve_offset ); static void read_nested_curveType(struct mem_source *src, struct curveType *(*curveArray)[MAX_CHANNELS], uint8_t num_channels, uint32_t curve_offset) uint32_t channel_offset = 0 ; int i ; for (i = 0; i < num_channels; i++) uint32_t tag_len ; ( * curveArray ) [ i ] = read_curveType ( src , curve_offset + channel_offset , & tag_len ); channel_offset += tag_len; if ( ( tag_len % 4 ) != 0 )  channel_offset += 4 - ( tag_len % 4 ); static struct curveType *read_curveType(struct mem_source *src, uint32_t offset, uint32_t *len) uint32_t type = read_u32 ( src , offset ) ; uint32_t count ; if ( type != CURVE_TYPE && type != PARAMETRIC_CURVE_TYPE )  if ( type == CURVE_TYPE )  count = read_u16 ( src , offset + 8 ); static uint16_t read_u16(struct mem_source *mem, size_t offset) if ( offset > mem -> size - 2 )  be16 k ; memcpy ( & k , mem -> buf + offset , sizeof ( k ) ); return be16_to_cpu ( k ) ; 