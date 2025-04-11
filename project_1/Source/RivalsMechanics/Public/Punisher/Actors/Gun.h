// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class RIVALSMECHANICS_API AGun : public AActor
{
	GENERATED_BODY()
	
private:
	// Sets default values for this actor's properties
	AGun();
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* GunMesh;

	UPROPERTY(EditAnywhere,Category="Configurations")
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere,Category="Configurations")
	USoundBase* MuzzleSound;

	UPROPERTY(EditAnywhere,Category="Configurations")
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere,Category="Configurations")
	USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere,Category="Configurations")
	float MaxRange = 100.f;

	UPROPERTY(EditAnywhere, Category="Configurations")
	float DamageDone = 10.f;

	UPROPERTY(EditAnywhere, Category="Configurations")
	float FireRate = 0.2f;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Configurations")
	int Ammunition = 8;

	void ReloadPrimary();
	void ReleaseTrigger();
	void PullTrigger();
	
	void PrimaryAttack_TimeElapsed();
	FTimerHandle TimerHandle_PrimaryAttack;
	FTimerHandle TimerHandle_AttackCooldown;
	void BigCooldown();
	bool bIsAttackOnCooldown;
	
	
	UPROPERTY(BlueprintReadWrite, Category="Attack")
	bool bIsReloading;
};
