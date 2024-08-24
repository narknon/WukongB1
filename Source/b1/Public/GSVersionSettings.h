#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GSVersionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class B1_API UGSVersionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS5MasterVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XBoxMasterVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Revision;
    
    UGSVersionSettings();

};

