// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GoblinGliderCharacter.h"

// Sets default values
AGoblinGliderCharacter::AGoblinGliderCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGoblinGliderCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGoblinGliderCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGoblinGliderCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

