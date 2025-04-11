#pragma once

#include "CoreMinimal.h"
#include "RivalsMechanics/RivalsMechanicsCharacter.h"
#include "HelaCharacter.generated.h"

UCLASS()
class RIVALSMECHANICS_API AHelaCharacter : public ARivalsMechanicsCharacter
{
	GENERATED_BODY()

private:
	
	UPROPERTY(VisibleAnywhere)
	float Health;

	UPROPERTY(VisibleAnywhere)
	float MaxHealth;

	bool bIsAttackOnCooldown;

	
	bool bIsReloading;

	FTimerHandle TimerHandle_PrimaryAttack;
	FTimerHandle TimerHandle_AttackCooldown;

	FTimerHandle TimerHandle_EAbility;
	FTimerHandle TimerHandle_RMBAbility;

	void PrimaryAttack_TimeElapsed();
	void MiniCooldown();
	void BigCooldown();

	void EAbility_TimeElapsed();
	void RMBAbility_TimeElapsed();

	
public:
	AHelaCharacter();

	UFUNCTION(BlueprintCallable)
	float GetHealth() const {return Health;}

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const {return MaxHealth;}

	UFUNCTION(BlueprintCallable)
	bool IsHealthLow() const {return bIsHealthLow;}

	UFUNCTION(BlueprintCallable)
	bool IsReloading() const {return bIsReloading;}

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BirdMesh;

	UFUNCTION(BlueprintCallable)
	void TeleportBird();
	
	UFUNCTION(BlueprintCallable)

	void TeleportBirdEnd();
	void TravelMovement(float DeltaTime);

	FTimerHandle ActionTimerHandleStart;
	FTimerHandle ActionTimerHandleEnd;

	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	bool bIsTraveling;
	
	UPROPERTY(EditAnywhere)
	float TravelSpeed = 700.f;

private:
	UPROPERTY(VisibleAnywhere)
	int CurrentMontageIndex;

	UPROPERTY(EditAnywhere, Category = "Config")
	TSubclassOf<AActor> ProjectileClass;
	
	UPROPERTY(EditAnywhere, Category = "Config")
	TSubclassOf<AActor> EAbilityProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Config")
	TSubclassOf<AActor> RMBAbilityProjectileClass;
	
	
	UPROPERTY()
	bool bIsHealthLow;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* PrimaryAttackMontageOne;

	UPROPERTY(EditAnywhere, Category = "Config")
	USoundBase* SFXOne;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* PrimaryAttackMontageTwo;

	UPROPERTY(EditAnywhere, Category = "Config")
	USoundBase* SFXTwo;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* PrimaryAttackMontageThree;

	UPROPERTY(EditAnywhere, Category = "Config")
	USoundBase* SFXThree;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, Category = "Config")
	USoundBase* SFXReload;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* EAbilityMontage;

	UPROPERTY(EditAnywhere, Category = "Config")
	UAnimMontage* RMBAbilityMontage;

	UPROPERTY(EditAnywhere, Category = "Config")
	FName PrimaryAttackSocket;

	UPROPERTY(EditAnywhere, Category = "Config")
	int Ammunition;

	UPROPERTY(EditAnywhere, Category = "Config")
	float MaxRange;

	UPROPERTY(EditAnywhere, Category = "Config")
	float DamageDone;

	UPROPERTY(EditAnywhere, Category = "Config")
	float FireRate;

	UPROPERTY(EditAnywhere, Category = "Config")
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere, Category = "Config")
	USoundBase* ImpactSound;
	

	UPROPERTY()
	APlayerController* PlayerController;

protected:

	UFUNCTION(BlueprintCallable)
	void ReloadPrimary();

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;
	
	UFUNCTION(BlueprintCallable)
	void PrimaryPullTrigger();
	
	UFUNCTION(BlueprintCallable)
	int32 GetPrimaryAmmunition() const;

	UFUNCTION(BlueprintCallable)
	void EAbility();

	UFUNCTION(BlueprintCallable)
	void RMBAbility();

public:

	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
	FHitResult PrimaryHitResult;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

};
