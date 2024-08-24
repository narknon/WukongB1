#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GSEActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSENGINEEXTENT_API UGSEActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGSEActorComponent(const FObjectInitializer& ObjectInitializer);

};

