#pragma once
#include "CoreMinimal.h"
#include "BI_ProgBarCS.h"
#include "BI_HpProgBarCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_HpProgBarCS : public UBI_ProgBarCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseAbnormalFx: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ZeroHide: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedBgPercent: 1;
    
    UBI_HpProgBarCS();

};

