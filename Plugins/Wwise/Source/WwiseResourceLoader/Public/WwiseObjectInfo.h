#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WwiseObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WwiseGuid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WwiseShortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WwiseName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HardCodedSoundBankShortId;
    
    FWwiseObjectInfo();
};

