bool joinIfElse(const BlockVector& thenBlocks, ParseNode* pn) if ( inDeadCode ( ) && thenBlocks . empty ( ) )  inline bool inDeadCode() const return curBlock_ == nullptr ; MBasicBlock * pred = curBlock_ ? curBlock_ : thenBlocks [ 0 ] ; MBasicBlock * join ; if ( ! newBlock ( pred , & join , pn ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; bool newBlockWithDepth(MBasicBlock* pred, unsigned loopDepth, MBasicBlock** block, ParseNode* pn) * block = MBasicBlock :: NewAsmJS ( mirGraph ( ) , info ( ) , pred , MBasicBlock :: NORMAL ); CompileInfo &  info() const return * info_ ; MIRGraph &     mirGraph() const return * graph_ ; if ( ! * block )  return false ; return true ; for (size_t i = 0; i < thenBlocks.length(); i++) thenBlocks [ i ] -> end ( MGoto :: New ( alloc ( ) , join ) ); return * alloc_ ; TempAllocator &     alloc() const if ( pred == curBlock_ || i > 0 )  if ( ! join -> addPredecessor ( alloc ( ) , thenBlocks [ i ] ) )  TempAllocator &     alloc() const return * alloc_ ; TempAllocator &     alloc() const 