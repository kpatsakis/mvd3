bool branchAndCloseDoWhileLoop(MDefinition* cond, MBasicBlock* loopEntry, ParseNode* afterLoopStmt) ParseNode * pn = popLoop ( ) ; ParseNode* popLoop() ParseNode * pn = loopStack_ . popCopy ( ) ; return pn ; if ( ! loopEntry )  if ( curBlock_ )  if ( cond -> isConstant ( ) )  if ( cond -> toConstant ( ) -> valueToBoolean ( ) )  if ( ! loopEntry -> setBackedgeAsmJS ( curBlock_ ) )  MBasicBlock * afterLoop ; if ( ! newBlock ( curBlock_ , & afterLoop , afterLoopStmt ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; MBasicBlock * afterLoop ; if ( ! newBlock ( curBlock_ , & afterLoop , afterLoopStmt ) )  bool newBlock(MBasicBlock* pred, MBasicBlock** block, ParseNode* pn) return newBlockWithDepth ( pred , loopStack_ . length ( ) , block , pn ) ; if ( ! loopEntry -> setBackedgeAsmJS ( curBlock_ ) )  return bindUnlabeledBreaks ( pn ) ; bool bindUnlabeledBreaks(ParseNode* pn) if ( p )  if ( ! bindBreaksOrContinues ( & p -> value ( ) , & createdJoinBlock , pn ) )  bool bindBreaksOrContinues(BlockVector* preds, bool* createdJoinBlock, ParseNode* pn) for (unsigned i = 0; i < preds->length(); i++) MBasicBlock * pred = ( * preds ) [ i ] ; if ( * createdJoinBlock )  if ( ! curBlock_ -> addPredecessor ( alloc ( ) , pred ) )  MBasicBlock * next ; if ( ! newBlock ( pred , & next , pn ) )  pred -> end ( MGoto :: New ( alloc ( ) , next ) ); if ( curBlock_ )  if ( ! next -> addPredecessor ( alloc ( ) , curBlock_ ) )  curBlock_ = next; * createdJoinBlock = true; if ( ! mirGen_ -> ensureBallast ( ) )  