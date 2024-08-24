#pragma once
#include "CoreMinimal.h"
#include "LayerSceneInfo.h"
#include "BULayerSceneInfoActor.generated.h"

UCLASS(Blueprintable)
class ABULayerSceneInfoActor : public ALayerSceneInfo {
    GENERATED_BODY()
public:
    ABULayerSceneInfoActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

