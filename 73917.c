 RestyleManager::ReparentStyleContext(nsIFrame* aFrame) nsStyleContext * oldContext = aFrame -> StyleContext ( ) ; nsRefPtr < nsStyleContext > newContext ; nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; bool isChild = providerFrame && providerFrame -> GetParent ( ) == aFrame ; nsStyleContext * newParentContext = nullptr ; if ( isChild )  newParentContext = providerFrame -> StyleContext ( ); if ( providerFrame )  newParentContext = providerFrame -> StyleContext ( ); nsIFrame * prevContinuation = GetPrevContinuationWithPossiblySameStyle ( aFrame ) ; nsStyleContext * prevContinuationContext ; bool copyFromContinuation = prevContinuation && ( prevContinuationContext = prevContinuation -> StyleContext ( ) ) -> GetPseudo ( ) == oldContext -> GetPseudo ( ) && prevContinuationContext -> GetParent ( ) == newParentContext ; if ( copyFromContinuation )  newContext = prevContinuationContext; nsIFrame * parentFrame = aFrame -> GetParent ( ) ; Element * element = ElementForStyleContext ( parentFrame ? parentFrame -> GetContent ( ) : nullptr , aFrame , oldContext -> GetPseudoType ( ) ) ; nsIContent * pseudoElementContent = aFrame -> GetContent ( ) ; Element * pseudoElement = ( pseudoElementContent && pseudoElementContent -> IsElement ( ) ) ? pseudoElementContent -> AsElement ( ) : nullptr ; newContext = mPresContext -> StyleSet ( ) -> ReparentStyleContext ( oldContext , newParentContext , element , pseudoElement ); if ( newContext )  if ( newContext != oldContext )  VerifyStyleTree ( mPresContext , aFrame , newParentContext ); static VerifyStyleTree(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aParentContext) nsStyleContext * context = aFrame -> StyleContext ( ) ; VerifyContextParent ( aPresContext , aFrame , context , nullptr ); static VerifyContextParent(nsPresContext* aPresContext, nsIFrame* nsStyleContext* aContext, nsStyleContext* aParentContext) if ( ! aContext )  aContext = aFrame -> StyleContext ( ); if ( ! aParentContext )  nsIFrame * providerFrame = aFrame -> GetParentStyleContextFrame ( ) ; if ( providerFrame )  aParentContext = providerFrame -> StyleContext ( ); nsStyleContext * actualParentContext = aContext -> GetParent ( ) ; if ( aParentContext )  if ( actualParentContext )  DumpContext ( nullptr , actualParentContext ); static DumpContext(nsIFrame* aFrame, nsStyleContext* aContext) if ( aFrame )  fprintf ( stdout , " (%p)" , static_cast < void * > ( aFrame ) ) if ( aContext )  fprintf ( stdout , " style: %p " , static_cast < void * > ( aContext ) ) nsIAtom * pseudoTag = aContext -> GetPseudo ( ) ; if ( pseudoTag )  nsAutoString buffer ; fputs ( NS_LossyConvertUTF16toASCII ( buffer ) . get ( ) , stdout ); 