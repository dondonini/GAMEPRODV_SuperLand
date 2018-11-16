// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GAMEPRODV_SuperLandGameModeBase.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Enabled")
	bool bIsBlockEnabled;

	UPROPERTY(EditAnywhere)
	USceneComponent* BlockRoot;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BlockMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Positioning Data")
	FVector fvRootPosition;

	UFUNCTION(BlueprintCallable, Category="Enabled")
	void SetBlockEnabled(bool Value);

	/************************************************************************/
	/* Animating Variables                                                  */
	/************************************************************************/

	UPROPERTY(BlueprintReadWrite, Category = "Positioning Data")
		FVector fvTargetPosition;

	UPROPERTY(BlueprintReadWrite, Category = "Positioning Data")
		bool bTweenFinished = false;

private:

	UFUNCTION()
	void DisableActor(bool toHide);

	/************************************************************************/
	/* References                                                           */
	/************************************************************************/

	//GAMEPRODV_SuperLandGameModeBase gmGameModeBase;
};
