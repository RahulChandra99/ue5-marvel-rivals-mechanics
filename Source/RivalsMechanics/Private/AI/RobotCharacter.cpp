// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/RobotCharacter.h"

// Sets default values
ARobotCharacter::ARobotCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = MaxHealth;

}

// Called when the game starts or when spawned
void ARobotCharacter::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
	
}

// Called every frame
void ARobotCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobotCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Take damage from the player
void ARobotCharacter::TakeDamageFromPlayer(float DamageAmount)
{
	if (Health <= 0.f) return; // Prevent applying damage if AI is already dead

	Health -= DamageAmount;

	if (Health <= 0.f)
	{
		Health = 0.f;

		// Trigger AI death behavior
		if(DeathMontage)
			PlayAnimMontage(DeathMontage);
		
		Destroy(); // Destroy the AI actor
	}
}

// Check if AI is dead
bool ARobotCharacter::IsDead() const
{
	return Health <= 0.f;
}



