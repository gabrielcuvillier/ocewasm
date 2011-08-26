// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTools_Modification_HeaderFile
#define _BRepTools_Modification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepTools_Modification_HeaderFile
#include <Handle_BRepTools_Modification.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;


//!  Defines geometric modifications to a shape, i.e. <br>
//! changes to faces, edges and vertices. <br>
class BRepTools_Modification : public MMgt_TShared {

public:

  //! Returns true if the face, F, has been modified. <br>
//! If the face has been modified: <br>
//! - S is the new geometry of the face, <br>
//! - L is its new location, and <br>
//! - Tol is the new tolerance. <br>
//! The flag, RevWires, is set to true when the <br>
//! modification reverses the normal of the surface, (i.e. <br>
//! the wires have to be reversed). <br>
//! The flag, RevFace, is set to true if the orientation of <br>
//! the modified face changes in the shells which contain it. <br>
//! If the face has not been modified this function returns <br>
//! false, and the values of S, L, Tol, RevWires and <br>
//! RevFace are not significant. <br>
  Standard_EXPORT   virtual  Standard_Boolean NewSurface(const TopoDS_Face& F,Handle(Geom_Surface)& S,TopLoc_Location& L,Standard_Real& Tol,Standard_Boolean& RevWires,Standard_Boolean& RevFace)  = 0;
  //! Returns true if the edge, E, has been modified. <br>
//! If the edge has been modified: <br>
//! - C is the new geometry associated with the edge, <br>
//! - L is its new location, and <br>
//! - Tol is the new tolerance. <br>
//!   If the edge has not been modified, this function <br>
//! returns false, and the values of C, L and Tol are not significant. <br>
  Standard_EXPORT   virtual  Standard_Boolean NewCurve(const TopoDS_Edge& E,Handle(Geom_Curve)& C,TopLoc_Location& L,Standard_Real& Tol)  = 0;
  //! Returns true if the vertex V has been modified. <br>
//! If V has been modified: <br>
//! - P is the new geometry of the vertex, and <br>
//! - Tol is the new tolerance. <br>
//!   If the vertex has not been modified this function <br>
//! returns false, and the values of P and Tol are not significant. <br>
  Standard_EXPORT   virtual  Standard_Boolean NewPoint(const TopoDS_Vertex& V,gp_Pnt& P,Standard_Real& Tol)  = 0;
  //! Returns true if the edge, E, has a new curve on <br>
//! surface on the face, F. <br>
//! If a new curve exists: <br>
//! - C is the new geometry of the edge, <br>
//! - L is the new location, and <br>
//! - Tol is the new tolerance. <br>
//!   NewE is the new edge created from E, and NewF is <br>
//! the new face created from F. <br>
//! If there is no new curve on the face, this function <br>
//! returns false, and the values of C, L and Tol are not significant. <br>
  Standard_EXPORT   virtual  Standard_Boolean NewCurve2d(const TopoDS_Edge& E,const TopoDS_Face& F,const TopoDS_Edge& NewE,const TopoDS_Face& NewF,Handle(Geom2d_Curve)& C,Standard_Real& Tol)  = 0;
  //! Returns true if the vertex V has a new parameter on the edge E. <br>
//! If a new parameter exists: <br>
//! - P is the parameter, and <br>
//! - Tol is the new tolerance. <br>
//!   If there is no new parameter this function returns <br>
//! false, and the values of P and Tol are not significant. <br>
  Standard_EXPORT   virtual  Standard_Boolean NewParameter(const TopoDS_Vertex& V,const TopoDS_Edge& E,Standard_Real& P,Standard_Real& Tol)  = 0;
  //! Returns the  continuity of  <NewE> between <NewF1> <br>
//!          and <NewF2>. <br>
//!          <NewE> is the new  edge created from <E>.  <NewF1> <br>
//!          (resp. <NewF2>) is the new  face created from <F1> <br>
//!          (resp. <F2>). <br>
  Standard_EXPORT   virtual  GeomAbs_Shape Continuity(const TopoDS_Edge& E,const TopoDS_Face& F1,const TopoDS_Face& F2,const TopoDS_Edge& NewE,const TopoDS_Face& NewF1,const TopoDS_Face& NewF2)  = 0;




  DEFINE_STANDARD_RTTI(BRepTools_Modification)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif