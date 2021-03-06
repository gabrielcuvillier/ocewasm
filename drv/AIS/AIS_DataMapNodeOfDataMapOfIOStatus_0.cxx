// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <AIS_DataMapNodeOfDataMapOfIOStatus.hxx>

#include <Standard_Type.hxx>

#include <AIS_InteractiveObject.hxx>
#include <AIS_GlobalStatus.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <AIS_DataMapOfIOStatus.hxx>
#include <AIS_DataMapIteratorOfDataMapOfIOStatus.hxx>

 


IMPLEMENT_STANDARD_TYPE(AIS_DataMapNodeOfDataMapOfIOStatus)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(AIS_DataMapNodeOfDataMapOfIOStatus)


IMPLEMENT_DOWNCAST(AIS_DataMapNodeOfDataMapOfIOStatus,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(AIS_DataMapNodeOfDataMapOfIOStatus)


#define TheKey Handle(AIS_InteractiveObject)
#define TheKey_hxx <AIS_InteractiveObject.hxx>
#define TheItem Handle(AIS_GlobalStatus)
#define TheItem_hxx <AIS_GlobalStatus.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode AIS_DataMapNodeOfDataMapOfIOStatus
#define TCollection_DataMapNode_hxx <AIS_DataMapNodeOfDataMapOfIOStatus.hxx>
#define TCollection_DataMapIterator AIS_DataMapIteratorOfDataMapOfIOStatus
#define TCollection_DataMapIterator_hxx <AIS_DataMapIteratorOfDataMapOfIOStatus.hxx>
#define Handle_TCollection_DataMapNode Handle_AIS_DataMapNodeOfDataMapOfIOStatus
#define TCollection_DataMapNode_Type_() AIS_DataMapNodeOfDataMapOfIOStatus_Type_()
#define TCollection_DataMap AIS_DataMapOfIOStatus
#define TCollection_DataMap_hxx <AIS_DataMapOfIOStatus.hxx>
#include <TCollection_DataMapNode.gxx>

