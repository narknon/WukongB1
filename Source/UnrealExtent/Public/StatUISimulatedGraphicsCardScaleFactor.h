#pragma once
#include "CoreMinimal.h"
#include "EStatUISimulatedGraphicsCard.h"
#include "StatUISimulatedGraphicsCardScaleFactor.generated.h"

USTRUCT(BlueprintType)
struct FStatUISimulatedGraphicsCardScaleFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStatUISimulatedGraphicsCard> GraphicsCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> PerformanceScaleFactorMap;
    
    UNREALEXTENT_API FStatUISimulatedGraphicsCardScaleFactor();
};

