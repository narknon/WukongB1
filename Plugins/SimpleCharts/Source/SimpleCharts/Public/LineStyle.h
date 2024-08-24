#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxisLineType.h"
#include "LineStyle.generated.h"

USTRUCT(BlueprintType)
struct FLineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AxisLineType Type;
    
    SIMPLECHARTS_API FLineStyle();
};

