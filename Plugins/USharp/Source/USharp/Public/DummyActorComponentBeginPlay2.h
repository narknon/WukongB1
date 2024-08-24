#pragma once
#include "CoreMinimal.h"
#include "DummyActorComponentBeginPlay1.h"
#include "DummyActorComponentBeginPlay2.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentBeginPlay2 : public UDummyActorComponentBeginPlay1 {
    GENERATED_BODY()
public:
    UDummyActorComponentBeginPlay2(const FObjectInitializer& ObjectInitializer);

};

