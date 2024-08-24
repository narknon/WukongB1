#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMGSplineDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct UMGSPLINE_API FUMGSplineDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawWidgetBoarder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BoarderColor;
    
    FUMGSplineDebugInfo();
};

