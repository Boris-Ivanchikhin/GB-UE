// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankPhysicsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UTankPhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UTankPhysicsComponent() = default;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gravity params")
		float Gravity = -9.8f;

public:

	TArray<FVector> GenerateTrajectory(FVector StartPos, FVector Velocity, float MaxTime, float TimeStep, float MinZValue = 0);
			
};
