// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockSegment.generated.h"

UCLASS()
class GAMEPRODV_SUPERLAND_API ABlockSegment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockSegment();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	bool bIsBlockEnabled;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* smBlockMesh;

	UFUNCTION()
	void SetRootPosition(FVector NewPostion);

	UFUNCTION()
	FVector GetRootPosition();

	UFUNCTION()
	void SetBlockEnabled(bool Value);

private:
	void UpdatePositionToRootPosition();

	FVector* fvRootPosition;
	FVector* fvPreviousRootPosition;
};
