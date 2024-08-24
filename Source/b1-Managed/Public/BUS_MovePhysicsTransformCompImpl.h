#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ActorCompBaseUObj.h"
#include "BUS_MovePhysicsTransformCompImpl.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UBUS_MovePhysicsTransformCompImpl : public UActorCompBaseUObj {
    GENERATED_BODY()
public:
    UBUS_MovePhysicsTransformCompImpl();

private:
    UFUNCTION(BlueprintCallable)
    void OnRootCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector HitImpule, FHitResult Hit);
    
};

