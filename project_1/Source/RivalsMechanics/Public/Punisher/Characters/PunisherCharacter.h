// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RivalsMechanics/RivalsMechanicsCharacter.h"
#include "PunisherCharacter.generated.h"

class AGun;
UCLASS()
class RIVALSMECHANICS_API APunisherCharacter : public ARivalsMechanicsCharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	bool bDebugMode;

	APunisherCharacter();
	
	UPROPERTY(BlueprintReadWrite,meta=(AllowPrivateAccess))
	bool bIsHealthLow;

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	/** LMB Primary Attack **/
	UFUNCTION(BlueprintCallable)
	void LMBFireBtnPressed();

	UFUNCTION(BlueprintCallable)
	void LMBFireBtnReleased();

	void LMBPrimaryAttack();

	UFUNCTION(BlueprintCallable)
	void LMBShotGunAttack();
	

	UFUNCTION()
	void StartFireTimer();
	
	UFUNCTION()
	void AutoFireResetTimer();
	
	UFUNCTION(BlueprintCallable)
	void RMBSmokeImpact();

	UFUNCTION(BlueprintCallable)
	void ETurretButton();

	void StartTurretAction();
	
	
	void EndTurretAction();

	UFUNCTION(BlueprintCallable)
	void PreEndTurretAction();

	UFUNCTION(BlueprintCallable)
	void ShiftGrappleHook();

	UFUNCTION()
	bool GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation, float ImpactDistance);

	UFUNCTION(BlueprintCallable)
	int32 GetSMGAmmunition() const { return SMGAmmo;}
	
	UFUNCTION(BlueprintCallable)
	int32 GetShotgunAmmunition() const { return ShotgunAmmo;}

	
	UFUNCTION(BlueprintCallable)
	int32 GetTurretAmmo() const { return TurretAmmo;}
	
	UPROPERTY(EditAnywhere,Category="Configurations")
	USoundBase* DeathSound;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void SwitchWeapon(int KeyPressed);

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MachineGunMesh;
	
	UPROPERTY(EditAnywhere)
	class UCableComponent* GrappleCableMesh;

	UFUNCTION(BlueprintCallable)
	void ReloadGunWrapper();
	void ReloadingGun();
public:
	
	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;

	UFUNCTION(BlueprintPure)
	float GetHealth() const {return Health;}

	UFUNCTION(BlueprintPure)
	float GetMaxHealth() const {return MaxHealth;}
	
	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
	float MaxHealth = 275;

	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
	float Health;

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	UFUNCTION(BlueprintCallable)
	bool GetReloadingStatus() const { return  bIsReloading;}

	UFUNCTION(BlueprintCallable)
	int32 GetActiveWeapon() const { return ActiveWeapon ;}

	UFUNCTION(BlueprintCallable)
	bool GetTurretActiveStatus() const { return bIsTurretActive ;}

	UFUNCTION(BlueprintCallable)
	float GetRMBTimerValue();

	UFUNCTION(BlueprintCallable)
	float GetTurretTimerValue();

	UFUNCTION(BlueprintCallable)
	float GetGrappleTimerValue();

	UFUNCTION(BlueprintCallable)
	bool IsTurretStarted() const {return bCanPlayAnimationForTurret;}
	

private:

	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	class USoundCue* LMBFireSound;

	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* HipFireMontage;

	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* PrimaryImpactParticles;

	//secondary Config
	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
    class USoundWave* LMBPreShotgunFireSound;

	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
	class USoundWave* LMBShotgunFireSound;
    
	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* ShotgunMuzzleFlash;
    
	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* ShotgunImpactParticles;

	//rapple config
	UPROPERTY(EditAnywhere, Category="RappleConfig", meta = (AllowPrivateAccess = "true"))
	float GrappleHookDistance = 4000.f;

	UPROPERTY(EditAnywhere, Category="RappleConfig", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* GrappleAnimMontage;

	UPROPERTY(EditAnywhere, Category="RappleConfig", meta = (AllowPrivateAccess = "true"))
	class USoundWave* GrappleHookRappelSound;
	
	UPROPERTY(EditAnywhere, Category="RappleConfig", meta = (AllowPrivateAccess = "true"))
	class USoundWave* GrappleHookSound;
	
	UPROPERTY(EditAnywhere, Category="RappleConfig", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* GrappleImpactParticles;

	//Smoke Trails for bullets
	UPROPERTY(EditAnywhere, Category="Config", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BeamParticles;

	UPROPERTY(EditAnywhere, Category="SmokeConfig", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* RMBMuzzleFlash;

	UPROPERTY(EditAnywhere, Category="SmokeConfig", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* RMBImpactParticles;
	
	UPROPERTY(EditAnywhere, Category="SmokeConfig", meta = (AllowPrivateAccess = "true"))
	class USoundCue* RMBFireSound;

	UPROPERTY(EditAnywhere, Category="SmokeConfig", meta = (AllowPrivateAccess = "true"))
	float SmokeGrenadeImpactForce = 600.f;

	/**Turret Variables*/
	UPROPERTY(EditAnywhere, Category="TurretConfig", meta = (AllowPrivateAccess = "true"))
	class USoundCue* TurretLMBFireSound;

	UPROPERTY(EditAnywhere, Category="TurretConfig", meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* TurretMuzzleFlash;

	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	class USoundWave* SMGReloadingSound;
	
	UPROPERTY(EditAnywhere, Category="PrimaryConfig", meta = (AllowPrivateAccess = "true"))
	float SMGReloadTime = 3.5f;

	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
	class USoundWave* ShotgunReloadingSound;

	UPROPERTY(EditAnywhere, Category="SecondaryConfig", meta = (AllowPrivateAccess = "true"))
	float ShotgunReloadTime = 3.f;
	
	//check we we can fire primary gun
	bool bShouldFireLMB;
	float AutomaticFireRate;
	FTimerHandle AutoFireTimer;
	bool bIsLMBPressed;

	FTimerHandle ResetSmokeTimer;
	FTimerHandle ResetTurretTimer;
	FTimerHandle ResetGrappleTimer;

	//Weapons Selection
	int32 ActiveWeapon;
	int32 SMGAmmo;
	int32 SMGMaxAmmo;
	int32 ShotgunAmmo;
	int32 ShotgunMaxAmmo;

	//RMB Smoke Timer

	FVector SmokeHitVector;
	bool bCanUseRMB;

	//e turret
	bool bCanUseE;
	bool bCanPlayAnimationForTurret;
	bool bIsTurretActive;
	int32 TurretAmmo;
	int32 TurretMaxAmmo;
	
	FTimerHandle TurretTransitionTimer;
	
	FTimerHandle ReloadTimer;

	void DebugMessage(FString Message) const;

	bool bIsReloading;

	bool bCanGrapple;
	bool bIsGrappling;

	FTimerHandle TimerHandle;

private:
	bool bIsPullingToTarget = false;
	FVector GrappleStartPosition;
	FVector GrappleTargetPosition;
	float GrappleElapsedTime = 0.0f;
	float GrapplePullDuration = 1.0f;

	void UpdateGrapplePull(float DeltaTime);

	bool bCanUseShotgun = true;
	FTimerHandle ShotgunTimerHandle;

	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void AttackAI(AActor* Target, float DamageAmount);
};
