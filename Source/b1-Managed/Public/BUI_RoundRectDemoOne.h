#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BUI_Widget.h"
#include "BUI_RoundRectDemoOne.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_RoundRectDemoOne : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UBUI_RoundRectDemoOne();

    UFUNCTION(BlueprintCallable)
    void UpdateShow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePosRefWorldPos(UWidget* TargetWidget, FVector WorldPos);
    
};

