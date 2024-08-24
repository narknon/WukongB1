#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUActorCallerBase.generated.h"

class UBUS_ActorCallComp;

UCLASS(Blueprintable)
class ABGUActorCallerBase : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ActorCallComp* ActorCallComp;
    
    ABGUActorCallerBase(const FObjectInitializer& ObjectInitializer);

};

