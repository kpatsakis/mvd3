static void xhci_wakeup_endpoint(USBBus *bus, USBEndpoint unsigned int stream) XHCIState * xhci = container_of ( bus , XHCIState , bus ) ; int slotid ; slotid = ep -> dev -> addr; if ( slotid == 0 || ! xhci -> slots [ slotid - 1 ] . enabled )  xhci_kick_ep ( xhci , slotid , xhci_find_epid ( ep ) , stream ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIStreamContext * stctx ; XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xhci_setup_packet ( xfer ) < 0 )  if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  stctx = xhci_find_stream ( epctx , streamid , & err ); if ( stctx == NULL )  xhci_set_ep_state ( xhci , epctx , stctx , EP_RUNNING ); static void xhci_set_ep_state(XHCIState *xhci, XHCIEPContext XHCIStreamContext *sctx, uint32_t state) uint32_t ctx [ 5 ] ; xhci_dma_read_u32s ( xhci , epctx -> pctx , ctx , sizeof ( ctx ) ); static inline void xhci_dma_read_u32s(XHCIState *xhci, dma_addr_t uint32_t *buf, size_t len) assert ( ( len % sizeof ( uint32_t ) ) == 0 ); 