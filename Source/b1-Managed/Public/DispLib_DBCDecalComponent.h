#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "DispLib_DBCDecalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDispLib_DBCDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UDispLib_DBCDecalComponent(const FObjectInitializer& ObjectInitializer);

};

