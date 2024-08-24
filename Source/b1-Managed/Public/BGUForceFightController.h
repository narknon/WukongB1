#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUForceFightController.generated.h"

class UBUS_ForceFightControllerConfigComp;

UCLASS(Blueprintable)
class ABGUForceFightController : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ForceFightControllerConfigComp* ForceFightControllerConfigComp;
    
    ABGUForceFightController(const FObjectInitializer& ObjectInitializer);

};

