
#pragma once

#include "CoreMinimal.h"
#include "EGoblinState.h"
#include "GameFramework/Actor.h"
#include "GliderActor.generated.h"

class USphereComponent;

UCLASS()
class MARVELMECHANICS_API AGliderActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AGliderActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Glider | Components")
	UStaticMeshComponent* GliderMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Glider | Components")
	USphereComponent* InteractionSphereComponent;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Glider | Idle | Settings")
	float IdleFloatingSpeed = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Glider | Idle | Settings")
	float IdleFloatAmplitude = 20.0f;



public:	
	virtual void Tick(float DeltaTime) override;

private:
	float RunningTime = 0.0f;
	FVector StartLocation;

	UPROPERTY(VisibleAnywhere, Category="Glider | Components")
	EGoblinState GoblinState;

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

};
