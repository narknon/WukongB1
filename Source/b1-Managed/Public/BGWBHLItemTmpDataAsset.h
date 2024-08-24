#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWBHLItemTmpDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWBHLItemTmpDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JTItemNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JHItemId;
    
    UBGWBHLItemTmpDataAsset();

};

