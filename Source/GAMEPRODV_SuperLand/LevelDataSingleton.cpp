// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelDataSingleton.h"

ULevelDataSingleton::ULevelDataSingleton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	fSegmentSpawnHeight = -100.f;

	fSegmentSpawnDuration = 1.f;
}


