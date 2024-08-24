#pragma once
#include "CoreMinimal.h"
#include "JavascriptUserObjectListEntry.h"
#include "Layout/Geometry.h"
#include "TestCaseUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTestCaseUI : public UJavascriptUserObjectListEntry {
    GENERATED_BODY()
public:
    UTestCaseUI();

protected:
    UFUNCTION(BlueprintCallable)
    void CustomTick(FGeometry MyGeometry, float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnInitialized();
    
};

