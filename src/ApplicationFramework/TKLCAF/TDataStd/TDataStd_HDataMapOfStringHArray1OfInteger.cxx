// Created on: 2007-08-17
// Created by: Sergey ZARITCHNY
// Copyright (c) 2007-2014 OPEN CASCADE SAS
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

#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>

#include <Standard_Type.hxx>

IMPLEMENT_STANDARD_RTTIEXT(TDataStd_HDataMapOfStringHArray1OfInteger, Standard_Transient)

//=======================================================================
// function : TDataStd_HDataMapOfStringHArray1OfInteger
// purpose  : Constructor of empty map
//=======================================================================
TDataStd_HDataMapOfStringHArray1OfInteger::TDataStd_HDataMapOfStringHArray1OfInteger(
  const Standard_Integer NbBuckets)
{
  myMap.ReSize(NbBuckets);
}

//=======================================================================
// function : TDataStd_HDataMapOfStringHArray1OfInteger
// purpose  : Constructor from already existing map; performs copying
//=======================================================================
TDataStd_HDataMapOfStringHArray1OfInteger::TDataStd_HDataMapOfStringHArray1OfInteger(
  const TDataStd_DataMapOfStringHArray1OfInteger& theOther)
{
  myMap.Assign(theOther);
}
