int color(u_short mode,char *name,bool orphan,bool islink) if ( orphan )  if ( islink )  if ( missing_flgs )  if ( orphan_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , orphan_flgs , rightcode ); switch ( mode & 0170000 )  if ( ! fifo_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , fifo_flgs , rightcode ); if ( ! char_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , char_flgs , rightcode ); if ( mode & 01000 )  if ( mode & 0200 >> 3 >> 3 && stickyow_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , stickyow_flgs , rightcode ); if ( ! ( mode & 0200 >> 3 >> 3 ) && sticky_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , sticky_flgs , rightcode ); 