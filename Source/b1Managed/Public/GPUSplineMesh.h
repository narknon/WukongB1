#pragma once
#include "CoreMinimal.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "GPUSplineMesh.generated.h"

UCLASS(Blueprintable)
class AGPUSplineMesh : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    AGPUSplineMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

