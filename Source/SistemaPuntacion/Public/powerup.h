// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "powerup.generated.h"
UENUM(BlueprintType)
enum EPowerUpType
{ 
	Aire UMETA(DisplayName = "Air"),
	Fuego UMETA(DisplayName = "Fire"),
	Tierra UMETA(DisplayName = "Land"),
	Agua UMETA(DisplayName = "Water"),
};
USTRUCT(BlueprintType)
struct FPowerUpType

{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	float powerLevel;


	UPROPERTY(BlueprintReadWrite)
	float tiempoPoder;
};

/**
 * 
 */
UCLASS()
class SISTEMAPUNTACION_API Apowerup : public ACollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FPowerUpType tipo;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EPowerUpType> Type;
};

