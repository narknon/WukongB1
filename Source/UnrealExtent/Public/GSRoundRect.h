#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Overlay.h"
#include "GSRoundRect.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSRoundRect : public UOverlay {
    GENERATED_BODY()
public:
    UGSRoundRect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CalcMappingRoundRectPoint(FVector2D PosInViewPort, bool IsInFront, FVector2D InnerContentRectSize, FVector2D InnerContentRectAlign, bool IsOuter, FVector2D& BorderPosRefRoundRect, float& RectAngle, int32& OutIndicatorType);
    
};

