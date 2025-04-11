// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobotActor.generated.h"

UCLASS()
class RIVALSMECHANICS_API ARobotActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARobotActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* Mesh;
	
	UPROPERTY(EditAnywhere)
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(EditAnywhere)
	USceneComponent* RootComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
