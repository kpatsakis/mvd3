void coswearer_refelt(void *seraskerate_prosar) struct stonesoup_data * stonesoupData ; tailorly_maricolous = ( ( char * ) ( ( char * ) seraskerate_prosar ) ); stonesoupData = malloc ( sizeof ( struct stonesoup_data ) ); if ( stonesoupData )  stonesoupData -> data = malloc ( sizeof ( char ) * ( strlen ( tailorly_maricolous ) + 1 ) ); stonesoupData -> file1 = malloc ( sizeof ( char ) * ( strlen ( tailorly_maricolous ) + 1 ) ); stonesoupData -> file2 = malloc ( sizeof ( char ) * ( strlen ( tailorly_maricolous ) + 1 ) ); if ( stonesoupData -> data )  if ( ( sscanf ( tailorly_maricolous , "%d %s %s %s" , & ( stonesoupData -> qsize ) , stonesoupData -> file1 , stonesoupData -> file2 , stonesoupData -> data ) == 4 ) && ( strlen ( stonesoupData -> data ) != 0 ) )  stonesoupData -> data_size = strlen ( stonesoupData -> data ); free ( stonesoupData ); 