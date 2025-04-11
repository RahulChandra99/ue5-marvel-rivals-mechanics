// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnAttackPerformedSignature,
	UCombatComponent, OnAttackPerformedDelegate,
	float, Amount
);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIVALSMECHANICS_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* OwnerRef;

	UPROPERTY(VisibleAnywhere)
	int ComboCounter = 0;

	UPROPERTY(VisibleAnywhere)
	bool bCanAttack = true;

	UPROPERTY(EditAnywhere)
	float AttackStaminaCost = 5.0f;
	
public:	
	UCombatComponent();

	UPROPERTY(BlueprintAssignable)
	FOnAttackPerformedSignature OnAttackPerformedDelegate;



protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> AttackAnimations;

	UFUNCTION(BlueprintCallable)
	void ComboAttack();

	

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();

	
};
