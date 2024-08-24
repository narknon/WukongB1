#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGUDropItemActor.generated.h"

UCLASS(Blueprintable)
class ABGUDropItemActor : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    ABGUDropItemActor(const FObjectInitializer& ObjectInitializer);

};

