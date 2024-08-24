#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUJJSObstacleBase.generated.h"

class UBUS_JJSObstacleConfigComp;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUJJSObstacleBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_JJSObstacleConfigComp* JJSObstacleConfigComp;
    
    ABGUJJSObstacleBase(const FObjectInitializer& ObjectInitializer);

};

