#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BGUSpringArmSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class B1_API UBGUSpringArmSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, float> SurfaceHeightMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeightAboveCharacter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MixArmLengthTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugSphere;
    
    UBGUSpringArmSettings();

};

