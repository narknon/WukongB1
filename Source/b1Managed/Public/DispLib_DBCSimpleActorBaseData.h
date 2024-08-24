#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "DispLib_DBCSimpleActorBaseData.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDispLib_DBCSimpleActorBaseData : public UBaseActorComp {
    GENERATED_BODY()
public:
    UDispLib_DBCSimpleActorBaseData(const FObjectInitializer& ObjectInitializer);

};

