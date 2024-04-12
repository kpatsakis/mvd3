void qcms_data_from_unicode_path(const wchar_t *path, void **mem, size_t *size) FILE * file = NULL ; * mem = NULL; * size = 0; file = _wfopen ( path , L "rb" ) if ( file )  qcms_data_from_file ( file , mem , size ); static void qcms_data_from_file(FILE *file, void **mem, size_t *size) uint32_t length , remaining_length ; size_t read_length ; be32 length_be ; void * data ; if ( fread ( & length_be , 1 , sizeof ( length_be ) , file ) != sizeof ( length_be ) )  length = be32_to_cpu ( length_be ); static uint32_t be32_to_cpu(be32 v) return ( ( v & 0xff ) << 24 ) | ( ( v & 0xff00 ) << 8 ) | ( ( v & 0xff0000 ) >> 8 ) | ( ( v & 0xff000000 ) >> 24 ) ; if ( length > MAX_PROFILE_SIZE || length < sizeof ( length_be ) )  data = malloc ( length ); if ( ! data )  * ( ( be32 * ) data ) = length_be; remaining_length = length - sizeof ( length_be ); read_length = fread ( ( unsigned char * ) data + sizeof ( length_be ) , 1 , remaining_length , file ); if ( read_length != remaining_length )  free ( data ); 