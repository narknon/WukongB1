#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FluidSimulationInteractor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFluidSimulationInteractor : public UActorComponent {
    GENERATED_BODY()
public:
    UFluidSimulationInteractor(const FObjectInitializer& ObjectInitializer);

};

