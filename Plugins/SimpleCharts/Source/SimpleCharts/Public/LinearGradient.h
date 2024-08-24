#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorStop.h"
#include "LinearGradient.generated.h"

USTRUCT(BlueprintType)
struct FLinearGradient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 ColorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorStop> colorStops;
    
    SIMPLECHARTS_API FLinearGradient();
};

