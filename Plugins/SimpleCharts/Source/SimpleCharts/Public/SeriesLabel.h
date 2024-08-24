#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SeriesLabelPosition.h"
#include "SeriesLabel.generated.h"

USTRUCT(BlueprintType)
struct FSeriesLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool show;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SeriesLabelPosition position;
    
    SIMPLECHARTS_API FSeriesLabel();
};

