#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BUI_Widget.h"
#include "BUI_DebugDrawRoundRect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBUI_DebugDrawRoundRect : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefRoundWidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawThickness;
    
    UBUI_DebugDrawRoundRect();

    UFUNCTION(BlueprintCallable)
    void UpdateShow();
    
    UFUNCTION(BlueprintCallable)
    void SetRadiusCfg(FVector4 InRadiusCfg);
    
    UFUNCTION(BlueprintCallable)
    void ConstructDebugShow();
    
    UFUNCTION(BlueprintCallable)
    void SetRefRectPosCenter(FVector2D RefPos);
    
};

