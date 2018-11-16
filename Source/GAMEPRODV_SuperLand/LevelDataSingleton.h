// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelDataSingleton.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPRODV_SUPERLAND_API ULevelDataSingleton : public UObject
{
	GENERATED_BODY()
	
public:

	ULevelDataSingleton(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Level Data Singleton")
	float fSegmentSpawnHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Level Data Singleton")
	float fSegmentSpawnDuration;

};
