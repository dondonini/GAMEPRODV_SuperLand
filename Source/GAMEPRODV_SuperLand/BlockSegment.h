// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockSegment.generated.h"

UCLASS()
class GAMEPRODV_SUPERLAND_API ABlockSegment : public AActor
{
	GENERATED_BODY()
	
	bool bIsBlockEnabled;
	FVector fvRootPosition;


public:	
	// Sets default values for this actor's properties
	ABlockSegment();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets the root position of the block
	UFUNCTION()
	void SetRootPosition(FVector NewPosition);

	// Gets the root position of the block
	UFUNCTION()
	FVector GetRootPosition();

	// Enabled the block segment
	UFUNCTION()
	void SetBlockEnabled(bool Value);
	
private:
	// Dynamically animates the block to position
	void EaseToPosition();
};
