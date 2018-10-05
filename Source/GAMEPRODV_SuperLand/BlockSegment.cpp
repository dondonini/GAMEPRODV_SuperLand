// Fill out your copyright notice in the Description page of Project Settings.

#include "BlockSegment.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABlockSegment::ABlockSegment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//// Initialization
	bIsBlockEnabled = false;

	// Creating root component
	BlockRoot = CreateDefaultSubobject<USceneComponent>("BlockRoot");
	RootComponent = BlockRoot;

	// Creating block mesh and attaching it to the root component
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>("BlockMesh");
	BlockMesh->AttachToComponent(BlockRoot, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void ABlockSegment::BeginPlay()
{
	Super::BeginPlay();
	
	// Set root position to current position
	FVector pos = this->GetActorLocation();
	*fvRootPosition = pos;
	*fvPreviousRootPosition = pos;
}

// Called every frame
void ABlockSegment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	fvPreviousRootPosition = fvRootPosition;
}

/**
 * Sets the target position for the segment and triggers the animation
 * @param NewPosition - New target position
 */
void ABlockSegment::SetRootPosition(FVector NewPostion)
{
	fvRootPosition = &NewPostion;
}

/**
 * Returns the current target position of the segment
 * @return Target segment position
 */
FVector ABlockSegment::GetRootPosition()
{
	return *fvRootPosition;
}

/**
 * Sets the block to appear into the world and triggers the animation
 * @param Value - Enables the segment true/false (Default: true)
 */
void ABlockSegment::SetBlockEnabled(bool Value = true)
{
	bIsBlockEnabled = Value;
}

/**
 * Updates the position via. tweening functions
 */
void ABlockSegment::UpdatePositionToRootPosition()
{
	if (fvRootPosition != fvPreviousRootPosition) return;

	// TODO: Add tween function

	this->SetActorLocation(*fvRootPosition);
}

