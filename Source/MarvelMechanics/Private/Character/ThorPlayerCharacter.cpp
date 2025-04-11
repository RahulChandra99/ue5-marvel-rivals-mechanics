// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ThorPlayerCharacter.h"

AThorPlayerCharacter::AThorPlayerCharacter()
{
		HammerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HammerMesh"));
		HammerMesh->SetupAttachment(GetMesh(), TEXT("HammerSocket"));
}
