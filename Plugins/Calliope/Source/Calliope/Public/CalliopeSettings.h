#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "CalliopeSettings.generated.h"

class UCalliopeNode;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class CALLIOPE_API UCalliopeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugLogs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateCalliopeSubsystemOnClients;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCalliopeNode>, int32> DefaultPreloadDepth;
    
    UCalliopeSettings();

};

