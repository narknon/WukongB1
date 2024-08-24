#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGUTaskStageCollectionBase.generated.h"

class UBUS_TaskStageCollectionConfigComp;

UCLASS(Blueprintable)
class ABGUTaskStageCollectionBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TaskStageCollectionConfigComp* TaskStageCollectionConfigComp;
    
    ABGUTaskStageCollectionBase(const FObjectInitializer& ObjectInitializer);

};

