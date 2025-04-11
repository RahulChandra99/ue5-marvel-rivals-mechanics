// Fill out your copyright notice in the Description page of Project Settings.


#include "Namor/NamorCharacter.h"

#include "Namor/SpearProjectile.h"

void ANamorCharacter::ThrowSpear()
{
	
	if(SpearClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Throwing!"));
		FVector MuzzleLocation = GetMesh()->GetSocketLocation("SpearSocket");
		FRotator MuzzleRotation = GetControlRotation();
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = this;

		ASpearProjectile* Spear = GetWorld()->SpawnActor<ASpearProjectile>(SpearClass,
			MuzzleLocation,
			MuzzleRotation,
			SpawnParameters);
		
		if (Spear)
		{
			FVector LaunchDirection = MuzzleRotation.Vector();
			Spear->FireInDirection(LaunchDirection);
		}
	}
}

void ANamorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ThrowSpear", IE_Pressed, this, &ANamorCharacter::ThrowSpear);

}
