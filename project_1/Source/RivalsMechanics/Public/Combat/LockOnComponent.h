
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockOnComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnUpdatedTargetSignature,
	ULockOnComponent, OnUpdatedTargetDelegate,
	AActor*, NewTargetActorRef
);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIVALSMECHANICS_API ULockOnComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	ACharacter* OwnerRef;
	UPROPERTY()
	APlayerController* Controller;
	UPROPERTY()
	class UCharacterMovementComponent* MovementComp;
	UPROPERTY()
	class USpringArmComponent* SpringArmComp;

public:	
	
	ULockOnComponent();

	UPROPERTY()
	AActor* CurrentTargetActor;

	UPROPERTY(BlueprintAssignable)
	FOnUpdatedTargetSignature OnUpdatedTargetDelegate;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	double BreakDistance = 1000;
	
	void StartLockOn(float DetectRadius = 750.0f);
	void EndLockOn();

	UFUNCTION(BlueprintCallable)
	void ToggleLockOn(float Radius = 750.f);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
