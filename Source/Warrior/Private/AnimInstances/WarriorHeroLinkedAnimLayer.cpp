// Sean Plumridge All Rights Reserved


#include "AnimInstances/WarriorHeroLinkedAnimLayer.h"
#include "AnimInstances/WarriorHeroAnimInstance.h"


UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
    return Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
