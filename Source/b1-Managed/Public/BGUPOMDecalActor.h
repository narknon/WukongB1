#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUDecalActor.h"
#include "BGUPOMDecalActor.generated.h"

UCLASS(Blueprintable)
class ABGUPOMDecalActor : public ABGUDecalActor {
    GENERATED_BODY()
public:
    ABGUPOMDecalActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

