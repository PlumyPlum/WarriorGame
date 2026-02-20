// Sean Plumridge All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "WarriorHeroController.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AWarriorHeroController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()	

public:
	AWarriorHeroController();

	//~ Begin IGenericTeamInterface Interface.
	virtual FGenericTeamId GetGenericTeamId() const override;
	//~ Begin IGenericTeamInterface Interface.

private:
	FGenericTeamId HeroTeamID;
};
