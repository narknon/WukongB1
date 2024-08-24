#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GM_HatredAndTargetPanel.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GM_HatredAndTargetPanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GM_HatredAndTargetPanel();

private:
    UFUNCTION(BlueprintCallable)
    void CleanTargetInfos();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugTargetInfo(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetNeedShowDebugTargetInfos(AActor* Target, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInstanceListWithFilterRadius(const FString& _FilterRadius, TArray<FName>& Instances, TArray<AActor*>& Units);
    
};

