// Fill out your copyright notice in the Description page of Project Settings.

#include "Punisher/Actors/Gun.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Punisher/Characters/PunisherCharacter.h"

// Sets default values
AGun::AGun()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>("Root");
    RootComponent = Root;

    GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("GunMesh");
    GunMesh->SetupAttachment(Root);
    GunMesh->SetVisibility(false);

    // Initialize variables
    bIsReloading = false;
    bIsAttackOnCooldown = false;
    Ammunition = 30;
    FireRate = 0.2f; // Adjust the fire rate as needed
    DamageDone = 10.f;
    MaxRange = 1000.f;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
    Super::BeginPlay();

    bIsReloading = false;
    Ammunition = 30;
    bIsAttackOnCooldown = false;
    
   
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // No reload logic in Tick; handled via explicit ReloadPrimary or when out of ammo.
}

void AGun::PullTrigger()
{
    if (bIsAttackOnCooldown || bIsReloading)
        return;

    if (Ammunition > 0)
    {
        // Start the timer for continuous fire
        GetWorldTimerManager().SetTimer(
            TimerHandle_PrimaryAttack,
            this,
            &AGun::PrimaryAttack_TimeElapsed,
            FireRate,
            true // Looping
        );
    }
    else
    {
        // Trigger reload if out of ammunition
        ReloadPrimary();
    }
}

void AGun::ReleaseTrigger()
{
    // Stop the continuous fire timer
    GetWorldTimerManager().ClearTimer(TimerHandle_PrimaryAttack);
}

void AGun::PrimaryAttack_TimeElapsed()
{
    if (Ammunition <= 0)
    {
        ReleaseTrigger(); // Stop firing if out of ammo
        ReloadPrimary();  // Trigger reload
        return;
    }

    APunisherCharacter* MyCharacter = Cast<APunisherCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (MyCharacter && MyCharacter->GetMesh())
    {
        USkeletalMeshComponent* Mesh = MyCharacter->GetMesh();
        // Spawn muzzle flash and sound
        UGameplayStatics::SpawnEmitterAttached(
            MuzzleFlash,
            Mesh,
            TEXT("Muzzle"),
            FVector::ZeroVector,
            FRotator(0.f, 0.f, 0.f),
            FVector(0.2f, 0.2f, 0.2f),
            EAttachLocation::KeepRelativeOffset,
            true
        );
    }
    
    UGameplayStatics::SpawnSoundAttached(
        MuzzleSound,
        GunMesh,
        TEXT("b_gun_muzzleflash")
    );

    // Decrease ammunition
    Ammunition--;

    // Perform line trace and damage logic
    APawn* OwnerPawnRef = Cast<APawn>(GetOwner());
    if (!IsValid(OwnerPawnRef)) return;

    AController* OwnerControllerRef = OwnerPawnRef->GetController();
    if (!IsValid(OwnerControllerRef)) return;

    FVector Location;
    FRotator Rotation;
    OwnerControllerRef->GetPlayerViewPoint(Location, Rotation);

    FVector EndPoint = Location + Rotation.Vector() * MaxRange;

    FHitResult Hit;
    bool bIsPointHit = GetWorld()->LineTraceSingleByChannel(
        Hit,
        Location,
        EndPoint,
        ECC_GameTraceChannel2
    );

    if (!bIsPointHit) return;
    FVector ShotDirection = -Rotation.Vector();
    UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
    UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

    AActor* HitActor = Hit.GetActor();
    if (!IsValid(HitActor)) return;
    FPointDamageEvent DamageEvent(DamageDone, Hit, ShotDirection, nullptr);
    HitActor->TakeDamage(DamageDone, DamageEvent, OwnerControllerRef, this);
}

void AGun::BigCooldown()
{
    bIsAttackOnCooldown = false;
    bIsReloading = false;
    Ammunition = 30; // Refill ammo after cooldown
}

void AGun::ReloadPrimary()
{
    if (bIsReloading || bIsAttackOnCooldown)
        return;

    bIsReloading = true;
    bIsAttackOnCooldown = true;

    // Set a reload timer
    GetWorldTimerManager().SetTimer(
        TimerHandle_AttackCooldown,
        this,
        &AGun::BigCooldown,
        1.f // Adjust reload duration as needed
    );
}
