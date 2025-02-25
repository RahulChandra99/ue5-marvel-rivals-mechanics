// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TraceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIVALSMECHANICS_API UTraceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UTraceComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalComp;

	UPROPERTY(EditAnywhere)
	FName StartSocketName;

	UPROPERTY(EditAnywhere)
	FName EndSocketName;

	UPROPERTY(EditAnywhere)
	FName RotationName;

	UPROPERTY(EditAnywhere)
	float BoxWidth = 30.f;
	
	UPROPERTY(EditAnywhere)
	float BoxHeight = 30.f;

	UPROPERTY(EditAnywhere)
	bool bDebugMode = false;

	TArray<AActor*> TargetsToIgnore;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();

	UPROPERTY(VisibleAnywhere)
	bool bIsAttacking;
};
