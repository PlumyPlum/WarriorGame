// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorPickupBase.generated.h"

class USphereComponent;

UCLASS()
class WARRIOR_API AWarriorPickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AWarriorPickupBase();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup Interaction")
	USphereComponent* PickupCollisionSphere;

	UFUNCTION()
	virtual void OnPickupCollisionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
