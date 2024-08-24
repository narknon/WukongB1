#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUSpiderOceanMgrActor.generated.h"

class UBUS_SpiderOceanMgrComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUSpiderOceanMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SpiderOceanMgrComp* SpiderOceanMgrComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    ABGUSpiderOceanMgrActor(const FObjectInitializer& ObjectInitializer);

};

