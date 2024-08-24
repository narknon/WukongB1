#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "GSDynamicSDFConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Transient, Config=GSDynamicSDF)
class UGSDynamicSDFConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MPCPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NPCPath;
    
    UGSDynamicSDFConfig();

};

