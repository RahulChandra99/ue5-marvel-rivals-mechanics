// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnSprintSignature,
	UPlayerActionsComponent,
	OnSprintDelegate,
	float, Cost);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIVALSMECHANICS_API UPlayerActionsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerActionsComponent();

	class IMagix* IMagixRef;

	class UCharacterMovementComponent* CharacterMovementComp;

	ACharacter* CharacterRef;

	UPROPERTY(EditAnywhere)
	float SprintCost = 0.1f;
	
	UPROPERTY(EditAnywhere)
	float SprintSpeed =1000.f;

	UPROPERTY(EditAnywhere)
	float WalkSpeed = 500.f;

	UPROPERTY(BlueprintAssignable)
	FOnSprintSignature OnSprintDelegate;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Sprint();

	UFUNCTION(BlueprintCallable)
	void Walk();
};
