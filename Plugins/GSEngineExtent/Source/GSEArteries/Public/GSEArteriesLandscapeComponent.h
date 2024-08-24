#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GSEArteriesLandscapeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSEARTERIES_API UGSEArteriesLandscapeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGSEArteriesLandscapeComponent(const FObjectInitializer& ObjectInitializer);

};

