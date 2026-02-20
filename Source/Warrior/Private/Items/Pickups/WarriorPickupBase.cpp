// Sean Plumridge All Rights Reserved


#include "Items/Pickups/WarriorPickupBase.h"
#include "Components/SphereComponent.h"

// Sets default values
AWarriorPickupBase::AWarriorPickupBase()
{
	PrimaryActorTick.bCanEverTick = false;

	PickupCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PickupCollisionSphere"));
	SetRootComponent(PickupCollisionSphere);
	PickupCollisionSphere->InitSphereRadius(50.f);
	PickupCollisionSphere->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnPickupCollisionSphereBeginOverlap);
}

void AWarriorPickupBase::OnPickupCollisionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}



