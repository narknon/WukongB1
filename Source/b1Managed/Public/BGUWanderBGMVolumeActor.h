#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUWanderBGMVolumeActor.generated.h"

class UBUS_WanderBGMVolumeComp;

UCLASS(Blueprintable)
class ABGUWanderBGMVolumeActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_WanderBGMVolumeComp* WanderBGMVolumeComp;
    
    ABGUWanderBGMVolumeActor(const FObjectInitializer& ObjectInitializer);

};

