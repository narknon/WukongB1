#pragma once
#include "CoreMinimal.h"
#include "Components/GridPanel.h"
#include "GSGridConScreenAdapter.generated.h"

UCLASS(Blueprintable)
class UGSGridConScreenAdapter : public UGridPanel {
    GENERATED_BODY()
public:
    UGSGridConScreenAdapter();

    UFUNCTION(BlueprintCallable)
    void UpdateForAdapt(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateForAdaptInEditorMode(float DeltaTime, int32 RefViewPortWidth, int32 RefViewPortHeight);
    
};

