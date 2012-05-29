// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2012 OPEN CASCADE SAS
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepFEA_CurveElementEndOffset.ixx>

//=======================================================================
//function : StepFEA_CurveElementEndOffset
//purpose  : 
//=======================================================================

StepFEA_CurveElementEndOffset::StepFEA_CurveElementEndOffset ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::Init (const StepFEA_CurveElementEndCoordinateSystem &aCoordinateSystem,
                                          const Handle(TColStd_HArray1OfReal) &aOffsetVector)
{

  theCoordinateSystem = aCoordinateSystem;

  theOffsetVector = aOffsetVector;
}

//=======================================================================
//function : CoordinateSystem
//purpose  : 
//=======================================================================

StepFEA_CurveElementEndCoordinateSystem StepFEA_CurveElementEndOffset::CoordinateSystem () const
{
  return theCoordinateSystem;
}

//=======================================================================
//function : SetCoordinateSystem
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::SetCoordinateSystem (const StepFEA_CurveElementEndCoordinateSystem &aCoordinateSystem)
{
  theCoordinateSystem = aCoordinateSystem;
}

//=======================================================================
//function : OffsetVector
//purpose  : 
//=======================================================================

Handle(TColStd_HArray1OfReal) StepFEA_CurveElementEndOffset::OffsetVector () const
{
  return theOffsetVector;
}

//=======================================================================
//function : SetOffsetVector
//purpose  : 
//=======================================================================

void StepFEA_CurveElementEndOffset::SetOffsetVector (const Handle(TColStd_HArray1OfReal) &aOffsetVector)
{
  theOffsetVector = aOffsetVector;
}