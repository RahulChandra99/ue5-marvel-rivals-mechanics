// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/Fighter.h"
#include "Interfaces/Magix.h"
#include "RivalsMechanics/RivalsMechanicsCharacter.h"
#include "MagixCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RIVALSMECHANICS_API AMagixCharacter : public ARivalsMechanicsCharacter, public IMagix, public IFighter
{
	GENERATED_BODY()

	AMagixCharacter();
	
protected:

	void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* PlayerAnim;

	//Adding components
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockOnComponent* LockOnComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* PlayerActionsComp;
public:

	virtual float GetDamage() override;

	virtual bool HasEnoughStamina(float StaminaCost) override;
};
