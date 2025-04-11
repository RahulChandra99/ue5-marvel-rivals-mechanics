// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpearProjectile.generated.h"

class UProjectileMovementComponent;

UCLASS()
class MARVELMECHANICS_API ASpearProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpearProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FireInDirection(const FVector& Direction);

private:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> SpearMeshComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
			   UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
