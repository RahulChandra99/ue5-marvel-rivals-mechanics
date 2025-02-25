// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MagixCharacter.h"
#include "Animations/PlayerAnimInstance.h"
#include "Character/StatsComponent.h"
#include "Characters/EStats.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/CombatComponent.h"
#include "Combat/LockOnComponent.h"
#include "Combat/TraceComponent.h"

AMagixCharacter::AMagixCharacter()
{
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockOnComp = CreateDefaultSubobject<ULockOnComponent>(TEXT("LockOn Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	PlayerActionsComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("PlayerActions Component"));
}

void AMagixCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
}

float AMagixCharacter::GetDamage()
{
	return StatsComp->Stats[EStat::Strength];

	
}

bool AMagixCharacter::HasEnoughStamina(float StaminaCost)
{
	return StatsComp->Stats[EStat::Stamina] >= StaminaCost;
}
