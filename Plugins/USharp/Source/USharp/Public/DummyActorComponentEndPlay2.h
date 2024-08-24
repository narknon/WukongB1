#pragma once
#include "CoreMinimal.h"
#include "DummyActorComponentEndPlay1.h"
#include "DummyActorComponentEndPlay2.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHARP_API UDummyActorComponentEndPlay2 : public UDummyActorComponentEndPlay1 {
    GENERATED_BODY()
public:
    UDummyActorComponentEndPlay2(const FObjectInitializer& ObjectInitializer);

};

