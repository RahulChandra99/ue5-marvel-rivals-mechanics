// Fill out your copyright notice in the Description page of Project Settings.


#include "RobotActor.h"

#include "Components/CapsuleComponent.h"

// Sets default values
ARobotActor::ARobotActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->SetupAttachment(RootComponent);
	
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CapsuleComp);

	

}

// Called when the game starts or when spawned
void ARobotActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobotActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

