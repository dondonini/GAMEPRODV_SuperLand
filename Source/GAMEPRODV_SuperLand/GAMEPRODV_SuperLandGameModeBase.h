// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Libraries/EasingFunctions/easing.h"
#include "GAMEPRODV_SuperLandGameModeBase.generated.h"

struct TweenData
{
	float tdElaspedTime;
	float tdStartTime;
	float tdDuration;
	FVector* tdStartPosition;
	Ease tdFunc;
};

/**
 * 
 */
UCLASS()
class GAMEPRODV_SUPERLAND_API AGAMEPRODV_SuperLandGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	float fLandStartPosition;

	AGAMEPRODV_SuperLandGameModeBase();
	
protected:
	virtual void Tick(float DeltaTime) override;
	
public:

};
