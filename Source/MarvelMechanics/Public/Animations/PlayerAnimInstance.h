// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MARVELMECHANICS_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentSpeed = 0.f;

	UFUNCTION(BlueprintCallable)
	void UpdateSpeed();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInCombat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentDirection = 0.f;

	UFUNCTION(BlueprintCallable)
	void HandleUpdatedTarget(AActor* NewTargetActorRef);

	UFUNCTION(BlueprintCallable)
	void UpdateDirection();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsFalling;

	UFUNCTION(BlueprintCallable)
	void SetIsFalling();

public:

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTtime);

	virtual void NativeInitializeAnimation() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	class APlayerCharacterBase* PCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float MovementOffsetYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	FVector PlayerVelocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsAccelerating;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsCrouched;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player|Movement", meta = (AllowPrivateAccess = true))
	bool bIsWalking;
	
};
