#pragma once
#include "CoreMinimal.h"
#include "BUI_Widget.h"
#include "DebugDrawPoint.h"
#include "GSDebugDraw.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSDebugDraw : public UBUI_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugDrawPoint> DrawScreenPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugDrawPoint> DrawViewPortPoint;
    
    UGSDebugDraw();

};

