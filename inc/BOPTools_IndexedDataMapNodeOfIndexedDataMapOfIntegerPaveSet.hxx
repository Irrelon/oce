// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet_HeaderFile
#define _BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet_HeaderFile
#include <Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPTools_PaveSet_HeaderFile
#include <BOPTools_PaveSet.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class BOPTools_PaveSet;
class TColStd_MapIntegerHasher;
class BOPTools_IndexedDataMapOfIntegerPaveSet;



class BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet : public TCollection_MapNode {

public:

  
      BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet(const Standard_Integer& K1,const Standard_Integer K2,const BOPTools_PaveSet& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        Standard_Integer& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        BOPTools_PaveSet& Value() const;




  DEFINE_STANDARD_RTTI(BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet)

protected:




private: 


Standard_Integer myKey1;
Standard_Integer myKey2;
BOPTools_PaveSet myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem BOPTools_PaveSet
#define TheItem_hxx <BOPTools_PaveSet.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_IndexedDataMapNode BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet
#define TCollection_IndexedDataMapNode_hxx <BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet
#define TCollection_IndexedDataMapNode_Type_() BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerPaveSet_Type_()
#define TCollection_IndexedDataMap BOPTools_IndexedDataMapOfIntegerPaveSet
#define TCollection_IndexedDataMap_hxx <BOPTools_IndexedDataMapOfIntegerPaveSet.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif