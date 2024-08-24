#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DummyActorComponentEndPlay1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentEndPlay1 : public UActorComponent {
    GENERATED_BODY()
public:
    UDummyActorComponentEndPlay1(const FObjectInitializer& ObjectInitializer);

};

