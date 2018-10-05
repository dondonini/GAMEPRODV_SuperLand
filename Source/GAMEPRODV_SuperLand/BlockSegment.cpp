// Fill out your copyright notice in the Description page of Project Settings.

#include "BlockSegment.h"


// Sets default values
ABlockSegment::ABlockSegment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialization
	bIsBlockEnabled = false;
	
	// Set root position to current position
	FVector pos = this->GetActorLocation();
	fvRootPosition = &pos;
	fvPreviousRootPosition = new FVector(0.f, 0.f, 0.f);

}

// Called when the game starts or when spawned
void ABlockSegment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockSegment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	fvPreviousRootPosition = fvRootPosition;
}

void ABlockSegment::SetRootPosition(FVector NewPostion)
{
	fvRootPosition = &NewPostion;
}

FVector ABlockSegment::GetRootPosition()
{
	return *fvRootPosition;
}

void ABlockSegment::SetBlockEnabled(bool Value = true)
{
	bIsBlockEnabled = Value;
}

void ABlockSegment::UpdatePositionToRootPosition()
{
	if (fvRootPosition != fvPreviousRootPosition) return;

	// TODO: Add tween function

	this->SetActorLocation(*fvRootPosition);
}

