#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "BGUForceOriginalFormTriggerArea.generated.h"

class UBUS_ForceOriginalFormAreaConfigComp;

UCLASS(Blueprintable)
class ABGUForceOriginalFormTriggerArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ForceOriginalFormAreaConfigComp* ForceOriginalFormAreaConfigComp;
    
    ABGUForceOriginalFormTriggerArea(const FObjectInitializer& ObjectInitializer);

};

