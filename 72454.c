int color(u_short mode,char *name,bool orphan,bool islink) if ( orphan )  if ( islink )  if ( missing_flgs )  if ( orphan_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , orphan_flgs , rightcode ); switch ( mode & 0170000 )  if ( ! fifo_flgs )  fprintf ( outfile , "%s%s%s" , leftcode , fifo_flgs , rightcode ); fprintf ( outfile , "%s%s%s" , leftcode , char_flgs , rightcode ); fprintf ( outfile , "%s%s%s" , leftcode , stickyow_flgs , rightcode ); 