#pragma once
#include "CoreMinimal.h"
#include "GSFloatCurveToParam.h"
#include "BANS_GSBase.h"
#include "BANS_GSSetCurveValueToSimulateFog.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_GSSetCurveValueToSimulateFog : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSFloatCurveToParam> FloatCurveParamList;
    
    UBANS_GSSetCurveValueToSimulateFog();

};

