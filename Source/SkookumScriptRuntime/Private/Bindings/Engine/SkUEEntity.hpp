// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//=======================================================================================
// SkookumScript Plugin for Unreal Engine 4
//
// Additional bindings for the Entity (= UObject) class 
//=======================================================================================

#pragma once

//=======================================================================================
// Includes
//=======================================================================================

#include <SkUEEntity.generated.hpp>

//=======================================================================================
// Global Functions
//=======================================================================================

//---------------------------------------------------------------------------------------
// Bindings for the Entity (= UObject) class 
class SkUEEntity_Ext : public SkUEEntity
  {
  public:
    static void register_bindings();
  };

