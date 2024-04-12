static int xhci_submit(XHCIState *xhci, XHCITransfer *xfer, XHCIEPContext *epctx) xfer -> in_xfer = epctx -> type >> 2; switch ( epctx -> type )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = true; if ( xfer -> running_retry )  xfer -> pkts = 0; xfer -> iso_xfer = false; xfer -> timed_xfer = false; xfer -> pkts = 1; xfer -> iso_xfer = true; xfer -> timed_xfer = true; if ( xfer -> running_retry )  if ( xhci_setup_packet ( xfer ) < 0 )  xhci_complete_packet ( xfer ); static int xhci_complete_packet(XHCITransfer *xfer) if ( xfer -> packet . status == USB_RET_ASYNC )  if ( xfer -> packet . status == USB_RET_NAK )  xfer -> running_async = 0; xfer -> running_retry = 0; xfer -> complete = 1; if ( xfer -> packet . status == USB_RET_SUCCESS )  xfer -> status = CC_SUCCESS; switch ( xfer -> packet . status )  xfer -> status = CC_USB_TRANSACTION_ERROR; xhci_stall_ep ( xfer ); static void xhci_stall_ep(XHCITransfer *xfer) XHCIState * xhci = xfer -> xhci ; XHCISlot * slot = & xhci -> slots [ xfer -> slotid - 1 ] ; XHCIEPContext * epctx = slot -> eps [ xfer -> epid - 1 ] ; XHCIStreamContext * sctx ; if ( epctx -> nr_pstreams )  sctx = xhci_find_stream ( epctx , xfer -> streamid , & err ); static XHCIStreamContext *xhci_find_stream(XHCIEPContext unsigned int uint32_t *cc_error) assert ( streamid != 0 ); 