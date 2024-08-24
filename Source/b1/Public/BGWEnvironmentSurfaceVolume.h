#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "BGWEnvironmentSurfaceVolume.generated.h"

UCLASS(Blueprintable)
class B1_API ABGWEnvironmentSurfaceVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvironmentSurfaceEffectID;
    
    ABGWEnvironmentSurfaceVolume(const FObjectInitializer& ObjectInitializer);

};

