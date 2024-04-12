static void xhci_complete(USBPort *port, USBPacket *packet) XHCITransfer * xfer = container_of ( packet , XHCITransfer , packet ) ; if ( packet -> status == USB_RET_REMOVE_FROM_QUEUE )  xhci_kick_ep ( xfer -> xhci , xfer -> slotid , xfer -> epid , xfer -> streamid ); static void xhci_kick_ep(XHCIState *xhci, unsigned int unsigned int epid, unsigned int streamid) XHCIStreamContext * stctx ; XHCIEPContext * epctx ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  epctx = xhci -> slots [ slotid - 1 ] . eps [ epid - 1 ]; if ( ! epctx )  if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  if ( epctx -> retry )  XHCITransfer * xfer = epctx -> retry ; if ( xfer -> timed_xfer )  if ( xfer -> running_retry )  xfer -> timed_xfer = 0; xfer -> running_retry = 1; if ( xfer -> iso_xfer )  if ( xhci_setup_packet ( xfer ) < 0 )  static int xhci_setup_packet(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; USBEndpoint * ep ; if ( xfer -> packet . ep )  ep = xhci_epid_to_usbep ( xhci , xfer -> slotid , xfer -> epid ); static USBEndpoint *xhci_epid_to_usbep(XHCIState unsigned int slotid, unsigned int epid) if ( ! xhci -> slots [ slotid - 1 ] . uport )  return NULL ; return usb_ep_get ( xhci -> slots [ slotid - 1 ] . uport -> dev , ( epid & 1 ) ? USB_TOKEN_IN : USB_TOKEN_OUT , epid >> 1 ) ; if ( ! ep )  return - 1 ; return 0 ; if ( xhci_setup_packet ( xfer ) < 0 )  static int xhci_setup_packet(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; USBEndpoint * ep ; if ( xfer -> packet . ep )  ep = xhci_epid_to_usbep ( xhci , xfer -> slotid , xfer -> epid ); if ( ! ep )  return - 1 ; return 0 ; if ( xfer -> packet . status == USB_RET_NAK )  epctx -> retry = NULL; if ( epctx -> state == EP_HALTED )  if ( epctx -> nr_pstreams )  stctx = xhci_find_stream ( epctx , streamid , & err ); static XHCIStreamContext *xhci_find_stream(XHCIEPContext unsigned int uint32_t *cc_error) assert ( streamid != 0 ); 