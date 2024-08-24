#pragma once
#include "CoreMinimal.h"
#include "BUS_ActorBaseDataComp.h"
#include "FlowActorType.h"
#include "BUS_FlowDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_FlowDataComp : public UBUS_ActorBaseDataComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FlowActorType FlowActorType;
    
    UBUS_FlowDataComp(const FObjectInitializer& ObjectInitializer);

};

