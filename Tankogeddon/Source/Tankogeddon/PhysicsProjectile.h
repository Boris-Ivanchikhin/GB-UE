
#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "DrawDebugHelpers.h"
#include "TankPhysicsComponent.h"

#include "PhysicsProjectile.generated.h"


UCLASS()
class TANKOGEDDON_API APhysicsProjectile : public AProjectile
{

	GENERATED_BODY()

protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UTankPhysicsComponent* PhysicsComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UParticleSystemComponent* TrailEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
		float MoveAccurency = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category =
		"Movement|Trajectory")
		float TrajectorySimulationMaxTime = 50;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category =
		"Movement|Trajectory")
		float TrajectorySimulationTimeStep = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category =
		"Movement|Trajectory")
		float TrajectorySimulationSpeed = 20;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category =
		"Movement|Trajectory")
		bool ShowTrajectory = false;

	UPROPERTY(BlueprintReadWrite, Category = "Movement params")
		FVector MoveVector;

	UPROPERTY(BlueprintReadWrite, Category = "Movement params")
		TArray<FVector> CurrentTrajectory;

	UPROPERTY(BlueprintReadWrite, Category = "Movement params")
		int32 TragectoryPointIndex;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	//	float ExplodeRadius = 1000.0f;

public:

	APhysicsProjectile();
		
	virtual void Start() override;

protected:

	virtual void Move() override;
	//virtual void Explode() override;
	
};
