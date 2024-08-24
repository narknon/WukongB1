#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "EnvironmentMaskData.h"
#include "BGWDataAsset_EnvironmentMaskConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_EnvironmentMaskConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvironmentMaskData> EnvironmentMaskDataList;
    
    UBGWDataAsset_EnvironmentMaskConfig();

};

