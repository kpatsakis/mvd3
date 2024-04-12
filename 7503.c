uint32_t CVE_2013_0772_VULN_nsGIFDecoder2::OutputRow() int drow_start , drow_end ; drow_start = drow_end = mGIFStruct . irow; if ( ( unsigned ) drow_start >= mGIFStruct . height )  if ( ! mGIFStruct . images_decoded )  if ( mGIFStruct . progressive_display && mGIFStruct . interlaced && ( mGIFStruct . ipass < 4 ) )  const uint32_t row_dup = 15 >> mGIFStruct . ipass ; const uint32_t row_shift = row_dup >> 1 ; drow_start -= row_shift; drow_end = drow_start + row_dup; if ( ( ( mGIFStruct . height - 1 ) - drow_end ) <= row_shift )  drow_end = mGIFStruct . height - 1; if ( drow_start < 0 )  drow_start = 0; if ( ( unsigned ) drow_end >= mGIFStruct . height )  drow_end = mGIFStruct . height - 1; const uint32_t bpr = sizeof ( uint32_t ) * mGIFStruct . width ; uint8_t * rowp = mImageData + ( mGIFStruct . irow * bpr ) ; if ( drow_end > drow_start )  for (int r = drow_start; r <= drow_end; r++) if ( r != int ( mGIFStruct . irow ) )  memcpy ( mImageData + ( r * bpr ) , rowp , bpr ); 