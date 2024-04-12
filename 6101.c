 nsAttrAndChildArray::InsertChildAt(nsIContent* aChild, uint32_t aPos) uint32_t offset = AttrSlotsSize ( ) ; uint32_t childCount = ChildCount ( ) ; if ( mImpl && offset + childCount < mImpl -> mBufferSize )  if ( offset && ! mImpl -> mBuffer [ offset - ATTRSIZE ] )  uint32_t attrCount = NonMappedAttrCount ( ) ; void * * newStart = mImpl -> mBuffer + attrCount * ATTRSIZE ; void * * oldStart = mImpl -> mBuffer + offset ; memmove ( newStart , oldStart , aPos * sizeof ( nsIContent * ) ); memmove ( & newStart [ aPos + 1 ] , & oldStart [ aPos ] , ( childCount - aPos ) * sizeof ( nsIContent * ) ); SetChildAtPos ( newStart + aPos , aChild , aPos , childCount ); 