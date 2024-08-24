#pragma once
#include "CoreMinimal.h"
#include "CustomizedInputType.h"
#include "InputCoreTypes.h"
#include "BGWDataAsset.h"
#include "CustomizedKeyConfig.h"
#include "GamepadCustomizedInputConfig.h"
#include "BGWDataAsset_CustomizedInputSetting.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_CustomizedInputSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> WhiteKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedKeyConfig> Configs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<CustomizedInputType, FGamepadCustomizedInputConfig> GamepadCustomizedInputConfigs;
    
    UBGWDataAsset_CustomizedInputSetting();

};

