#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "ActorCompBaseUObj.h"
#include "BUS_AKMgrComp.generated.h"

class UAkCallbackInfo;
class UAkComponent;

UCLASS(Blueprintable)
class UBUS_AKMgrComp : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_AKMgrComp();

private:
    UFUNCTION(BlueprintCallable)
    void OnAkEventCallBack(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAkCompAutoDestroyed(UAkComponent* AkComp);
    
};

