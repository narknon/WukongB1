#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMGSplinePoint.generated.h"

USTRUCT(BlueprintType)
struct UMGSPLINE_API FUMGSplinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Direction;
    
    FUMGSplinePoint();
};

