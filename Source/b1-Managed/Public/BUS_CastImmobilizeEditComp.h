#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_CastImmobilizeEditComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_CastImmobilizeEditComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UBUS_CastImmobilizeEditComp(const FObjectInitializer& ObjectInitializer);

};

