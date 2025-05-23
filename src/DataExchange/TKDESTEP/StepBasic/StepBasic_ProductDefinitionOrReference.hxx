// Created on: 2016-03-31
// Created by: Irina KRYLOVA
// Copyright (c) 2016 OPEN CASCADE SAS
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

#ifndef _StepBasic_ProductDefinitionOrReference_HeaderFile
#define _StepBasic_ProductDefinitionOrReference_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
class Standard_Transient;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionReference;
class StepBasic_ProductDefinitionReferenceWithLocalRepresentation;

class StepBasic_ProductDefinitionOrReference : public StepData_SelectType
{
public:
  DEFINE_STANDARD_ALLOC

  //! Returns a ProductDefinitionOrReference SelectType
  Standard_EXPORT StepBasic_ProductDefinitionOrReference();

  //! Recognizes a ProductDefinitionOrReference Kind Entity that is :
  //! 1 -> ProductDefinition
  //! 2 -> ProductDefinitionReference
  //! 3 -> ProductDefinitionReferenceWithLocalPresentation
  //! 0 else
  Standard_EXPORT Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;

  //! returns Value as a ProductDefinition (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinition) ProductDefinition() const;

  //! returns Value as a ProductDefinitionReference (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinitionReference) ProductDefinitionReference() const;

  //! returns Value as a ProductDefinitionReferenceWithLocalRepresentation (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinitionReferenceWithLocalRepresentation)
    ProductDefinitionReferenceWithLocalRepresentation() const;
};
#endif // _StepBasic_ProductDefinitionOrReference_HeaderFile
