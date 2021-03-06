// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S05_TestingGroundsV4HUD.generated.h"

UCLASS()
class AS05_TestingGroundsV4HUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_TestingGroundsV4HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

