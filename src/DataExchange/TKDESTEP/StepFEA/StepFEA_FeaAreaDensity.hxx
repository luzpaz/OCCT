// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepFEA_FeaAreaDensity_HeaderFile
#define _StepFEA_FeaAreaDensity_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Standard_Real.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
class TCollection_HAsciiString;

class StepFEA_FeaAreaDensity;
DEFINE_STANDARD_HANDLE(StepFEA_FeaAreaDensity, StepFEA_FeaMaterialPropertyRepresentationItem)

//! Representation of STEP entity FeaAreaDensity
class StepFEA_FeaAreaDensity : public StepFEA_FeaMaterialPropertyRepresentationItem
{

public:
  //! Empty constructor
  Standard_EXPORT StepFEA_FeaAreaDensity();

  //! Initialize all fields (own and inherited)
  Standard_EXPORT void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,
                            const Standard_Real                     aFeaConstant);

  //! Returns field FeaConstant
  Standard_EXPORT Standard_Real FeaConstant() const;

  //! Set field FeaConstant
  Standard_EXPORT void SetFeaConstant(const Standard_Real FeaConstant);

  DEFINE_STANDARD_RTTIEXT(StepFEA_FeaAreaDensity, StepFEA_FeaMaterialPropertyRepresentationItem)

protected:
private:
  Standard_Real theFeaConstant;
};

#endif // _StepFEA_FeaAreaDensity_HeaderFile
