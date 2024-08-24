#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "AbnomalAttrConfigInfo.h"
#include "BGWDataAsset_AbnormalAttrConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_AbnormalAttrConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Freeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Burn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Poison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Thunder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Yin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbnomalAttrConfigInfo AbnomalAttrConfigInfo_Yang;
    
    UBGWDataAsset_AbnormalAttrConfig();

};

