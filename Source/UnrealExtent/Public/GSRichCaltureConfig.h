#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "GSRichCaltureConfig.generated.h"

USTRUCT(BlueprintType)
struct FGSRichCaltureConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UNREALEXTENT_API FGSRichCaltureConfig();
};

