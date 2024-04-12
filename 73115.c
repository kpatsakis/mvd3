static void vmsvga_update_display(void *opaque) struct vmsvga_state_s * s = opaque ; if ( ! s -> enable )  vmsvga_fifo_run ( s ); static void vmsvga_fifo_run(struct vmsvga_state_s *s) uint32_t cmd , colour ; int args , len ; int x , y , dx , dy , width , height ; struct vmsvga_cursor_definition_s cursor ; len = vmsvga_fifo_length ( s ); while ( len > 0 )  switch ( cmd = vmsvga_fifo_read ( s ) )  len -= 5; len -= 6; if ( len < 0 )  colour = vmsvga_fifo_read ( s ); x = vmsvga_fifo_read ( s ); y = vmsvga_fifo_read ( s ); width = vmsvga_fifo_read ( s ); height = vmsvga_fifo_read ( s ); if ( vmsvga_fill_rect ( s , colour , x , y , width , height ) == 0 )  args = 0; len -= 7; if ( len < 0 )  x = vmsvga_fifo_read ( s ); y = vmsvga_fifo_read ( s ); dx = vmsvga_fifo_read ( s ); dy = vmsvga_fifo_read ( s ); width = vmsvga_fifo_read ( s ); height = vmsvga_fifo_read ( s ); if ( vmsvga_copy_rect ( s , x , y , dx , dy , width , height ) == 0 )  args = 0; len -= 8; if ( len < 0 )  cursor . id = vmsvga_fifo_read ( s ); cursor . hot_x = vmsvga_fifo_read ( s ); cursor . hot_y = vmsvga_fifo_read ( s ); cursor . width = x = vmsvga_fifo_read ( s ); cursor . height = y = vmsvga_fifo_read ( s ); cursor . bpp = vmsvga_fifo_read ( s ); args = SVGA_BITMAP_SIZE ( x , y ) + SVGA_PIXMAP_SIZE ( x , y , cursor . bpp ); if ( SVGA_BITMAP_SIZE ( x , y ) > sizeof cursor . mask || SVGA_PIXMAP_SIZE ( x , y , cursor . bpp ) > sizeof cursor . image )  len -= args; if ( len < 0 )  for (args = 0; args < SVGA_BITMAP_SIZE(x, y); args++) cursor . mask [ args ] = vmsvga_fifo_read_raw ( s ); for (args = 0; args < SVGA_PIXMAP_SIZE(x, y, cursor.bpp); args++) cursor . image [ args ] = vmsvga_fifo_read_raw ( s ); len -= 6; if ( len < 0 )  x = vmsvga_fifo_read ( s ); y = vmsvga_fifo_read ( s ); args = x * y; args = 6; args = 7; len -= 4; if ( len < 0 )  args = 7 + ( vmsvga_fifo_read ( s ) >> 2 ); args = 12; args = 0; len -= args; if ( len < 0 )  while ( args -- )  static inline int vmsvga_copy_rect(struct vmsvga_state_s int x0, int y0, int x1, int y1, int w, int h) DisplaySurface * surface = qemu_console_surface ( s -> vga . con ) ; if ( ! vmsvga_verify_rect ( surface , "vmsvga_copy_rect/src" , x0 , y0 , w , h ) )  if ( ! vmsvga_verify_rect ( surface , "vmsvga_copy_rect/dst" , x1 , y1 , w , h ) )  static inline bool vmsvga_verify_rect(DisplaySurface const char int x, int y, int w, int h) if ( x < 0 )  if ( x > SVGA_MAX_WIDTH )  if ( w < 0 )  if ( w > SVGA_MAX_WIDTH )  if ( x + w > surface_width ( surface ) )  if ( y < 0 )  fprintf ( stderr , "%s: y was < 0 (%d)\n" , name , y ); 