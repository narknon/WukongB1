#pragma once
#include "CoreMinimal.h"
#include "EGSAngleCenterDirection.h"
#include "EGSPointOnCircleSpacingMethod.h"
#include "GSEQG_SimpleTeleport.h"
#include "GSEQG_Circle.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class B1_API UGSEQG_Circle : public UGSEQG_SimpleTeleport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSPointOnCircleSpacingMethod PointOnCircleSpacingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSAngleCenterDirection AngleCenterDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightAngle;
    
    UGSEQG_Circle();

};

