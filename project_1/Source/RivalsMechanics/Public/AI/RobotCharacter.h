// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RobotCharacter.generated.h"

UCLASS()
class RIVALSMECHANICS_API ARobotCharacter : public ACharacter
{
	GENERATED_BODY()

	
public:
	// Sets default values for this character's properties
	ARobotCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Function to apply damage to the AI
	UFUNCTION(BlueprintCallable, Category = "AI")
	void TakeDamageFromPlayer(float DamageAmount);

	// Check if AI is dead
	UFUNCTION(BlueprintPure, Category = "AI")
	bool IsDead() const;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* DeathMontage;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float Health;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float MaxHealth = 250;
	

	UFUNCTION(BlueprintCallable)
	float GetHealthPerc() const { return Health/MaxHealth; }
	

};
