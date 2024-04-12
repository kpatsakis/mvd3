static TRBCCode xhci_configure_slot(XHCIState *xhci, unsigned int uint64_t pictx, bool dc) dma_addr_t ictx , octx ; uint32_t ictl_ctx [ 2 ] ; uint32_t slot_ctx [ 4 ] ; uint32_t ep_ctx [ 5 ] ; int i ; TRBCCode res ; octx = xhci -> slots [ slotid - 1 ] . ctx; if ( dc )  if ( ( ictl_ctx [ 0 ] & 0x3 ) != 0x0 || ( ictl_ctx [ 1 ] & 0x3 ) != 0x1 )  if ( SLOT_STATE ( slot_ctx [ 3 ] ) < SLOT_ADDRESSED )  for (i = 2; i <= 31; i++) if ( ictl_ctx [ 1 ] & ( 1 << i ) )  res = xhci_enable_ep ( xhci , slotid , i , octx + ( 32 * i ) , ep_ctx ); if ( res != CC_SUCCESS )  static TRBCCode xhci_enable_ep(XHCIState *xhci, unsigned int unsigned int epid, dma_addr_t uint32_t *ctx) XHCIEPContext * epctx ; epctx = xhci_alloc_epctx ( xhci , slotid , epid ); static XHCIEPContext *xhci_alloc_epctx(XHCIState unsigned int unsigned int epid) XHCIEPContext * epctx ; int i ; epctx = g_new0 ( XHCIEPContext , 1 ); epctx -> xhci = xhci; epctx -> slotid = slotid; epctx -> epid = epid; for (i = 0; i < ARRAY_SIZE(epctx->transfers); i++) epctx -> transfers [ i ] . xhci = xhci; epctx -> transfers [ i ] . slotid = slotid; epctx -> transfers [ i ] . epid = epid; epctx -> kick_timer = timer_new_ns ( QEMU_CLOCK_VIRTUAL , xhci_ep_kick_timer , epctx ); return epctx ; xhci_init_epctx ( epctx , pctx , ctx ); static void xhci_init_epctx(XHCIEPContext dma_addr_t pctx, uint32_t *ctx) dma_addr_t dequeue ; dequeue = xhci_addr64 ( ctx [ 2 ] & ~0xf , ctx [ 3 ] ); epctx -> type = ( ctx [ 1 ] >> EP_TYPE_SHIFT ) & EP_TYPE_MASK; epctx -> pctx = pctx; epctx -> max_psize = ctx [ 1 ] >> 16; epctx -> max_psize *= 1 + ( ( ctx [ 1 ] >> 8 ) & 0xff ); epctx -> max_pstreams = ( ctx [ 0 ] >> 10 ) & epctx -> xhci -> max_pstreams_mask; epctx -> lsa = ( ctx [ 0 ] >> 15 ) & 1; if ( epctx -> max_pstreams )  xhci_alloc_streams ( epctx , dequeue ); static void xhci_alloc_streams(XHCIEPContext *epctx, dma_addr_t base) assert ( epctx -> pstreams == NULL ); 