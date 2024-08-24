#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "KeyIconInfo.h"
#include "BGWDataAsset_InputIconConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_InputIconConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyIconInfo> IconInfo;
    
    UBGWDataAsset_InputIconConfig();

};

