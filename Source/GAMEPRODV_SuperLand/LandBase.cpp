// Fill out your copyright notice in the Description page of Project Settings.

#include "LandBase.h"


// Sets default values
ALandBase::ALandBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	topSegment = CreateDefaultSubobject<UChildActorComponent>("TopSegment");
	bottomSegment = CreateDefaultSubobject<UChildActorComponent>("BottomSegment");

}

// Called when the game starts or when spawned
void ALandBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALandBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

