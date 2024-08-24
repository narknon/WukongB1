#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> YawRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyOrientationAlpha;
    
    GSENGINEEXTENT_API FAxisSettings();
};

