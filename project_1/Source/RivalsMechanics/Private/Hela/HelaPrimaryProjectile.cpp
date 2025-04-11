// Fill out your copyright notice in the Description page of Project Settings.


#include "Hela/HelaPrimaryProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AHelaPrimaryProjectile::AHelaPrimaryProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComponent->SetCollisionProfileName("Projectile");
	RootComponent = SphereComponent;

	ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>("ParticleComp");
	ParticleSystemComponent->SetupAttachment(RootComponent);

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");

	/*MovementComponent->InitialSpeed = 10000.f;
	MovementComponent->bRotationFollowsVelocity = true;
	MovementComponent->bInitialVelocityInLocalSpace = true;
	MovementComponent->ProjectileGravityScale = 0.f;*/

	

}

// Called when the game starts or when spawned
void AHelaPrimaryProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AHelaPrimaryProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


