// Created on: 2005-04-18
// Created by: Eugeny NAPALKOV
// Copyright (c) 2005-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.



#include <BinMXCAFDoc.ixx>

#include <BinMXCAFDoc_AreaDriver.hxx>
#include <BinMXCAFDoc_CentroidDriver.hxx>
#include <BinMXCAFDoc_ColorDriver.hxx>
#include <BinMXCAFDoc_GraphNodeDriver.hxx>
#include <BinMXCAFDoc_LocationDriver.hxx>
#include <BinMXCAFDoc_VolumeDriver.hxx>
#include <BinMXCAFDoc_DatumDriver.hxx>
#include <BinMXCAFDoc_DimTolDriver.hxx>
#include <BinMXCAFDoc_MaterialDriver.hxx>

#include <BinMXCAFDoc_ColorToolDriver.hxx>
#include <BinMXCAFDoc_DocumentToolDriver.hxx>
#include <BinMXCAFDoc_LayerToolDriver.hxx>
#include <BinMXCAFDoc_ShapeToolDriver.hxx>
#include <BinMXCAFDoc_DimTolToolDriver.hxx>
#include <BinMXCAFDoc_MaterialToolDriver.hxx>

#include <BinMNaming_NamedShapeDriver.hxx>
#include <TNaming_NamedShape.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc::AddDrivers(const Handle(BinMDF_ADriverTable)& theDriverTable,
			     const Handle(CDM_MessageDriver)& theMsgDrv) {
  theDriverTable->AddDriver( new BinMXCAFDoc_AreaDriver     (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_CentroidDriver (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_ColorDriver    (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_GraphNodeDriver(theMsgDrv));
  
  //oan: changes for sharing locations map
  Handle(BinMNaming_NamedShapeDriver) aNamedShapeDriver;
  theDriverTable->GetDriver(STANDARD_TYPE(TNaming_NamedShape), aNamedShapeDriver);
  
  Handle(BinMXCAFDoc_LocationDriver) aLocationDriver = new BinMXCAFDoc_LocationDriver (theMsgDrv);
  if( !aNamedShapeDriver.IsNull() )
  {
    aLocationDriver->SetSharedLocations( &(aNamedShapeDriver->GetShapesLocations()) );
  }
  
  theDriverTable->AddDriver( aLocationDriver);
  theDriverTable->AddDriver( new BinMXCAFDoc_VolumeDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DatumDriver    (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DimTolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_MaterialDriver (theMsgDrv));

  theDriverTable->AddDriver( new BinMXCAFDoc_ColorToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DocumentToolDriver(theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_LayerToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_ShapeToolDriver   (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_DimTolToolDriver  (theMsgDrv));
  theDriverTable->AddDriver( new BinMXCAFDoc_MaterialToolDriver(theMsgDrv));
}