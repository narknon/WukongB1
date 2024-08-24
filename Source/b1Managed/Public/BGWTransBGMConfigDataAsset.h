#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "SingleTransBGMConfig.h"
#include "BGWTransBGMConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWTransBGMConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleTransBGMConfig TransBGMConfig;
    
    UBGWTransBGMConfigDataAsset();

};

