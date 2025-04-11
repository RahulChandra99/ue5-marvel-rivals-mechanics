

#include "Goblin/GliderActor.h"

#include "Debugger.h"
#include "Components/SphereComponent.h"

AGliderActor::AGliderActor()
{
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* DefaultRootComp = CreateDefaultSubobject<USceneComponent>("DefaultRootComp");
	RootComponent = DefaultRootComp;
	
	GliderMesh = CreateDefaultSubobject<UStaticMeshComponent>("GliderMesh");
	GliderMesh->SetupAttachment(RootComponent);

	InteractionSphereComponent = CreateDefaultSubobject<USphereComponent>("InteractionSphereComponenet");
	InteractionSphereComponent->SetupAttachment(GliderMesh);

	InteractionSphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AGliderActor::OnOverlapBegin);

}

void AGliderActor::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
	Debug::Print("Whats up");
	
}

void AGliderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(GoblinState == EGoblinState::Idle)
	{
		RunningTime += DeltaTime;

		float OffSetZ = FMath::Sin(RunningTime * IdleFloatingSpeed) * IdleFloatAmplitude;

		FVector NewLocation = GetActorLocation();
		NewLocation.Z += OffSetZ;
		SetActorLocation(NewLocation);
	}
	
}

void AGliderActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//enable interaction key and show widget
	Debug::Print("Working");
}

