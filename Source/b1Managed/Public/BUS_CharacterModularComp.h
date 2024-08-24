#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BUS_CharacterModularComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CharacterModularComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBUS_CharacterModularComp(const FObjectInitializer& ObjectInitializer);

};

