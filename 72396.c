int CVE_2015_0833_VULN_NS_main(int argc, NS_tchar **argv) if ( argc < 4 )  gInstallDirPath [ MAXPATHLEN - 1 ] = NS_T ( '\0' ); bool noServiceFallback = getenv ( "MOZ_NO_SERVICE_FALLBACK" ) != nullptr ; useService = IsUpdateStatusPendingService ( ); testOnlyFallbackKeyExists = DoesFallbackKeyExist ( ); __int64 pid = 0 ; if ( argc > 4 )  pid = _wtoi64 ( argv [ 4 ] ); if ( pid == - 1 )  sStagedUpdate = true; if ( NS_tstrstr ( argv [ 4 ] , NS_T ( "/replace" ) ) )  sReplaceRequest = true; if ( ! WriteStatusFile ( "applying" ) )  if ( pid > 0 )  HANDLE parent = OpenProcess ( SYNCHRONIZE , false , ( DWORD ) pid ) ; if ( parent )  updateFromMetro = IsUpdateFromMetro ( argc , argv ); DWORD waitTime = updateFromMetro ? IMMERSIVE_PARENT_WAIT : PARENT_WAIT ; DWORD result = WaitForSingleObject ( parent , waitTime ) ; if ( result != WAIT_OBJECT_0 && ! updateFromMetro )  const int callbackIndex = 6 ; sUsingService = getenv ( "MOZ_USING_SERVICE" ) != nullptr; NS_tchar elevatedLockFilePath [ MAXPATHLEN ] = { NS_T ( '\0' ) } ; if ( ! sUsingService && ( argc > callbackIndex || sStagedUpdate || sReplaceRequest ) )  NS_tchar updateLockFilePath [ MAXPATHLEN ] ; if ( ! _waccess ( updateLockFilePath , F_OK ) && NS_tremove ( updateLockFilePath ) != 0 )  updateLockFileHandle = CreateFileW ( updateLockFilePath , GENERIC_READ | GENERIC_WRITE , 0 , nullptr , OPEN_ALWAYS , FILE_FLAG_DELETE_ON_CLOSE , nullptr ); if ( updateLockFileHandle == INVALID_HANDLE_VALUE || ( useService && testOnlyFallbackKeyExists && noServiceFallback ) )  if ( ! _waccess ( elevatedLockFilePath , F_OK ) && NS_tremove ( elevatedLockFilePath ) != 0 )  HANDLE elevatedFileHandle ; elevatedFileHandle = CreateFileW ( elevatedLockFilePath , GENERIC_READ | GENERIC_WRITE , 0 , nullptr , OPEN_ALWAYS , FILE_FLAG_DELETE_ON_CLOSE , nullptr ); if ( elevatedFileHandle == INVALID_HANDLE_VALUE )  wchar_t * cmdLine = MakeCommandLine ( argc - 1 , argv + 1 ) ; if ( ! cmdLine )  if ( useService )  BOOL isLocal = FALSE ; useService = IsLocalFile ( argv [ 0 ] , isLocal ) && isLocal; if ( useService )  BOOL unpromptedElevation ; if ( IsUnpromptedElevation ( unpromptedElevation ) )  useService = ! unpromptedElevation; if ( useService )  WCHAR maintenanceServiceKey [ MAX_PATH + 1 ] ; if ( CalculateRegistryPathFromFilePath ( gInstallDirPath , maintenanceServiceKey ) )  HKEY baseKey ; if ( RegOpenKeyExW ( HKEY_LOCAL_MACHINE , maintenanceServiceKey , 0 , KEY_READ | KEY_WOW64_64KEY , & baseKey ) == ERROR_SUCCESS )  useService = testOnlyFallbackKeyExists; useService = false; if ( useService )  DWORD ret = LaunchServiceSoftwareUpdateCommand ( argc , ( LPCWSTR * ) argv ) ; useService = ( ret == ERROR_SUCCESS ); if ( useService )  lastState = WaitForServiceStop ( SVC_NAME , 1 ); if ( lastState != SERVICE_STOPPED )  useService = false; if ( ! useService && sStagedUpdate )  if ( ! useService && ! noServiceFallback && updateLockFileHandle == INVALID_HANDLE_VALUE )  free ( cmdLine ); 