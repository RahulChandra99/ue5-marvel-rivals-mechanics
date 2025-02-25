// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/RobotAI.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

void ARobotAI::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	
	/*if(AIBehavior != nullptr && IsValid(PlayerPawn))
	{
		RunBehaviorTree(AIBehavior);
		
	}*/
	

}

void ARobotAI::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(IsValid(PlayerPawn))
	{
		//SetFocus(PlayerPawn);
		
		/*if(LineOfSightTo(PlayerPawn))
		{
			//setting the player location
			GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
			//setting the last known
			GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
		}
		else
		{
			//clear player location
			GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
		}*/
	}
	
	
}
