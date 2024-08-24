#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUForceOriginalFormTriggerBoxActor.generated.h"

class UBUS_ForceOriginalFormConfigComp;
class UBoxComponent;

UCLASS(Blueprintable)
class ABGUForceOriginalFormTriggerBoxActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ForceOriginalFormTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ForceOriginalFormConfigComp* ForceOriginalFormConfigComp;
    
    ABGUForceOriginalFormTriggerBoxActor(const FObjectInitializer& ObjectInitializer);

};

