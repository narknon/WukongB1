#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AnimKeyBlenderSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class GSANIMATIONKEYBLENDER_API UAnimKeyBlenderSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugLogs;
    
    UAnimKeyBlenderSettings();

};

