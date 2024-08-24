#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorComponentCS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNREALEXTENT_API UActorComponentCS : public UActorComponent {
    GENERATED_BODY()
public:
    UActorComponentCS(const FObjectInitializer& ObjectInitializer);

};

