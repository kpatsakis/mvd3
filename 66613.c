static void xhci_doorbell_write(void *ptr, hwaddr uint64_t val, unsigned size) XHCIState * xhci = ptr ; if ( ! xhci_running ( xhci ) )  static inline int xhci_running(XHCIState *xhci) return ! ( xhci -> usbsts & USBSTS_HCH ) && ! xhci -> intr [ 0 ] . er_full ; reg >>= 2; if ( reg == 0 )  if ( val == 0 )  xhci_process_commands ( xhci ); static void xhci_process_commands(XHCIState *xhci) XHCITRB trb ; TRBType type ; XHCIEvent event = { ER_COMMAND_COMPLETE , CC_SUCCESS } ; dma_addr_t addr ; unsigned int i , slotid = 0 ; if ( ! xhci_running ( xhci ) )  static inline int xhci_running(XHCIState *xhci) return ! ( xhci -> usbsts & USBSTS_HCH ) && ! xhci -> intr [ 0 ] . er_full ; xhci -> crcr_low |= CRCR_CRR; while ( type = xhci_ring_fetch ( xhci , & xhci -> cmd_ring , & trb , & addr ) )  static TRBType xhci_ring_fetch(XHCIState *xhci, XHCIRing *ring, XHCITRB dma_addr_t *addr) while ( 1 )  TRBType type ; trb -> addr = ring -> dequeue; trb -> ccs = ring -> ccs; if ( ( trb -> control & TRB_C ) != ring -> ccs )  return 0 ; type = TRB_TYPE ( * trb ); if ( type != TR_LINK )  return type ; ring -> dequeue = xhci_mask64 ( trb -> parameter ); static inline dma_addr_t xhci_mask64(uint64_t addr) if ( sizeof ( dma_addr_t ) == 4 )  return addr & 0xffffffff ; return addr ; if ( trb -> control & TRB_LK_TC )  ring -> ccs = ! ring -> ccs; event . ptr = addr; switch ( type )  for (i = 0; i < xhci->numslots; i++) if ( ! xhci -> slots [ i ] . enabled )  if ( i >= xhci -> numslots )  event . ccode = CC_NO_SLOTS_ERROR; slotid = i + 1; event . ccode = xhci_enable_slot ( xhci , slotid ); static TRBCCode xhci_enable_slot(XHCIState *xhci, unsigned int slotid) return CC_SUCCESS ; slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  event . ccode = xhci_disable_slot ( xhci , slotid ); slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  event . ccode = xhci_address_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_BSR ); slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  event . ccode = xhci_configure_slot ( xhci , slotid , trb . parameter , trb . control & TRB_CR_DC ); slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  event . ccode = xhci_evaluate_slot ( xhci , slotid , trb . parameter ); static TRBCCode xhci_evaluate_slot(XHCIState *xhci, unsigned int uint64_t pictx) uint32_t ictl_ctx [ 2 ] ; if ( ictl_ctx [ 0 ] != 0x0 || ictl_ctx [ 1 ] & ~0x3 )  return CC_TRB_ERROR ; return CC_SUCCESS ; slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_stop_ep ( xhci , slotid , epid ); static TRBCCode xhci_stop_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; if ( epid < 1 || epid > 31 )  return CC_TRB_ERROR ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  return CC_EP_NOT_ENABLED_ERROR ; return CC_SUCCESS ; slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; event . ccode = xhci_reset_ep ( xhci , slotid , epid ); static TRBCCode xhci_reset_ep(XHCIState *xhci, unsigned int unsigned int epid) XHCISlot * slot ; XHCIEPContext * epctx ; if ( epid < 1 || epid > 31 )  return CC_TRB_ERROR ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  return CC_EP_NOT_ENABLED_ERROR ; epctx = slot -> eps [ epid - 1 ]; if ( epctx -> state != EP_HALTED )  return CC_CONTEXT_STATE_ERROR ; if ( ! xhci -> slots [ slotid - 1 ] . uport || ! xhci -> slots [ slotid - 1 ] . uport -> dev || ! xhci -> slots [ slotid - 1 ] . uport -> dev -> attached )  return CC_USB_TRANSACTION_ERROR ; return CC_SUCCESS ; slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  unsigned int epid = ( trb . control >> TRB_CR_EPID_SHIFT ) & TRB_CR_EPID_MASK ; unsigned int streamid = ( trb . status >> 16 ) & 0xffff ; event . ccode = xhci_set_ep_dequeue ( xhci , slotid , epid , streamid , trb . parameter ); static TRBCCode xhci_set_ep_dequeue(XHCIState *xhci, unsigned int unsigned int epid, unsigned int uint64_t pdequeue) XHCISlot * slot ; XHCIEPContext * epctx ; XHCIStreamContext * sctx ; if ( epid < 1 || epid > 31 )  return CC_TRB_ERROR ; slot = & xhci -> slots [ slotid - 1 ]; if ( ! slot -> eps [ epid - 1 ] )  return CC_EP_NOT_ENABLED_ERROR ; epctx = slot -> eps [ epid - 1 ]; if ( epctx -> state != EP_STOPPED )  return CC_CONTEXT_STATE_ERROR ; if ( epctx -> nr_pstreams )  uint32_t err ; sctx = xhci_find_stream ( epctx , streamid , & err ); static XHCIStreamContext *xhci_find_stream(XHCIEPContext unsigned int uint32_t *cc_error) XHCIStreamContext * sctx ; uint32_t ctx [ 2 ] , sct ; if ( epctx -> lsa )  if ( streamid >= epctx -> nr_pstreams )  return NULL ; sctx = epctx -> pstreams + streamid; if ( sctx -> sct == - 1 )  sct = ( ctx [ 0 ] >> 1 ) & 0x07; if ( epctx -> lsa && sct != 1 )  return NULL ; sctx -> sct = sct; return sctx ; if ( sctx == NULL )  return err ; return CC_SUCCESS ; slotid = xhci_get_slot ( xhci , & event , & trb ); static unsigned int xhci_get_slot(XHCIState *xhci, XHCIEvent *event, XHCITRB *trb) unsigned int slotid ; slotid = ( trb -> control >> TRB_CR_SLOTID_SHIFT ) & TRB_CR_SLOTID_MASK; if ( slotid < 1 || slotid > xhci -> numslots )  return 0 ; if ( ! xhci -> slots [ slotid - 1 ] . enabled )  return 0 ; return slotid ; if ( slotid )  event . ccode = xhci_reset_slot ( xhci , slotid ); event . ccode = xhci_get_port_bandwidth ( xhci , trb . parameter ); static TRBCCode xhci_get_port_bandwidth(XHCIState *xhci, uint64_t pctx) return CC_SUCCESS ; event . type = 48; event . length = 0x3025; uint32_t chi = trb . parameter >> 32 ; uint32_t clo = trb . parameter ; uint32_t val = xhci_nec_challenge ( chi , clo ) ; static uint32_t xhci_nec_challenge(uint32_t hi, uint32_t lo) return ~val ; event . length = val & 0xFFFF; event . epid = val >> 16; slotid = val >> 24; event . type = 48; event . ccode = CC_TRB_ERROR; event . slotid = slotid; static TRBCCode xhci_configure_slot(XHCIState *xhci, unsigned int uint64_t pictx, bool dc) dma_addr_t ictx , octx ; uint32_t ictl_ctx [ 2 ] ; uint32_t slot_ctx [ 4 ] ; uint32_t ep_ctx [ 5 ] ; int i ; TRBCCode res ; octx = xhci -> slots [ slotid - 1 ] . ctx; if ( dc )  if ( ( ictl_ctx [ 0 ] & 0x3 ) != 0x0 || ( ictl_ctx [ 1 ] & 0x3 ) != 0x1 )  if ( SLOT_STATE ( slot_ctx [ 3 ] ) < SLOT_ADDRESSED )  for (i = 2; i <= 31; i++) if ( ictl_ctx [ 0 ] & ( 1 << i ) )  xhci_disable_ep ( xhci , slotid , i ); if ( ictl_ctx [ 1 ] & ( 1 << i ) )  res = xhci_enable_ep ( xhci , slotid , i , octx + ( 32 * i ) , ep_ctx ); if ( res != CC_SUCCESS )  static TRBCCode xhci_disable_ep(XHCIState *xhci, unsigned int unsigned int epid) assert ( slotid >= 1 && slotid <= xhci -> numslots ); 