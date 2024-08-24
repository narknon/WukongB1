#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DummyActorComponentBeginPlay1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentBeginPlay1 : public UActorComponent {
    GENERATED_BODY()
public:
    UDummyActorComponentBeginPlay1(const FObjectInitializer& ObjectInitializer);

};

