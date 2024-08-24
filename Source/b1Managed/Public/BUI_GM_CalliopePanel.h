#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "BUI_GM_CalliopePanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_GM_CalliopePanel : public UBUI_Widget {
    GENERATED_BODY()
public:
    UBUI_GM_CalliopePanel();

    UFUNCTION(BlueprintCallable)
    FString GetInstanceDebugInfo(FName InInstanceName);
    
    UFUNCTION(BlueprintCallable)
    void RefreshInstanceListWithFilter(const FString& InFilterStr, TArray<FName>& Instances);
    
};

