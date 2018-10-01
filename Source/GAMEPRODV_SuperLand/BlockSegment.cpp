// Fill out your copyright notice in the Description page of Project Settings.

#include "BlockSegment.h"


// Sets default values
ABlockSegment::ABlockSegment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialization
	bIsBlockEnabled = false;
	*fvRootPosition = GetActorLocation();
}

// Called when the game starts or when spawned
void ABlockSegment::BeginPlay()
{
	Super::BeginPlay();
	
	UpdatePositionToRootPosision();

	// Final updates
	fvPreviousRootPosition = fvRootPosition;
}

// Called every frame
void ABlockSegment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Sets the root position of the entire block
void ABlockSegment::SetRootPosition(FVector NewPosition)
{
	*fvRootPosition = NewPosition;
}

// Returns root position
FVector ABlockSegment::GetRootPosition()
{
	return *fvRootPosition;
}

// Set block to be enabled
void ABlockSegment::SetBlockEnabled(bool Value = true)
{
	
}

// Animate block to position
void ABlockSegment::UpdatePositionToRootPosision()
{
	if (fvRootPosition != fvPreviousRootPosition) return;

	// TODO: Add tween function

	// Temp move script
	SetActorLocation(*fvRootPosition);
}

