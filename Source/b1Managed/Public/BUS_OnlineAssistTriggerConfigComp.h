#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_OnlineAssistTriggerConfigComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_OnlineAssistTriggerConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RebirthPointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnitGuid;
    
    UBUS_OnlineAssistTriggerConfigComp(const FObjectInitializer& ObjectInitializer);

};

