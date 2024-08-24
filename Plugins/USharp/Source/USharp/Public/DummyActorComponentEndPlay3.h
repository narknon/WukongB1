#pragma once
#include "CoreMinimal.h"
#include "DummyActorComponentEndPlay2.h"
#include "DummyActorComponentEndPlay3.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentEndPlay3 : public UDummyActorComponentEndPlay2 {
    GENERATED_BODY()
public:
    UDummyActorComponentEndPlay3(const FObjectInitializer& ObjectInitializer);

};

