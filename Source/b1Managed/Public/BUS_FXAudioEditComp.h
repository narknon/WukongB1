#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "UAkEventConfig.h"
#include "BUS_FXAudioEditComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FXAudioEditComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAkEventConfig LoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAkEventConfig DestructibleEvent;
    
    UBUS_FXAudioEditComp(const FObjectInitializer& ObjectInitializer);

};

