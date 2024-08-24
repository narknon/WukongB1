#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "NormalStiffSectorsType.h"
#include "PartDamagedAMInfo.h"
#include "BGWDataAsset_PartBreakAMInfoConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PartBreakAMInfoConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableExtraAreaSelectType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    NormalStiffSectorsType SectorsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_ForwardLeft_FNB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_ForwardRight_FNB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_ForwardLeft_FourDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_ForwardRight_FourDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_BackwardLeft_FourDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PBAS_BackwardRight_FourDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartDamagedAMInfo> PartDamagedAMInfoList;
    
    UBGWDataAsset_PartBreakAMInfoConfig();

};

