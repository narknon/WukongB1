#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "GSRichZhuYinRow.generated.h"

USTRUCT(BlueprintType)
struct GSUMGEXT_API FGSRichZhuYinRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMainTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle MainTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ZhuYinMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle ZhuYinTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZhuYinTextHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZhuYinTextHeightPadding;
    
    FGSRichZhuYinRow();
};

