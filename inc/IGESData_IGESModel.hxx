// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_IGESModel_HeaderFile
#define _IGESData_IGESModel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _IGESData_GlobalSection_HeaderFile
#include <IGESData_GlobalSection.hxx>
#endif
#ifndef _Interface_InterfaceModel_HeaderFile
#include <Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;
class Interface_InterfaceError;
class Message_Messenger;
class IGESData_GlobalSection;
class IGESData_IGESEntity;
class Interface_InterfaceModel;
class Interface_Check;
class Standard_Transient;
class TCollection_HAsciiString;


//! Defines the file header and <br>
//! entities for IGES files. These headers and entities result from <br>
//! a complete data translation using the IGES data exchange processor. <br>
//! Each entity is contained in a single model only and has a <br>
//! unique identifier. You can access this identifier using the method Number. <br>
//! Gives an access to the general data in the Start and the Global <br>
//! sections of an IGES file. <br>
//! The IGES file includes the following sections: <br>
//! -Start, <br>
//! -Global, <br>
//! -Directory Entry, <br>
//! -Parameter Data, <br>
//! -Terminate <br>
class IGESData_IGESModel : public Interface_InterfaceModel {

public:

  
  Standard_EXPORT   IGESData_IGESModel();
  //! Erases all data specific to IGES file Header (Start + Global) <br>
  Standard_EXPORT     void ClearHeader() ;
  //! Prints the IGES file header <br>
//! (Start and Global Sections) to the log file. The integer <br>
//! parameter is intended to be used as a level indicator but is not used at present. <br>
  Standard_EXPORT     void DumpHeader(const Handle(Message_Messenger)& S,const Standard_Integer level = 0) const;
  //! Returns Model's Start Section (list of comment lines) <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString StartSection() const;
  //! Returns the count of recorded Start Lines <br>
  Standard_EXPORT     Standard_Integer NbStartLines() const;
  //! Returns a line from the IGES file <br>
//! Start section by specifying its number. An empty string is <br>
//! returned if the number given is out of range, the range being <br>
//! from 1 to NbStartLines. <br>
  Standard_EXPORT     Standard_CString StartLine(const Standard_Integer num) const;
  //! Clears the IGES file Start Section <br>
  Standard_EXPORT     void ClearStartSection() ;
  //! Sets a new Start section from a list of strings. <br>
//! If copy is false, the Start section will be shared. Any <br>
//! modifications made to the strings later on, will have an effect on <br>
//! the Start section. If copy is true (default value), <br>
//! an independent copy of the strings is created and used as <br>
//! the Start section. Any modifications made to the strings <br>
//! later on, will have no effect on the Start section. <br>
  Standard_EXPORT     void SetStartSection(const Handle(TColStd_HSequenceOfHAsciiString)& list,const Standard_Boolean copy = Standard_True) ;
  //! Adds a new string to the existing <br>
//! Start section at the end if atnum is 0 or not given, or before <br>
//! atnumth line. <br>
  Standard_EXPORT     void AddStartLine(const Standard_CString line,const Standard_Integer atnum = 0) ;
  //! Returns the Global section of the IGES file. <br>
  Standard_EXPORT    const IGESData_GlobalSection& GlobalSection() const;
  //! Sets the Global section of the IGES file. <br>
  Standard_EXPORT     void SetGlobalSection(const IGESData_GlobalSection& header) ;
  //! Sets some of the Global section <br>
//! parameters with the values defined by the translation <br>
//! parameters. param may be: <br>
//! - receiver (value read in XSTEP.iges.header.receiver), <br>
//! - author (value read in XSTEP.iges.header.author), <br>
//! - company (value read in XSTEP.iges.header.company). <br>
//!   The default value for param is an empty string. <br>
//! Returns True when done and if param is given, False if param is <br>
//! unknown or empty. Note: Set the unit in the IGES <br>
//! file Global section via IGESData_BasicEditor class. <br>
  Standard_EXPORT     Standard_Boolean ApplyStatic(const Standard_CString param = "") ;
  //!  Returns an IGES entity given by its rank number. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Entity(const Standard_Integer num) const;
  //! Returns the equivalent DE Number for an Entity, i.e. <br>
//!           2*Number(ent)-1 , or 0 if <ent> is unknown from <me> <br>
//!           This DE Number is used for File Writing for instance <br>
  Standard_EXPORT     Standard_Integer DNum(const Handle(IGESData_IGESEntity)& ent) const;
  //! gets Header (GlobalSection) from another Model <br>
  Standard_EXPORT     void GetFromAnother(const Handle(Interface_InterfaceModel)& other) ;
  //! Returns a New Empty Model, same type as <me> i.e. IGESModel <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel NewEmptyModel() const;
  //! Checks that the IGES file Global <br>
//! section contains valid data that conforms to the IGES specifications. <br>
  Standard_EXPORT   virtual  void VerifyCheck(Handle(Interface_Check)& ach) const;
  //! Sets LineWeights of contained Entities according header data <br>
//!           (MaxLineWeight and LineWeightGrad) or to a default value for <br>
//!           undefined weights <br>
  Standard_EXPORT     void SetLineWeights(const Standard_Real defw) ;
  //! erases specific labels, i.e. does nothing <br>
  Standard_EXPORT     void ClearLabels() ;
  //! Prints label specific to IGES norm for a given entity, i.e. <br>
//!           its directory entry number (2*Number-1) <br>
  Standard_EXPORT     void PrintLabel(const Handle(Standard_Transient)& ent,const Handle(Message_Messenger)& S) const;
  //! Prints label specific to IGES norm  for a given -- -- <br>
//!          entity,  i.e.  its directory entry number (2*Number-1) <br>
//!          in the log file format. <br>
  Standard_EXPORT   virtual  void PrintToLog(const Handle(Standard_Transient)& ent,const Handle(Message_Messenger)& S) const;
  //! Prints label specific to IGES norm for a given entity, i.e. <br>
//!           its directory entry number (2*Number-1) <br>
  Standard_EXPORT     void PrintInfo(const Handle(Standard_Transient)& ent,const Handle(Message_Messenger)& S) const;
  //! Returns a string with the label attached to a given entity, <br>
//!           i.e. a string "Dnn" with nn = directory entry number (2*N-1) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString StringLabel(const Handle(Standard_Transient)& ent) const;




  DEFINE_STANDARD_RTTI(IGESData_IGESModel)

protected:




private: 


Handle_TColStd_HSequenceOfHAsciiString thestart;
IGESData_GlobalSection theheader;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif