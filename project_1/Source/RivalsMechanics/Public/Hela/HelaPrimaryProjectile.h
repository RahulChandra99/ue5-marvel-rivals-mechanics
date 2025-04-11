// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelaPrimaryProjectile.generated.h"

UCLASS()
class RIVALSMECHANICS_API AHelaPrimaryProjectile : public AActor
{
	GENERATED_BODY()

	
	
public:	
	// Sets default values for this actor's properties
	AHelaPrimaryProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UProjectileMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UParticleSystemComponent* ParticleSystemComponent;

	UPROPERTY(EditAnywhere,Category="Configurations")
	USoundBase* MuzzleSound;

	

	

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	

};
