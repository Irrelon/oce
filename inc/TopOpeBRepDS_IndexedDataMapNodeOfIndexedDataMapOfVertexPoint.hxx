// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint_HeaderFile
#define _TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint_HeaderFile
#include <Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_Point_HeaderFile
#include <TopOpeBRepDS_Point.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepDS_Point;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_IndexedDataMapOfVertexPoint;



class TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint : public TCollection_MapNode {

public:

  
      TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint(const TopoDS_Shape& K1,const Standard_Integer K2,const TopOpeBRepDS_Point& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        TopoDS_Shape& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        TopOpeBRepDS_Point& Value() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint)

protected:




private: 


TopoDS_Shape myKey1;
Standard_Integer myKey2;
TopOpeBRepDS_Point myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopOpeBRepDS_Point
#define TheItem_hxx <TopOpeBRepDS_Point.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint
#define TCollection_IndexedDataMapNode_hxx <TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint
#define TCollection_IndexedDataMapNode_Type_() TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfVertexPoint_Type_()
#define TCollection_IndexedDataMap TopOpeBRepDS_IndexedDataMapOfVertexPoint
#define TCollection_IndexedDataMap_hxx <TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx>

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