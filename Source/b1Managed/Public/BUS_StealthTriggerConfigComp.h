#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_StealthTriggerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_StealthTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoStealthMode: 1;
    
    UBUS_StealthTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

