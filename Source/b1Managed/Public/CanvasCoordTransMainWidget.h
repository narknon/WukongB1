#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BUI_Widget.h"
#include "CanvasCoordTransMainWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCanvasCoordTransMainWidget : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImgSize;
    
    UCanvasCoordTransMainWidget();

    UFUNCTION(BlueprintCallable)
    void OnTickCallback(float DeltaTime);
    
};

