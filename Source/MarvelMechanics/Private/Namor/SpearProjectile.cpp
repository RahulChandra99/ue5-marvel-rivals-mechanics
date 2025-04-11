// Fill out your copyright notice in the Description page of Project Settings.


#include "Namor/SpearProjectile.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpearProjectile::ASpearProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpearMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpearMesh"));
	RootComponent = SpearMeshComponent;
	SpearMeshComponent->SetNotifyRigidBodyCollision(true);
	SpearMeshComponent->SetGenerateOverlapEvents(true);
	SpearMeshComponent->OnComponentHit.AddDynamic(this, &ASpearProjectile::OnHit);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->InitialSpeed = 1500.0f;
	ProjectileMovement->MaxSpeed = 1500.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->ProjectileGravityScale = 0.5f;
}

// Called when the game starts or when spawned
void ASpearProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpearProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpearProjectile::FireInDirection(const FVector& Direction)
{
	ProjectileMovement->Velocity = Direction * ProjectileMovement->InitialSpeed;
}

void ASpearProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                             FVector NormalImpulse, const FHitResult& Hit)
{
	if(OtherActor && OtherActor != this)
	{
		UGameplayStatics::ApplyDamage(OtherActor,50.f, nullptr,this,nullptr );
		Destroy();
	}
}

