#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GSRoundRect.h"
#include "GSRoundRectCS.generated.h"

class UBUI_DebugDrawRoundRect;

UCLASS(Blueprintable)
class UGSRoundRectCS : public UGSRoundRect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 RadiusCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUI_DebugDrawRoundRect* DebugDrawWidget;
    
    UGSRoundRectCS();

    UFUNCTION(BlueprintCallable)
    void DebugTick();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDraw(bool IsDebugDraw);
    
    UFUNCTION(BlueprintCallable)
    bool IsInRoundRect(FVector2D PosInViewPort);
    
    UFUNCTION(BlueprintCallable)
    void GSOnConstruct();
    
    UFUNCTION(BlueprintCallable)
    void GSStartDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetLastUpdateCenterPos();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CalcMappingRoundRectPoint(FVector2D PosInViewPort, bool IsInFront, FVector2D InnerContentRectSize, FVector2D InnerContentRectAlign, bool IsOuter, FVector2D& BorderPosRefRoundRect, float& RectAngle, int32& OutIndicatorType);
    
};

