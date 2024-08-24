#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUNameTriggerActorBase.generated.h"

class UBUS_NameTriggerConfigComp;

UCLASS(Blueprintable)
class ABGUNameTriggerActorBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_NameTriggerConfigComp* NameTriggerConfigComp;
    
    ABGUNameTriggerActorBase(const FObjectInitializer& ObjectInitializer);

};

