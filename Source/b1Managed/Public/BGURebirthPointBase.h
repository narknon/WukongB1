#pragma once
#include "CoreMinimal.h"
#include "BGUInteractiveActorBase.h"
#include "BGURebirthPointBase.generated.h"

class UBUS_RebirthPointConfigComp;

UCLASS(Blueprintable)
class ABGURebirthPointBase : public ABGUInteractiveActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_RebirthPointConfigComp* RebirthPointConfigComp;
    
    ABGURebirthPointBase(const FObjectInitializer& ObjectInitializer);

};

