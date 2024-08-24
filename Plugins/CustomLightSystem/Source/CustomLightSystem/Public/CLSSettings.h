#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "CLSSettings.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class CUSTOMLIGHTSYSTEM_API UCLSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRTX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RTXActorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeVisualShadowRadiusWhenDLightRotate;
    
    UCLSSettings();

};

