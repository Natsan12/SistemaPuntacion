// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Coins.generated.h"
UENUM(BlueprintType)
enum ETipoMoneda
{
	Oro UMETA(DisplayName = "Oro"),
	Plata UMETA(DisplayName = "Plata"),
	Bronce UMETA(DisplayName = "Bronce"),
};

USTRUCT(BlueprintType)

struct FCoinsType

{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	float valor;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<ETipoMoneda> type;

};
/**
* 
 * 
 */
UCLASS()
class SISTEMAPUNTACION_API ACoins : public ACollectable
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	FCoinsType Moneda;
	
};
