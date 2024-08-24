#pragma once
#include "CoreMinimal.h"
#include "BGUSimpleActorBaseCS.h"
#include "BGUPlaceholderActorBase.generated.h"

class UBUS_PlaceholderActorConfigComp;

UCLASS(Blueprintable)
class ABGUPlaceholderActorBase : public ABGUSimpleActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_PlaceholderActorConfigComp* PlaceholderActorConfig;
    
    ABGUPlaceholderActorBase(const FObjectInitializer& ObjectInitializer);

};

