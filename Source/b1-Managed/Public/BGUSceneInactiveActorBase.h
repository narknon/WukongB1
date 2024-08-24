#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUSceneInactiveActorBase.generated.h"

class UBUS_SceneInactiveActorComp;

UCLASS(Blueprintable)
class ABGUSceneInactiveActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_SceneInactiveActorComp* SceneInactiveActorComp;
    
    ABGUSceneInactiveActorBase(const FObjectInitializer& ObjectInitializer);

};

