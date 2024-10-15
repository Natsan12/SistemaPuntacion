// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Collectable.generated.h"

UCLASS()
class SISTEMAPUNTACION_API ACollectable : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ACollectable();
	UPROPERTY()
	USphereComponent* collider;
	UPROPERTY()
	UStaticMeshComponent* mesh;
	UPROPERTY(BlueprintReadWrite)
	float tiempoDeVida;
	UFUNCTION()
	void Collect();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
