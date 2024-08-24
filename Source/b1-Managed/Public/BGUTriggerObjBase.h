#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUInteractiveActorBase.h"
#include "BGUTriggerObjBase.generated.h"

class UBUS_TriggerComp;

UCLASS(Blueprintable)
class ABGUTriggerObjBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TriggerComp* TriggerComp;
    
public:
    ABGUTriggerObjBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

