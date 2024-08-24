#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BAIT_Base.h"
#include "TransformBySplineRotateType.h"
#include "BAIT_AdjustTransformBySpline.generated.h"

UCLASS(Blueprintable)
class UBAIT_AdjustTransformBySpline : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplineGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TransformBySplineRotateType RotateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustTime;
    
    UBAIT_AdjustTransformBySpline();

};

