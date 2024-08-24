#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BGU_DispLibUComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGU_DispLibUComponentBase : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBGU_DispLibUComponentBase(const FObjectInitializer& ObjectInitializer);

};

