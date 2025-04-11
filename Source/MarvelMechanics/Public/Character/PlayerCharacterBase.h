// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacterBase.generated.h"

// Forward Declarations
class APWeapon;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class MARVELMECHANICS_API APlayerCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Character Movement
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);
	void SprintStart();
	void SprintEnd();
	void Walk();
	

	// View Location Override
	virtual FVector GetPawnViewLocation() const override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Getters
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArmComp; }
	FORCEINLINE bool GetSprinting() const { return bIsSprinting; }
	FORCEINLINE bool GetWalking() const { return bIsWalking; }


	
private:
	/** Camera Components **/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* TpCameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComp;

	/** Movement Properties **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsWalking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float NormalSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float SprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RCShooter | Movement", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;
	

	
	
};

