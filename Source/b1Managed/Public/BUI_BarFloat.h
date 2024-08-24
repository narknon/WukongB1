#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "BUI_Widget.h"
#include "BUI_BarFloat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_BarFloat : public UBUI_Widget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent WAE_ShowInFinished;
    
public:
    UBUI_BarFloat();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished();
    
};

