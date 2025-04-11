// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PunisherAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class RIVALSMECHANICS_API UPunisherAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	class APunisherCharacter* PunisherCharacter;

	//Speed of the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	float Speed;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	bool bIsInAir;

	//Whether character is moving or not
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	bool bIsAccelerating;

	//offset yaw used for strafing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	float MovementOffsetYaw;

	//offset yaw for frame before we stop moving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta=(AllowPrivateAccess = "true"))
	float LastMovementOffsetYaw;
	
	

public:

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);
	
	virtual void NativeInitializeAnimation() override;
	
};
