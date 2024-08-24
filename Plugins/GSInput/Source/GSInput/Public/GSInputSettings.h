#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GSInputSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GSINPUT_API UGSInputSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyboardMouseDeadZoneThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadDeadZoneThreshold;
    
    UGSInputSettings();

};

