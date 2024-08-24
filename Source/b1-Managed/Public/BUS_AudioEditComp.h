#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "UAkEventConfig.h"
#include "BUS_AudioEditComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_AudioEditComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAkEventConfig LoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUAkEventConfig DeadEvent;
    
    UBUS_AudioEditComp(const FObjectInitializer& ObjectInitializer);

};

