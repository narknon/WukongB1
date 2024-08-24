#pragma once
#include "CoreMinimal.h"
#include "DummyActorComponentBeginPlay2.h"
#include "DummyActorComponentBeginPlay3.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentBeginPlay3 : public UDummyActorComponentBeginPlay2 {
    GENERATED_BODY()
public:
    UDummyActorComponentBeginPlay3(const FObjectInitializer& ObjectInitializer);

};

