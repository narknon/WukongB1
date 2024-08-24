#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HelloUTestComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHelloUTestComp : public UActorComponent {
    GENERATED_BODY()
public:
    UHelloUTestComp(const FObjectInitializer& ObjectInitializer);

};

