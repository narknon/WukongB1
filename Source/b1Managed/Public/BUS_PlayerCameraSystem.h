#pragma once
#include "CoreMinimal.h"
#include "ActorCompBaseUObj.h"
#include "BUS_PlayerCameraSystem.generated.h"

class APlayerCameraManager;
class APlayerController;

UCLASS(Blueprintable)
class UBUS_PlayerCameraSystem : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
public:
    UBUS_PlayerCameraSystem();

};

