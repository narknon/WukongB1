#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BUI_Widget.h"
#include "BUI_RoundRectDemo.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UBUI_RoundRectDemo : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UBUI_RoundRectDemo();

    UFUNCTION(BlueprintCallable)
    void UpdateShow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePosRefWorldPos(UWidget* TargetWidget, FVector WorldPos);
    
};

