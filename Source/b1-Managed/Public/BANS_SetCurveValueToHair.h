#pragma once
#include "CoreMinimal.h"
#include "EGsEnAnimNS.h"
#include "GSFloatCurveToParam.h"
#include "BANS_GSBase.h"
#include "EGSHairType.h"
#include "BANS_SetCurveValueToHair.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBANS_SetCurveValueToHair : public UBANS_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TemporaryClose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSHairType HairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HairCompTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSFloatCurveToParam> FloatCurveParamList;
    
    UBANS_SetCurveValueToHair();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimNS GetAnimNSType() const;
    
};

