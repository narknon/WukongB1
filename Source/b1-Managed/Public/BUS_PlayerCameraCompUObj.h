#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_PlayerCameraCompUObj.generated.h"

UCLASS(Blueprintable)
class UBUS_PlayerCameraCompUObj : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_PlayerCameraCompUObj();

private:
    UFUNCTION(BlueprintCallable)
    void OnSwitchCameraGroupTo(int32 TargetCameraGroupId, float alpha, float BlendTime);
    
};

