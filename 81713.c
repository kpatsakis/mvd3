static uint64_t subpage_read(void *opaque, hwaddr unsigned len) subpage_t * subpage = opaque ; uint8_t buf [ 4 ] ; address_space_read ( subpage -> as , addr + subpage -> base , buf , len ); bool address_space_read(AddressSpace *as, hwaddr addr, uint8_t *buf, int len) return address_space_rw ( as , addr , buf , len , false ) ; bool address_space_rw(AddressSpace *as, hwaddr addr, uint8_t int len, bool is_write) hwaddr l ; uint8_t * ptr ; hwaddr addr1 ; MemoryRegion * mr ; while ( len > 0 )  l = len; mr = address_space_translate ( as , addr , & addr1 , & l , is_write ); MemoryRegion *address_space_translate(AddressSpace *as, hwaddr hwaddr *xlat, hwaddr bool is_write) IOMMUTLBEntry iotlb ; MemoryRegionSection * section ; MemoryRegion * mr ; section = address_space_translate_internal ( as -> dispatch , addr , & addr , plen , true ); static MemoryRegionSection address_space_translate_internal(AddressSpaceDispatch *d, hwaddr addr, hwaddr hwaddr *plen, bool resolve_subpage) MemoryRegionSection * section ; section = address_space_lookup_region ( d , addr , resolve_subpage ); static MemoryRegionSection *address_space_lookup_region(AddressSpaceDispatch hwaddr bool resolve_subpage) MemoryRegionSection * section ; subpage_t * subpage ; section = phys_page_find ( d -> phys_map , addr >> TARGET_PAGE_BITS , d -> nodes , d -> sections ); static MemoryRegionSection *phys_page_find(PhysPageEntry lp, hwaddr Node *nodes, MemoryRegionSection *sections) PhysPageEntry * p ; int i ; for (i = P_L2_LEVELS - 1; i >= 0 && !lp.is_leaf; i--) if ( lp . ptr == PHYS_MAP_NODE_NIL )  return & sections [ PHYS_SECTION_UNASSIGNED ] ; p = nodes [ lp . ptr ]; lp = p [ ( index >> ( i * L2_BITS ) ) & ( L2_SIZE - 1 ) ]; return & sections [ lp . ptr ] ; if ( resolve_subpage && section -> mr -> subpage )  subpage = container_of ( section -> mr , subpage_t , iomem ); section = & d -> sections [ subpage -> sub_section [ SUBPAGE_IDX ( addr ) ] ]; return section ; return section ; mr = section -> mr; if ( ! mr -> iommu_ops )  iotlb = mr -> iommu_ops -> translate ( mr , addr ); addr = ( ( iotlb . translated_addr & ~iotlb . addr_mask ) | ( addr & iotlb . addr_mask ) ); if ( ! ( iotlb . perm & ( 1 << is_write ) ) )  mr = & io_mem_unassigned; as = iotlb . target_as; return mr ; if ( is_write )  if ( ! memory_access_is_direct ( mr , is_write ) )  static inline bool memory_access_is_direct(MemoryRegion *mr, bool is_write) if ( memory_region_is_ram ( mr ) )  return ! ( is_write && mr -> readonly ) ; if ( memory_region_is_romd ( mr ) )  return ! is_write ; return false ; l = memory_access_size ( mr , l , addr1 ); static int memory_access_size(MemoryRegion *mr, unsigned l, hwaddr addr) unsigned access_size_max = mr -> ops -> valid . max_access_size ; if ( access_size_max == 0 )  access_size_max = 4; if ( ! mr -> ops -> impl . unaligned )  unsigned align_size_max = addr & - addr ; if ( align_size_max != 0 && align_size_max < access_size_max )  access_size_max = align_size_max; if ( l > access_size_max )  l = access_size_max; return l ; val = ldq_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 8 ); val = ldl_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 4 ); val = lduw_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 2 ); val = ldub_p ( buf ); error |= io_mem_write ( mr , addr1 , val , 1 ); addr1 += memory_region_get_ram_addr ( mr ); memcpy ( ptr , buf , l ); if ( ! memory_access_is_direct ( mr , is_write ) )  static inline bool memory_access_is_direct(MemoryRegion *mr, bool is_write) if ( memory_region_is_ram ( mr ) )  return ! ( is_write && mr -> readonly ) ; if ( memory_region_is_romd ( mr ) )  return ! is_write ; return false ; l = memory_access_size ( mr , l , addr1 ); static int memory_access_size(MemoryRegion *mr, unsigned l, hwaddr addr) unsigned access_size_max = mr -> ops -> valid . max_access_size ; if ( access_size_max == 0 )  access_size_max = 4; if ( ! mr -> ops -> impl . unaligned )  unsigned align_size_max = addr & - addr ; if ( align_size_max != 0 && align_size_max < access_size_max )  access_size_max = align_size_max; if ( l > access_size_max )  l = access_size_max; return l ; error |= io_mem_read ( mr , addr1 , & val , 8 ); stq_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 4 ); stl_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 2 ); stw_p ( buf , val ); error |= io_mem_read ( mr , addr1 , & val , 1 ); stb_p ( buf , val ); ptr = qemu_get_ram_ptr ( mr -> ram_addr + addr1 ); void *qemu_get_ram_ptr(ram_addr_t addr) RAMBlock * block = qemu_get_ram_block ( addr ) ; static RAMBlock *qemu_get_ram_block(ram_addr_t addr) RAMBlock * block ; block = ram_list . mru_block; return block ; if ( xen_enabled ( ) )  if ( block -> offset == 0 )  return xen_map_cache ( addr , 0 , 0 ) ; if ( block -> host == NULL )  block -> host = xen_map_cache ( block -> offset , block -> length , 1 ); return block -> host + ( addr - block -> offset ) ; memcpy ( buf , ptr , l ); len -= l; buf += l; addr += l; return error ; 