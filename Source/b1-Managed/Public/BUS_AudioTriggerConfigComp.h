#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "AudioConfig.h"
#include "BUS_AudioTriggerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AudioTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioConfig> AudioList;
    
    UBUS_AudioTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

